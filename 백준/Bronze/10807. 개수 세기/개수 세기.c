#include <stdio.h>
int main() {
    int n, v, cnt = 0;
    scanf("%d", &n);
    int a[101];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &v);
    
    for(int i = 0; i < n; i++){
        if(a[i] == v){
            cnt++;
        }
    }
    printf("%d", cnt);
}