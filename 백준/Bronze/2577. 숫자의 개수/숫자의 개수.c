#include<stdio.h>

int main(){
    
    int A, B, C, D = 0, num = 0, i;
    int arr[10] = {0, };
    
    scanf("%d %d %d", &A, &B, &C);
    
    D = A * B * C;
    
    while(D > 0){
        
        num = D % 10;
        arr[num]++;
        D /= 10;
        
    }
    
    for(i = 0; i <= 9; i++){
        printf("%d\n", arr[i]);
    }
    
}
