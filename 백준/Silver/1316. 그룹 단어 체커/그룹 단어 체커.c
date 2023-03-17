#include <stdio.h>
#include <string.h>

int groupV(char alp[], int len){
    
    int key = 0;
    
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(alp[i] == alp[j]){
                
                key = j - i;
                
                if(key > 1 && alp[j - 1] != alp[j]) return 0;
            }
        }
    }
    return 1;
}

int main(){
    
    int N, cnt = 0;
    char alp[101];
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%s", alp);
        cnt += groupV(alp, strlen(alp));
    }
    printf("%d", cnt);
    
}
