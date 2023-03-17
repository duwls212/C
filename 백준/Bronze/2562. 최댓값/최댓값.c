#include <stdio.h>

int main(){
    
    int a[100], i, max = 0, f = 0;
    
    for(i = 0; i <= 8; i++){
        
        scanf("%d", &a[i]);
        
        if(a[i] > max){
            max = a[i];
            f = i + 1;
        }
        
    }
    
    printf("%d\n%d", max, f);
  
}
