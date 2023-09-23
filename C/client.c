#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <stdio.h>
#include<string.h>
#include<unistd.h>

int main(){
	int fd;
	int b;

	fd = socket(AF_INET, SOCK_DGRAM, 0);
	
	if(fd != -1){
		printf("Socket created succesfully\n");
	}
	else{
		printf("Socket not created\n");
	}
	
	struct sockaddr_in server;
	server.sin_family = AF_INET;
	server.sin_port = 6000;
	server.sin_addr.s_addr = inet_addr("127.0.0.1");

	b = bind(fd, (struct sockaddr*)&server, sizeof(server));


//	if(b != -1){
//		printf("\nBind success");
//	}
//	else{
//		printf("\nBind unsuccesfull");
//	}

	struct sockaddr_in server_1;
	server_1.sin_family = AF_INET;
	server_1.sin_port = 6000;
	server_1.sin_addr.s_addr = inet_addr("127.0.0.1");

	char st[10];
	printf("Enter a string\n");
	gets(st);
	
	int len = sizeof(server_1);
	sendto(fd,st,sizeof(st),0,(struct sockaddr *)&server_1,len);

	char buff[10];
	int l = sizeof(server_1);

	recvfrom(fd ,buff,sizeof(buff),0,(struct sockaddr *)&server_1,&l);
	printf("%s",buff);
}
