#include <iostream>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <cstring>

#define SOCKET_PATH "./ipc_socket_cpp"

int main() {
    int sock_fd;
    struct sockaddr_un addr;
    std::string message = "Hello from C++ client";

    // Create UNIX domain socket
    sock_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (sock_fd < 0) {
        perror("socket");
        return 1;
    }

    // Set up server address structure
    addr.sun_family = AF_UNIX;
    strcpy(addr.sun_path, SOCKET_PATH);

    // Connect to the server
    if (connect(sock_fd, (struct sockaddr*)&addr, sizeof(addr)) == -1) {
        perror("connect");
        close(sock_fd);
        return 1;
    }

    // Send message to server
    write(sock_fd, message.c_str(), message.size());
    std::cout << "Message sent to server: " << message << std::endl;

    // Close socket
    close(sock_fd);

    return 0;
}

