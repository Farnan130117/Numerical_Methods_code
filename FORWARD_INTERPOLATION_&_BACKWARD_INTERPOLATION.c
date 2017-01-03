#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define order  4

int main()
{
    float   ax[MAX+1],ay[MAX+1],diff[MAX+1][order+1];
    float   nr=1.0,dr=1.0,h,p,x,yp;
    int n,i,j,k;
    printf("N:");
    scanf("%d",&n);
    printf("\nX   &   Y:\n");
    for(i=0;i<=n;i++)
    {
        scanf("%f%f",&ax[i],&ay[i]);
    }
    printf("\nenter the value  X  ,which you wants to Y:\n");
    scanf("%f",&x);
    h=ax[1]-ax[0];
    //first_oreder_difference
    for(i=0;i<=n-1;i++)
    {
        diff[i][1]=ay[i+1]-ay[i];
    }
      //second_oreder_difference
    for(j=2;j<=order;j++)
    {
        for(i=0;i<=(n-j);j++)
        {
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
        }
    }
    i=0;

    while(!(ax[i]>x))
    {

        i++;
    }
    i--;
    p=(x-ax[i])/h;
    yp=ay[i];
    //interpolation
    for(k=1;k<=order;k++)
    {
        nr=nr*(p-k+1);
        dr=dr*k;
        yp=yp+(nr/dr)*diff[i][k];
    }
    printf("\nfor %6.4f   the value of Y = %6.4f\n",x,yp);

    return 0;
}














/*
//forwad_backward
#include<stdio.h>
#include<math.h>
int main()
{
    float x[10],y[15][15];
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("X\tY\n");
    for(i = 0;i<n;i++){
            scanf("%f %f",&x[i],&y[i][0]);
    }
    //forward difference table
    for(j=1;j<n;j++)
        for(i=0;i<(n-j);i++)
            y[i][j] = y[i+1][j-1] - y[i][j-1];
    printf("\n***********Forward Difference Table ***********\n");
//display Forward Difference Table
    for(i=0;i<n;i++)
    {
        printf("\t%.2f",x[i]);
        for(j=0;j<(n-i);j++)
            printf("\t%.2f",y[i][j]);
        printf("\n");
    }
    //backward difference table
    for(j=1;j<n;j++)
//for j = 0 initially input is taken so we start from j=1
        for(i=n-1;i>(j-1);i--)
            y[i][j] = y[i][j-1] - y[i-1][j-1];
    printf("\n***********Backward Difference Table ***********\n");
//display Backward Difference Table
    for(i=0;i<n;i++)
    {
        printf("\t%.2f",x[i]);
        for(j=0;j<=i;j++)
            printf("\t%.2f",y[i][j]);
        printf("\n");
    }
return 0;
}
*/

