#include <stdio.h>

void assign(int N, int M, int arr[N][M]);
void display(int N, int M,int arr[N][M],int m[N][M]);
void triplet(int N, int M, int arr[N][M], int t[N+1][M]);
void addition(int N, int M, int n, int t1[N][3], int t2[N][3],int sum[n][3]);

int main(){
    int i,j;
    int N1,M1,N2,M2;

    printf("Enter number of rows for Matrix 1: ");
    scanf("%d",&N1);
    printf("Enter number of columns for Matrix 1: ");
    scanf("%d",&M1);

    int m1[N1][M1],t1[N1+1][3];

    assign(N1,M1,m1);
    triplet(N1,M1,m1,t1);
    display(N1,M1,t1,m1);

    printf("Enter number of rows for Matrix 2: ");
    scanf("%d",&N2);
    printf("Enter number of columns for Matrix 2: ");
    scanf("%d",&M2);

    int ctr=0;
    for(i=0 ; i<N1 ; i++){
        for(j=0 ; j<M1 ; j++){
            if(m1[i][j]!=0){
                ctr+=1;
            }
        }
    }

    int m2[N2][M2],t2[ctr+1][3];

    assign(N2,M2,m2);
    triplet(N2,M2,m2,t2);
    display(N2,M2,t2,m2);
    
    if(N1==N2 & M1==M2){
    }
    else{
        printf("Addition is not possible.");
    }
    int n=t1[0][2]+t2[0][2];
    int sum[n][3];

    addition(N1,M1,n,t1,t2,sum);

    printf("The sum of the matrix is: \n");

    for(int i=0 ; i<n+1 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}



void assign(int N, int M, int arr[N][M]){
    printf("Enter the values: \n");
    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<M ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int N, int M,int arr[N][M],int m[N][M]){
    printf("The triplet form of the matrix is: \n");
    int ctr=0,i,j;
    for(i=0 ; i<N ; i++){
        for(j=0 ; j<M ; j++){
            if(m[i][j]!=0){
                ctr+=1;
            }
        }
    }

    for(i=0 ; i<ctr+1 ; i++){
        for(j=0 ; j<M ; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void triplet(int N, int M, int arr[N][M],int t[N+1][M]){
    int ctr=0,i,j;
    for(i=0 ; i<N ; i++){
        for(j=0 ; j<M ; j++){
            if(arr[i][j]!=0){
                ctr+=1;
            }
        }
    }
    t[0][0]=3;
    t[0][1]=3;
    t[0][2]=ctr;

    for(i=0 ; i<ctr+1 ; i++){
        for(j=0 ; j<3 ; j++){
            if(arr[i][j]!=0){
                t[i+1][0]=i;
                t[i+1][1]=j;
                t[i+1][2]=arr[i][j];
            }
        }
    }
}

void addition(int N, int M,int n, int t1[N][3], int t2[N][3], int sum[n][3]){
    int add;
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            if(t1[i+1][0]==t2[i+1][0] & t1[i+1][1]==t2[i+1][1]){
                add=t1[i+1][2]+t2[i+1][2];
                sum[i][0]=t1[i+1][0];
                sum[i][1]=t1[i+1][1];
                sum[i][2]=add;
            }
            else{
                sum[i][0]=t1[i+1][0];
                sum[i][1]=t1[i+1][1];
                sum[i][2]=t1[i+1][2];
                sum[i+1][0]=t2[i+1][0];
                sum[i+1][1]=t2[i+1][1];
                sum[i+1][2]=t2[i+1][2];
            }
        }
    }
}