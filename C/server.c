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
	
	struct sockaddr_in x;
	x.sin_family = AF_INET;
	x.sin_port = 6000;
	x.sin_addr.s_addr = inet_addr("127.0.0.1");

	b = bind(fd, (struct sockaddr*)&x, sizeof(x));

//	if(b != -1){
//		printf("\nBind success");
//	}
//	else{
//		printf("\nBind unsuccesfull");
//	}	

	char buff[10];
	struct sockaddr_in client_1;
	int l = sizeof(client_1);

	recvfrom(fd,buff,sizeof(buff),0,(struct sockaddr *)&client_1,&l);

//	printf("%s",buff) NOT WORKING

	for(int i = 0 ;i<strlen(buff);i++){
		printf("%c",buff[i]);
	}

	char st[10];
	printf("Enter string");
	gets(st);

	int len = sizeof(client_1);
	sendto(fd,st,sizeof(st),0,(struct sockaddr *)&client_1,len);


}
