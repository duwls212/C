#include <stdio.h>
#include <string.h>

int main(){
    
    int cnt = 0, len = 0, i;
    char str[1000001];
    
    gets(str);
    len = strlen(str);
    
   str[len] = ' ';
    
    for(i = 0; i <= len; i++){
        if(str[i] != ' ' && str[i + 1] == ' '){
            cnt++;
        }
    }
    printf("%d", cnt);
}
