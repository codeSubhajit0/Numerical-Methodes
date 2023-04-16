#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 4 * x - 9
int main()
{
    double x0,x1,x2,f0,f1,f2;
    int i = 0 , n;
    printf("Enter two initial guesses x0 and x1\n");
    scanf("%lf %lf",&x0,&x1);
    printf("Enter the number of iterations \n");
    scanf("%d",&n);
    for(int j = 0; j<=n; j++){
        f0 = f(x0);
        f1 = f(x1);
        x2 = ((x0*f1)-(x1*f0))/(f1-f0);
        f2 = f(x2);
        f0 = f1;
        f1 = f2;
        x0 = x1;
        x1 = x2;
        i++;
        printf("Number of iterations %d \n",i);
        printf("Root =  %lf \n",x2);
        printf("Value of function %lf \n",f2);
        printf("------------------------------");
    }
    return 0;
}