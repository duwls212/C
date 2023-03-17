#include <stdio.h>
#include <string.h>

int main(){
    
    int Tcase, Re;
    char str[21];
    
    scanf("%d", &Tcase);
    
    for(int i = 0; i < Tcase; i++){
        
        scanf("%d", &Re);
        scanf("%s", str);
        
        for(int j = 0; j < strlen(str); j++){
            for(int k = 0; k < Re; k++){
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}
