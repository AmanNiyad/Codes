#include<stdio.h>
void customfunc(int m,int n,char c){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c ",c);
        }
        printf("\n");
    }
}
int main(){
    customfunc(3,2,'-');
    printf("AB\n");
    customfunc(6,3,'=');
    printf("DF\n");
    customfunc(2,5,'*');
    return 0;
}