#include <stdio.h>
int main(){
    int n, cnt = 0;
    int x[51] = {}, y[51] = {};
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
            if(j != k && x[j] < x[k] && y[j] < y[k]){
                cnt++;
            }
        }
        printf("%d ", cnt + 1);
        cnt = 0;
    }
}