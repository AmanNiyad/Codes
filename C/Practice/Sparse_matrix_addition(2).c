//WAP to implement sparse matrix using array and LL
//Wap to implement addition of two sparse matrix.

#include<stdio.h>


int sparseAdd(int t1[3][100], int t2[3][100],int size_1,int size_2);

void input_to_matrix(int r,int c,int a[r][c])
{
    printf("Enter elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void printing(int r,int c,int a[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int sparse_to_triplet(int r,int c,int a[r][c],int *num)
{
    int size=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                size++;
            }
        }
    }
    int triplet[size][3];
    int k=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                triplet[k][0]=i;
                triplet[k][1]=j;
                triplet[k][2]=a[i][j];
                k++;
            }
        }

    }

    printf("\nPrinting the triplet form of sparse matrix:\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",triplet[i][j]);
        }
        printf("\n");
    }
    *num=size;
    return(triplet[size][3]);
    
}

int main()
{
    int r,c,t1,t2,size_1,size_2;
    printf("Enter the number fo rows: ");
    scanf("%d",&r);
    printf("\nEnter the number of columns: ");
    scanf("%d",&c);
    int a[r][c];
    input_to_matrix(r,c,a);
    printing(r,c,a);
    t1=sparse_to_triplet(r,c,a,&size_1);
    int b[r][c];
    input_to_matrix(r,c,b);
    printing(r,c,b);
    t2=sparse_to_triplet(r,c,b,&size_2);
    sparseAdd(t1,t2,size_1,size_2);
}


int sparseAdd(int t1[3][100], int t2[3][100],int size_1,int size_2){

    int i = 0, j = 0, sparse[3][100], x = 0;

    while (i < size_1 && j < size_2)
    {
        if ((t1[0][i] == t2[0][j]) && (t2[1][j] == t1[1][i]))
        {
            printf("Entered this");
            sparse[0][x] = t1[0][i];
            sparse[1][x] = t1[1][i];
            sparse[2][x] = t2[2][j] + t1[2][i];
            x++;
            i++;
            j++;
        }
        else
        {
            if (t1[0][i] < t2[0][j])
            {
                sparse[0][x] = t1[0][i];
                sparse[1][x] = t1[1][i];
                sparse[2][x] = t1[2][i];
                x++;
                i++;
            }

            else
            {
                if ((t1[0][i] == t2[0][j]) && (t1[1][i] < t2[1][j]))
                {
                    sparse[0][x] = t1[0][i];
                    sparse[1][x] = t1[1][i];
                    sparse[2][x] = t1[2][i];
                    x++;
                    i++;
                }
                else
                {
                    sparse[0][x] = t1[0][j];
                    sparse[1][x] = t1[1][j];
                    sparse[2][x] = t1[2][j];
                    x++;
                    j++;
                }
            }
        }
    }

    while (i < size_1)
    {
        sparse[0][x] = t1[0][i];
        sparse[1][x] = t1[1][i];
        sparse[2][x] = t1[2][i];
        x++;
        i++;
    }
    while (j < size_2)
    {
        sparse[0][x] = t1[0][j];
        sparse[1][x] = t1[1][j];
        sparse[2][x] = t1[2][j];
        x++;
        j++;
    }

    printf("\n Addition Matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("%d", sparse[i][j]);
        }
        printf("\n");
    }
}

    
    
