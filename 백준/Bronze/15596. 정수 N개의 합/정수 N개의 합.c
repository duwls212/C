#include <stdio.h>

long long sum(int *a, int n){
    
    long long ans = 0, i;
    
    for(i = 0; i < n; i++){ 
        ans += a[i];
        
    }
    return ans;
    
}
