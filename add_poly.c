#include<stdio.h>

int main()
{
    int n1,n2,i,j,k,c[50][50],n;
    printf("Enter the following data: ");
    printf("\n\n-----First polynomial-----");
    printf("\nEnter the number of terms: ");
    scanf("%d",&n1);
    int poly1[n1][2];
    printf("Enter the coefficients and exponents: ");
    printf("\n\tCoefficient\tExponent\n");
    for(i=0;i<n1;i++)
    {
        printf("Term %d: ",i+1);
        scanf("%d\t%d",&poly1[i][0],&poly2[i][1]);
    }
    printf("\n-----Second polynomial-----");
    printf("\nEnter the number of terms: ");
    scanf("%d",&n2);
    int poly2[n2][2];
    printf("\nEnter the coefficients and exponents: \n");
    printf("\tCoefficient\tExponent\n");
    for(j=0;j<n2;j++)
    {
        printf("Term %d:",j+1);
        scanf("%d\t%d",&poly2[i][0],&poly2[j][1]);
    }
    printf("\n1st ppolynomial: \n");
    for(i=0;i<n1;i++)
    {
        printf("%dx^%d",poly1[i][0],poly1[i][1]);
        if(i!=n1-1)
            printf("+");
    }
    printf("\n\n2nd polynomial: \n");
    for(j=0;j<n2;j++)
    {
        printf("%dx^%d",poly2[j][0],poly2[j][1]);
        if(j!=n2-1)
            printf("+");
    }
    i=0,j=0;k=0;
    while(i<n1 && j<n2)
    {
        if(poly1[i][1]>poly2[j][1])
        {
            c[k][0]=poly1[i][0];
            c[k][1]=poly1[i][1];
            i++,k++;
        }
        else if(poly1[i][1]<poly2[j][1])
        {
            c[k][0]=poly2[j][0];
            c[k][1]=poly2[j][1];
            j++,k++;
        }
        else
        {
            c[k][0]=poly1[i][0]+poly2[j][0];
            c[k][1]=poly1[i][1];
            i++,j++,k++;
        }
    }
    while(i<n1)
    {
        c[k][o]=poly1[i][0];
        c[k][1]=poly1[j][1];
        i++,k++;
    }
    while(j<n2)
    {
        c[k][0]=poly2[j][0];
        c[k][1]=poly2[j][1];
        j++,k++;
    }
    n=k;
    printf("\n\nResult: \n");
    for(k=0;k<n;k++)
    {
        printf{"%dx^%d",c[k][0],c[k][1]);
        if(k!=n-1)
            printf("+");
    }
    return 0;
}