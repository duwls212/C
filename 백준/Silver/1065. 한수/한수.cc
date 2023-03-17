#include <stdio.h>
#include <stdbool.h>

int hansu(int i){
    
    int han = 0, a = 0, b = 0, c = 0;
    
    if(i < 1000){
        a = i % 10;
        b = (i % 100) / 10;
        c = i / 100;
        han = c - b;
        
        if(han + a == b) return true;
        
        else return false;
    }
    else return false;
}

int main(){
    
    int N, cnt = 0;
    
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++){
        
        if(i < 100) cnt++;
        
        else if(hansu(i) == true) cnt++;
    }
    
    printf("%d", cnt);
}