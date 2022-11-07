#define GNU_SOURCES
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double a,b,c,d,e;
    a=M_PI;
    b=0.001;
    for(i=1;i<=3141;i++){
        c=b*i;
        sincos(c,&d,&e);
        printf("c=%lf\tsin(c)=%lf\tcos(c)=%lf\n",c,d,e);
    }
    return 0;
}