#include <stdio.h>
int main(){
    int V, A, B, D = 0;
    
    scanf("%d %d %d", &A, &B, &V);
    
    D = (V - B - 1) / (A - B) + 1;
    
    printf("%d", D);
}
