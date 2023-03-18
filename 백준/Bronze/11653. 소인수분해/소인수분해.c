#include <stdio.h>

int main(){
    int N, j = 2;
    
    scanf("%d", &N);
    if(N == 1) return 0;
    
    while(N >= 2){
        if(N % j == 0){
            printf("%d\n", j);
            N = N / j;
        }
        else j++;
    }
    
}