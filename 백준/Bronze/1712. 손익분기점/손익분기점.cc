#include <stdio.h>

int main(){
    unsigned int A, B, C, n = 1;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if(B >= C){
        printf("%d", -1);
        return 0;
    }
    
    n = (A / (C - B)) + 1;
    
    printf("%d", n);
}