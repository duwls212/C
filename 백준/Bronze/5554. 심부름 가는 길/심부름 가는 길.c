#include <stdio.h>
int main(){
    int a, b, c, d, x = 0, y = 0;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    a = a + b + c + d;
    x = a / 60;
    y = a % 60;
    printf("%d\n%d", x, y);
}
