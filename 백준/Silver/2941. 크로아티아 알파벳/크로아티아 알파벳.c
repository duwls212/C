#include <stdio.h>
#include <string.h>

int main(){
    
    int cnt = 0, len;
    char cro[301];
    
    scanf("%s", cro);
    len = strlen(cro);
    
    for(int i = 0; i < len; i++){
        switch(cro[i]){
            case 'c' : if(cro[i + 1] == '=' || cro[i + 1] == '-') cnt--;
                break;
            case 'd' : if(cro[i + 1] == 'z' && cro[i + 2] == '=') cnt--;
                else if(cro[i + 1] == '-') cnt--;
                break;
            case 'l' : if(cro[i + 1] == 'j') cnt--;
                break;
            case 'n' : if(cro[i + 1] == 'j') cnt--;
                break;
            case 's' : if(cro[i + 1] == '=') cnt--;
                break;
            case 'z' : if(cro[i + 1] == '=') cnt--;
                break;
        }
        cnt++;
    }
    printf("%d", cnt);
}
