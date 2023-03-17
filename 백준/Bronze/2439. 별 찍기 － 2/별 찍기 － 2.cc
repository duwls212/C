#include <stdio.h>

int main(){
    
    int N, i=1, j, l;
    
    scanf("%d", &N);
    
    for(i=1; i<=N; i++){
        for(l=1; l<=N-i; l++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        j = 0;
        printf("\n");
    }
}
