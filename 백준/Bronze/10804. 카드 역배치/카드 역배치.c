#include <stdio.h>
int main(){
    int a, b, arr[22], temp;
    
    for(int i = 1; i < 21; i++){
        arr[i] = i;
    }
    
    for(int i = 0; i < 10; i++){
        scanf(" %d %d", &a, &b);
        
        if(a == b){
            continue;
        }
        else if(a + 1 ==  b){
            temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
        }
        else {
            for(int j = 0; j <= (b - a) / 2; j++){
                temp = arr[a + j];
                arr[a + j] = arr[b - j];
                arr[b - j] = temp;
            }
        }
    }
    
    for(int i = 1; i < 21; i++){
        printf("%d ", arr[i]);
    }
}