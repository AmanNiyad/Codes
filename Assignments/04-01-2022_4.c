#include<stdio.h>
int main(){
    char arr[20];
    char *p;
    p=&arr[0];
    
    printf("Enter the String1: \n");
    for(int i=0;i<4;i++){
        scanf("%c",p+i);
    }
    printf("Enter the String2: \n");
    for(int i=4;i<8;i++){
        scanf("%c",p+i);
    }
    printf("Enter the String3: \n");
    for(int i=8;i<12;i++){
        scanf("%c",p+i);
    }
    printf("Enter the String4: \n");
    for(int i=12;i<16;i++){
        scanf("%c",p+i);
    }
    printf("Enter the String5: \n");
    for(int i=16;i<20;i++){
        scanf("%c",p+i);
    }
    printf("The String entered is: \n");
    for (int i = 0; i < 20; i++){     
            printf("%c",*(p+i));
    }

        return 0;
}