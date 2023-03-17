#include <stdio.h>

int main(){
    int N, M, i, j, sign = 0;
    
    scanf("%d %d", &M, &N);
    
    if(M == 1) M = 2;
    for(i = M; i <= N; i++){
        for(j = 2; j * j <= i; j++){
            if(i % j == 0){
                sign++;
                break;
            }
        }
        if(sign == 0) printf("%d\n", i);
        sign = 0;
    }
}