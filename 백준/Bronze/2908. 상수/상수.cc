#include <stdio.h>

int main(){
    
    int i, res = 0;
    char A[4], B[4];
    
    scanf("%s %s", A, B);
    
    for(i = 2; i >= 0; i--){
        if(A[i] > B[i]){
            res = 1;
            break;
        }
        if(A[i] == B[i]){
            continue;
        }
        if(A[i] < B[i]){
            res = 0;
            break;
        }
    }
    
    if(res == 1){
        for(i = 2; i >= 0; i--) printf("%c", A[i]);
    }
    
    else if(res == 0){
        for(i = 2; i >= 0; i--) printf("%c", B[i]);
    }
}
