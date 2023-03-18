#include <stdio.h>

int main(){

    int N, sum = 0, num = 0, i = 0;
    char str[500];
    
    scanf("%d", &N);
    
    while(i <= N){
        scanf("%c", str);
        sscanf(str, "%d", &num);
        sum += num;
        num = 0;
        i++;
    }
    printf("%d", sum);
}
