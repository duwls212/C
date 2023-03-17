#include <stdio.h>

int main(){
    
    int M = 0, i, j, N;
    double  ave = 0, arr[999] = {0, }, sum = 0;
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        
        scanf("%lf", &arr[i]);
        
        if(arr[i] > M) M = arr[i];
        
    }
    
    for(j = 0; j < N; j++){
        
        arr[j] = arr[j] / M * 100.0;
        sum += arr[j];
        
    }
        
    ave = sum / N;
    printf("%.6lf", ave);
    
}

