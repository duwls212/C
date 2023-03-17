#include <stdio.h>
#include <string.h>

int main(){
    
    int i, j, num[16], sum = 0;
    char alp[16];
    
    scanf("%s", alp);
    
    for(j = 0; j < strlen(alp); j++){
        for(i = 'A'; i <= 'Z'; i++){
            
            if(alp[j] >= 'A' && alp[j] <= 'C') num[j] = 3;
            else if(alp[j] >= 'D' && alp[j] <= 'F') num[j] = 4;
            else if(alp[j] >= 'G' && alp[j] <= 'I') num[j] = 5;
            else if(alp[j] >= 'J' && alp[j] <= 'L') num[j] = 6;
            else if(alp[j] >= 'M' && alp[j] <= 'O') num[j] = 7;
            else if(alp[j] >= 'P' && alp[j] <= 'S') num[j] = 8;
            else if(alp[j] >= 'T' && alp[j] <= 'V') num[j] = 9;
            else if(alp[j] >= 'W' && alp[j] <= 'Z') num[j] = 10;
            
        }
    }
    
    for(i = 0; i < strlen(alp); i++){
        sum += num[i];
        }
    printf("%d", sum);
}
