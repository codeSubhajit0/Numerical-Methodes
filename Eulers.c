// WRITE A C PROGRAM TO FIND AN APPROMIXAMATE VALUE OF y CORRESPONDING TO X = 0.1 , GIVEN THAT f(x,y) = (1 + xy), y = 2 when x = 0, h = 0.01 using Euler's Method.


#include <stdio.h>

float f ( float, float );

int main(){
    float x;
    float y;
    float h;
    float n;
    float xf;

    int i;

    printf("\n");

    printf("ENTER THE INITIAL VALUE OF x : ");
    scanf("%f", &x);

    printf("\n");    

    printf("ENTER THE VALUE OF f(x) y : ");
    scanf("%f", &y);

    printf("\n");

    printf("ENTER THE VALUE OF h : ");
    scanf("%f", &h);

    printf("\n");

    printf("ENETER THE VALUES FOR THE DESIRED VALUES : ");
    scanf("%f", &xf);

    n = (xf - x) / h;
    
    for ( i = 1; i<=(int)n; i++ ) {
        y = y + (h*f(x,y));
        x = x + h;
    }

    printf("\n");
    printf("RESULT OF THE DESIRED DERIVATIVE FUNCTION IS : %f", y);

    return 0;
}

float f ( float x, float y ) {
    return (1+(x*y));
}