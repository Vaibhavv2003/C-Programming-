#include <stdio.h>
#include <math.h>
int main()
{
    float V,u,a,t,S,T,b,c,H,p,z;
    printf("enter value of u,a,t,b,p,c\n");
    scanf("%f %f %f %f %f %f",&u,&a,&t,&b,&p,&c);
    V=u+a*t;
    printf("value of 1st equation: %f\n",V);
    S=u*t + 0.5*a*t*t;
    printf("value of 2nd equation: %f\n",S);
    T=2*a+ pow(b+9*c,0.5);
    printf("value of 3rd equation: %f\n",T);
    H=pow(b*b+p*p,0.5);
    printf("value of 4th equation: %f\n",H);
}