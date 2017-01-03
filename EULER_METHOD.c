#include<stdio.h>
float fun(float x,float y)
{
    float f;
    f=-y;
    return f;
}
main()
{
    float a,b,x,y,h,t,k;
    int i=0;
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("\n  x\t  y\n");
    while(x<t)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}
