#include <stdio.h>
#define PHI 3.14159265358979323846

int main(){
    double R, taxi = 0, ucl = 0;
    
    scanf("%lf", &R);
    
    ucl = PHI * (R * R);
    taxi = R * R * 2;
    
    printf("%.6lf\n%.6lf", ucl, taxi);
}