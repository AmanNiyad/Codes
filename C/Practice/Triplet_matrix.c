#include <stdio.h>

void assign(int N, int M, int arr[N][M]);
void display(int N, int M,int arr[N][M]);
void triplet(int N, int M, int arr[N][M],int t[N+1][M]);

int main(){
    int i,j;
    int N,M;

    printf("Enter number of rows: ");
    scanf("%d",&N);
    printf("Enter number of columns: ");
    scanf("%d",&M);

    int m1[N][M],t1[N+1][M];

    assign(N,M,m1);
    triplet(N,M,m1,t1);
    display(N,M,t1);
    

}

void assign(int N, int M, int arr[N][M]){
    printf("Enter the values: \n");
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<M ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int N, int M,int arr[N][M]){
    printf("The triplet form of the matrix is: \n");

    for(int i=0 ; i<N+1 ; i++){
        for(int j=0 ; j<M ; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void triplet(int N, int M, int arr[N][M],int t[N+1][M]){
    int ctr=0,i,j;
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            if(arr[i][j]!=0){
                ctr+=1;
            }
        }
    }
    t[0][0]=3;
    t[0][1]=3;
    t[0][2]=ctr;

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            if(arr[i][j]!=0){
                t[i+1][0]=i;
                t[i+1][1]=j;
                t[i+1][2]=arr[i][j];
            }
        }
    }
}