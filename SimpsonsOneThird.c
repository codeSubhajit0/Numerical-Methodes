# include <stdio.h>
# include <math.h>
# include <stdbool.h>
bool isMethodeApplicable(float a[n][n+1]);
float findSum (int i , float a[n][n+1]);
void findValues (a,maxiterations,n,values_old);
int main (){
    
    return 0;
}

// checking if the formula can be applied or not
bool isMethodeApplicable(float a[n][n+1]){
    for(int i =0 ; i < n ; i++){
       for(int j =0 ; j < n ; j++) {
        if(fabs(a[i][i]>findSum(i,a)))
        break;
        else 
        return false;
        }
    }
    return true;
};

// returnimg the sum of the matrix
float findSum (int i , float a[n][n+1]){
float sum = 0;
for(int j = 0 ; j < n ; j++){
    if(i!=j)
        sum += fabs(a[i][j]);
}
return sum;
};

void findValues (a,maxiterations,n,values_old){
    int sum,values_new;
    for(int k = 1 ; k < maxiterations ; k++){
        for ( int i = 0 ; i < n ; i++){
            sum = 0;
            for (int j = 0 ; j < n ; j++){
                if (i != j)
                    sum += a[i][j]*values_old[j];
            }
            values_new [i] = (a[i][n] - sum)/a[i][j]; 
        }
    }
}