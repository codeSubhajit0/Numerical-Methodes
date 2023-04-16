#include <stdio.h>
#include <math.h>
#define f(x) x*x*x - 4*x - 9
int main(){
    float x0,x1,x2,f0,f1,f2;
    int i = 0,n;
    printf("Enter the values of x0 and x1 \n");
    scanf("%f %f",&x0,&x1);
    printf("Enter the number of iterations \n");
    scanf("%d",&n);
    for(int j = 0 ; j < n ; j++){
        f0 = f(x0);
        f1 = f(x1);
        x2 = ((x0*f1) - (x1*f0))/(f1 - f0);
        f2 = f(x2);
        if(f0*f2 < 0){
            x1 = x2 ;
            f1 = f2;
            }
        else {
            x0 = x2;
            f0 = f2;
        }
        i++;
        printf("Number of iterations %d \n",i);
        printf("Root =  %f \n",x2);
        printf("Value of function %f \n",f2);
        printf("------------------------------");

    }
    return 0;
}