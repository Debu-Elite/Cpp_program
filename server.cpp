#include <iostream>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <cstring>

#define SOCKET_PATH "./ipc_socket_cpp"

int main() {
    int server_sock, client_sock;
    struct sockaddr_un addr;
    char buf[100];

    // Remove existing socket file
    unlink(SOCKET_PATH);

    // Create UNIX domain socket
    server_sock = socket(AF_UNIX, SOCK_STREAM, 0);
    if (server_sock < 0) {
        perror("socket");
        return 1;
    }

    // Set up address structure
    addr.sun_family = AF_UNIX;
    strcpy(addr.sun_path, SOCKET_PATH);

    // Bind socket
    if (bind(server_sock, (struct sockaddr*)&addr, sizeof(addr)) == -1) {
        perror("bind");
        close(server_sock);
        return 1;
    }

    // Listen for connections
    if (listen(server_sock, 5) == -1) {
        perror("listen");
        close(server_sock);
        return 1;
    }
    std::cout << "C++ Server listening on " << SOCKET_PATH << std::endl;

    // Accept client connection
    client_sock = accept(server_sock, nullptr, nullptr);
    if (client_sock < 0) {
        perror("accept");
        close(server_sock);
        return 1;
    }

    // Read data from client
    int n = read(client_sock, buf, sizeof(buf)-1);
    if (n > 0) {
        buf[n] = '\0';
        std::cout << "Received from client: " << buf << std::endl;
    }

    // Clean up
    close(client_sock);
    close(server_sock);
    unlink(SOCKET_PATH);

    return 0;
}

