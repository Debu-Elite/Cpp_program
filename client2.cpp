#include<iostream>
#include<sys/socket.h>
#include<sys/un.h>
#include<unistd.h>
#include<cstring>
using namespace std;
#define SOCKET_PATH "tmp/ipc_2"

int main()
{
int client_fd=socket(AF_UNIX,SOCK_STREAM,0);
struct  sockaddr_un addr;
addr.sun_family=AF_UNIX;
strcpy(addr.sun_path,SOCKET_PATH);
sleep(1);
int check= connect(client_fd,(sockaddr*)&addr,sizeof(addr));
char msg[]="hello from client";
write(client_fd, msg, strlen(msg));
close(client_fd);



return 0;
}
