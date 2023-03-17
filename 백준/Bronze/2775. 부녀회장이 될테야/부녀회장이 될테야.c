#include <stdio.h>

int main(){
    int k, n, i, j, Tcase;
    int sum[17] = {0, };
    
    scanf("%d", &Tcase);
    
    for(j = 1; j <= Tcase; j++){
        
        int t = 0;
        
        for(i = 1; i <= 17; i++){
            sum[i] = t + 1;
            t++;
        }
        scanf("%d\n%d", &k, &n);
        
        for(t = 1; t <= k; t++){
            
            for(i = 1; i <= n; i++){
                sum[i] = sum[i] + sum[i - 1];
            }
        }
        printf("%d\n", sum[n]);
    }
}
