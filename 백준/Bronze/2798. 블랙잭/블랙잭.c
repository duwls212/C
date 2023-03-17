#include <stdio.h>
int main(){
    int n, m, max = 0, l = 0;
    int num[101] = {}, sum[99999] = {};
    
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
   
    for(int i = 0; i < n; i++){
        for(int j = (i + 1); j < n; j++){
            for(int k = (j + 1); k < n; k++){
                sum[l] = num[i] + num[j] + num[k];
                
                if(max < sum[l] && sum[l] <= m){
                    max = sum[l];
                }
                l++;
            }
        }
    }
    printf("%d", max);
}