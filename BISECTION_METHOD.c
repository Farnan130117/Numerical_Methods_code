#include<stdio.h>
#include<math.h>

float a,b;
float  f(float  x)
    {
        return(x*x*x-4*x-9);
    }

void    limit()
{
    int i,j,n=100;
    for(i=1;i<n;i++)
    {
        if(f(i)*f(i+1) <    0)
        {
            printf("%d  %d\n",i,i+1);
            a=i;
            b=i+1;
            break;
        }
    }
}

int main()
{
    float   x,x1,err=0.0005;
    int i=1,n=20;
    printf("find   the value  a,b:\n");
    limit();
    printf("the  maximum iteration:%d\n",n);
    //scanf("%f%f%d",&a,&b,&n);
    x=(a+b)/2;
    printf("iteration   no. %d  x=%10.5f\n",i,x);
    i++;
    while(i<n)
        {
            if(f(a)*f(x)<0)
                b=x;
            else
             a=x;

            x=(a+b)/2;
            printf("iteration   no. %d  x=%10.5f\n",i,x);
            if(fabs(x1-x)<err)
            {
                printf("\nafter %d  iterations, the value   of  root    is  %f\n",i,x);
                break;
            }
            x1=x;
            i++;
        }
        if(i>=n)
        {
             printf("\nsolution does    not exist   as  iterations  are not sufficient");
        }
     return 0;
}


