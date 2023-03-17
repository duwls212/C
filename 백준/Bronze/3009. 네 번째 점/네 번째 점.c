#include <stdio.h>

int main(){
    int i, x = 0, y = 0;
    int xx[3], yy[3];
    
    for(i = 0; i < 3; i++){
        scanf("%d %d", &xx[i], &yy[i]);
    }
    
    if(xx[0] == xx[1]) x = xx[2];
    else if(xx[0] == xx[2]) x = xx[1];
    else x = xx[0];

    if(yy[0] == yy[1]) y = yy[2];
    else if(yy[0] == yy[2]) y = yy[1];
    else y = yy[0];

    printf("%d %d", x, y);
    
}