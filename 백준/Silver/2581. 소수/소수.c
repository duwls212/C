#include <stdio.h>

int main(){
    int M, N, i = 0, j, f = 0, k = 0, min = 0;
    int arr[10001] = {0, }, s[10001] = {0, };
    
    scanf("%d %d", &M, &N);
    
    for(j = M; j <= N; j++){
        arr[i] = j;
        i++;
    }
    
    i = 0;
    while(1){
        if(arr[i] == 1) f++;
        else{
            for(j = 2; j <= (arr[i] / 2); j++){
                if(arr[i] % j == 0){
                    f++;
                    break;
                }
            }
        }
        if(f == 0){
            k++;
            s[k] = arr[i];
            s[k] += s[k - 1];
            if(min == 0 && k == 1) min = arr[i];
            if(min > arr[i]) min = arr[i];
        }
        f = 0;
        i++;
        
        if(i > (N - M)) break;
    }
    
    if(k == 0){
        printf("-1");
    }
    else{
        printf("%d\n%d", s[k], min);
    }
}