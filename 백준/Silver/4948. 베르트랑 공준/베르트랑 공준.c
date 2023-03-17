#include <stdio.h>
int main(){
    int n, nn = 0, cnt;
    int sosu[246913] = {1, 1, 0, };

    for(int i = 2; i < 246913/i; i++){
        if(sosu[i] == 1) continue;
        
        for(int j = i * i; j < 246913; j+=i){
            if(j % i == 0){
                sosu[j] = 1;
            }
        }
        
    }

    while(1){
        scanf("%d", &n);
        if(n == 0){
            return 0;
        }
        
        nn = n * 2;
        cnt = 0;
        for(int i = n + 1; i <= nn; i++){
            if(sosu[i] != 1) cnt++;
        }
        printf("%d\n", cnt);
    }
}
