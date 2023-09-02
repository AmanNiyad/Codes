#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <stdio.h>

int main(){
	int fd;
	int b;

	fd = socket(AF_INET, SOCK_DGRAM, 0);
	
	if(fd != -1){
		printf("Socket created succesfully");
	}
	else{
		printf("Socket not created");
	}
	
	struct sockaddr_in x;
	x.sin_family = AF_INET;
	x.sin_port = 6000;
	x.sin_addr.s_addr = inet_addr("127.0.0.1");

	b = bind(fd, (struct sockaddr*)&x, sizeof(x));

	if(b != -1){
		printf("\nBind success");
	}
	else{
		printf("\nBind unsuccesfull");
	}	
}
