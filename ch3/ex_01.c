#include <stdio.h>

#define N 10

int gcd(int a, int b){
    if(a==0 || b==0){
        return 0;
    }
    int t;
    while(a >0){
        if(a<b){
            t = a;
            a = b;
            b = t;
        }
        a -= b;
    }
    return b;
}

int main(){
    int mat[N][N];
    int temp;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            temp = gcd(i, j)==1?1:0;
            mat[i][j] = temp;
            mat[j][i] = temp; 
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}