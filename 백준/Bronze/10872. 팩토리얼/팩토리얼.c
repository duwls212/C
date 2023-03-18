#include <stdio.h>

int pac(int n){
    int npac = n;
    
    for(int i = (n - 1); i > 0; i--){
        npac *= i;
    }
    return npac;
}

int main(){
    int n, npac = 0;
    scanf("%d", &n);
    
    if(n != 0){
        npac = pac(n);
    }
    else{
        printf("1");
        return 0;
    }
    
    printf("%d", npac);
}
