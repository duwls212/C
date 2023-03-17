#include <stdio.h>
#include <string.h>

int main(){
    
    int Tcase, i, j, sum = 0, add = 1;
    char arr[81];
    
    scanf("%d", &Tcase);
    
    for(i = 0; i < Tcase; i++){
            
        scanf("%s", arr);
        
        for(j = 0; j < strlen(arr); j++){
            
            if(arr[j] == 'O'){
                sum += add;
                add++;
            }
            
            else add = 1;
            
        }
        add = 1;
        
        printf("%d\n", sum);
        sum = 0;
        
    }
}
