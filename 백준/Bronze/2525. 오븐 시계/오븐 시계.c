#include <stdio.h>

int main(){
    int h, m, time;
    scanf("%d %d %d", &h, &m, &time);
    
    m = m + time;
    
    if(m >= 60){
        while(1){
            m = m - 60;
            h++;
            if(h >= 24){
                while(1){
                    h = h - 24;
                    if(h < 24) break;
                }
            }
            
            if(m < 60) break;
        }
    }
    printf("%d %d", h, m);
}