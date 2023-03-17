#include <stdio.h>

int main(){
    
    int N, temp, x, y, z, cnt=0;
    
    scanf("%d", &N);
    
    temp=N;
    
    while(1){
        
        y=N%10;
        x=(N-y)/10;
        z=x+y;
        
        if(z>=10){
            z=z%10;
        }
        
        N=(y*10)+z;
        cnt++;
        
        if(N==temp) break;
        
    }
    
    printf("%d", cnt);
    
}