#include <stdio.h>

void assign(int M,int N,int m[M][N]);
void display(int M,int N,int m[M][N]);
void transpose(int M,int N,int m[M][N],int tran[M][N]);
void triplet(int M,int N,int m[M][N],int size,int t[M][N]);

int main(){
    int M1,N1;
    int m1[M1][N1];
    int t1[ctr+1][3];
    int t1_dash[ctr+1][3];
    int M2,N2;
    int m2[M2][N2];
    int t2[ctr+1][3];
    int t2_dash[ctr+1][3];


    printf("Enter number of rows for matrix 1: ");
    scanf("%d",&M1);
    printf("Enter number of columns for Matrix 1: ");
    scanf("%d",&N1);

    assign(M1,N1,m1);

    int ctr=0;
    for(int i=0;i<M1;i++){
        for(int j=0;j<N1;j++){
            if(m1[i][j]!=0){
            ctr++;
            }
        }
    }

    triplet(M1,N1,m1,ctr+1,t1);
    printf("Triplet form of matrix1:\n");
    display(ctr+1,3,t1);
    printf("Transpose of matrix1:\n");
    transpose(ctr+1,3,t1,t1_dash);
    display(ctr+1,3,t1_dash);


    printf("Enter number of rows for matrix 2: ");
    scanf("%d",&M2);
    printf("Enter number of columns for Matrix 2: ");
    scanf("%d",&N2);



    assign(M2,N2,m2);

    int ctr=0;
    for(int i=0;i<M2;i++){
        for(int j=0;j<N2;j++){
            if(m2[i][j]!=0){
            ctr++;
            }
        }
    }

    triplet(M2,N2,m2,ctr+1,t2);
    printf("Triplet form of matrix2:\n");
    display(ctr+1,3,t2);
    transpose(ctr+1,3,t2,t2_dash);
    printf("Transpose of matrix1:\n");
    display(ctr+1,3,t2_dash);

}



void assign(int M,int N,int m[M][N]){
    printf("Enter the values: ");
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&m[i][j]);
        }
    }
}



void display(int M,int N,int m[M][N]){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}



void transpose(int M,int N,int m[M][N],int tran[M][N]){
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            tran[i][j]=m[i][j];
        }
    }
    int j=0;
    for(int i=1;i<M;i++){
        tran[i][j]=m[i][j+1];
        tran[i][j+1]=m[i][j];   
    }
}



void triplet(int M,int N,int m[M][N],int size,int t[size][3]){
    t[0][0]=M;
    t[0][1]=N;
    t[0][2]=size-1;
    int temp=1;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(m[i][j]!=0){
                t[temp][0]=i;
                t[temp][1]=j;
                t[temp][2]=m[i][j];
                temp++;
            }
        }
    }
}



void addition(int M,int N,int m1[M][N],int m2[M][N],int m3[][3]){
    int k=0;
    for(int i=1;i<M;i++){
        for(int j=1;j<M;j++){
            
        }
    }
}