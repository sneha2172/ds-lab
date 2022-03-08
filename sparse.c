#include<stdio.h>

int main()
{
    int i,j,k=0,r,c;
    printf("Enter the no. of rows: ");
    scanf("%d",&r);
    printf("Enter the no. of columns: ");
    scanf("%d",&c);
    printf("Enter the matrix elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Positon[%d,%d]: ",(i+1),(j+1));
            scanf("%d",&arr[i][j]);
        }
    }
    int size=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]!=0)
                size+=1;
        }
    }
    int spr[size][3];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]!=0)
            {
                spr[k][0]=i+1;
                spr[k][1]=j+1;
                spr[k][2]=arr[i][j];
                k++;
            }
        }
    }
    printf("\nSparse Matrix: \n");
    printf("Rows\tColumns\tValue\n");
    for(k=0;k<size;k++)
    {
        printf("%d\t%d\t/%d\n",spr[k][0],spr[k][1],spr[k][2]);
    }
    return 0;
}