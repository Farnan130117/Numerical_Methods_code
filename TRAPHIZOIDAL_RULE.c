#include<stdio.h>
float y(float x){
    return 1/(1+x);
}
int main(){
    float x0,xn,h,s;
    int i,n;
    printf("Enter x0, xn, no. of subintervals: ");
    scanf("%f%f%d",&x0,&xn,&n);
    h = (xn-x0)/n;
    s = y(x0) + y(xn);
    for(i = 1; i < n; i++){
        s += 2*y(x0+i*h);
    }
    printf("Value of integral is %.5f\n",(h/2)*s);
    return 0;
}
