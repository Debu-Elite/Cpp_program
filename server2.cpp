#include<iostream>
#include<sys/socket.h>
#include<sys/un.h>
#include<unistd.h>
#include<cstring>
using namespace std;
#define SOCK_PATH "/tmp/ipc_2"


int main()
{

int socket_fd=socket(AF_UNIX,SOCK_STREAM,0);
int client_fd;

struct sockaddr_un addr;

addr.sun_family=AF_UNIX;
strcpy(addr.sun_path,SOCK_PATH);

int df=bind(socket_fd,(sockaddr*)&addr,sizeof(addr));

int lis = listen(socket_fd,5);

int cl=accept(socket_fd,nullptr,nullptr);
char buffer[100]={0};
read(client_fd,buffer,sizeof(buffer));
cout<<"received="<<buffer<<endl;

close(client_fd);
close(socket_fd);


return 0;
}
