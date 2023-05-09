#include <stdio.h>
#include <stdlib.h>

int* sort(int* num, int i){
    int temp = 0;

    for(int j = 1; j <= i; j++){
        for(int k = 0; k < j; k++){
            if(num[j] > num[k]){
                temp = num[j];
                num[j] = num[k];
                num[k] = temp;
            }
        }
    }
    return num;
}

int main(){
    int i, n, k;
    
    scanf("%d %d", &n, &k);
    int* num = malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    
    num = sort(num, n);
    printf("%d", num[k-1]);
}