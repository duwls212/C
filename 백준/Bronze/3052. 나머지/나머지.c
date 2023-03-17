#include<stdio.h>

int main(){
    
    int a, result = 0, i, j, cnt = 0;
    int arr[10];
    
    for(i = 0; i <=9 ; i++){
        
        scanf("%d", &a);
        arr[i] = a % 42;
        
    }
    
    for(i = 0; i <= 9; i++){
        for(j = i + 1; j <= 9; j++){
            
            if(arr[i] == arr[j]) cnt++;
            
        }
        
        if(cnt == 0) result++;
        
        cnt = 0;
        
    }
    
    printf("%d", result);
    
}
