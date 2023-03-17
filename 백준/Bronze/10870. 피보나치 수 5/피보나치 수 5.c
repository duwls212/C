#include <stdio.h>

int pb(int n){
    int f1 = 0, f2 = 1, temp = 0;
    for(int i = 1; i < n; i++){
        f1 = f1 + f2;

        temp = f1;
        f1 = f2;
        f2 = temp;
    }
    
    return f2;
}

int main(){
    int n, f2;
    scanf("%d", &n);
    
    if(n != 0) f2 = pb(n);
    else{
        printf("0");
        return 0;
    }

    printf("%d", f2);

}