#include <stdio.h>

int main(){
    
    int N, a, max = -1000001, min = 1000001, i;
    
    scanf ("%d", &N);
    
    for(i = 1; i <= N; i++){
        
        scanf("%d", &a);
        
        if(a > max){
            max = a;
        }
        
        if(a < min){
            min = a;
        }


    }
    
    printf("%d %d", min, max);
    
}
