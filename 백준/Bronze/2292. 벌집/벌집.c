#include <stdio.h>

int main(){
    int i = 1, j = 6, cnt = 1, x;
    
    scanf("%d", &x);
    
    if(x == 1){
        printf("1");
        return 0;
    }
    while(1){
         cnt++;
         if(i < x && x <= i + j){
             printf("%d", cnt);
             return 0;
         }
        i += j;
        j = 6;
        j = j * cnt;
    }
}
