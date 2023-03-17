#include <stdio.h>
int main(){
    int M = 1, S = 1, cro = 0, sum = 0, temp = 0, csum = 0, x; //M: 분모, S: 분자
    
    scanf("%d", &x);
    
    if(x == 1){
        printf("%d/%d", S, M);
        return 0;
    }
    
    int i = 0;
    
    while(1){
        i++;
        temp = sum;
        sum += i;
        if(temp < x && sum >= x) break;
    }
    
    cro = sum - temp;
    csum = cro + 1;
    
    M = cro;
    S = csum - cro;
 
    for(i = 0; i < sum - x; i++){
        M--;
        S++;
    }
    
    if(cro % 2 != 0){
        printf("%d/%d", S, M);
    }
    else{
        printf("%d/%d", M, S);
    }
    
}
