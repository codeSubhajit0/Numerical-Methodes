#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 0.001
#define f(x) x *x *x - 9 * x + 1
void main()
{
    float x0, x1, x2, y0, y1, y2;
    int i = 0;
    printf("Enter the values of x0 and x1 \n");
    scanf("%f %f", &x0,&x1);
    do{
        y0 = f(x0);
        y1 = f(x1);
        x2 = (x0 + x1)/2;
        y2 = f(x2);
        if((y0*y2) < 0)
        x1 = x2;
        else 
        x0 = x2;
        i++;
        printf("Number of iterations %d \n",i);
        printf("Root = %f \n",x2);
        printf("Value of function = %f \n",y2);
        printf("--------------------------------\n");
    } while (fabs(y2) > e);
    getchar();
}
