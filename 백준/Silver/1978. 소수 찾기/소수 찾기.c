#include <stdio.h>
#include <string.h>

int main(){
    int N, j = 0, s = 0, f = 0;
    int x[100] = {0, };
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }
    int i = 0;
    
    while(1){
        if(x[i] == 1) f++;
        else{
            for(j = 2; j <= (x[i] / 2); j++){
                if(x[i] % j == 0){
                    f++;
                    break;
                }
            }
        }
       
        if(f == 0){
            s++;
        }
        f = 0;
        i++;
        
        if(i >= N) break;
    }
   
    printf("%d", s);
}