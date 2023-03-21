#include<stdio.h>

int main(){
    int N;
    
    scanf("%d", &N);

    if(N >= 64) printf("64");
    else if(N >= 32) printf("32");
    else if(N >= 16) printf("16");
    else if(N >= 8) printf("8");
    else if(N >= 4) printf("4");
    else if(N >= 2) printf("2");
    else if(N == 1) printf("1");
}