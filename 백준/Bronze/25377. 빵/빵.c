#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, min = 1001;
    scanf("%d", &n);
    
    int* A = malloc(sizeof(int) * n);
    int* B = malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &A[i], &B[i]);
        
        if(A[i] <= B[i]){
            if(min > B[i]){
                min = B[i];
            }
        }
    }
    printf("%d", min);
}