#include <stdio.h>

int selfnum(int i){
     
    int sum = 0, a = 0, b = 0, c = 0, d = 0;
    
    if(i < 100){
        b = i % 10;
        a = i / 10;
        sum = i + a + b;
    }
    
    else if(i < 1000){
        c = i % 10;
        b = (i % 100) / 10;
        a = i / 100;
        sum = i + a + b + c;
    }
    
    else{
        d = i % 10;
        c = (i % 100) / 10;
        b = (i % 1000) / 100;
        a = i / 1000;
        sum = i + a + b + c + d;
    }
    
    return sum;
    
}

int main (){
    
    int i, arr[20000];
    
    for(i = 1; i <= 10000; i++){
        arr[i] = i;
    }
    
    for(i = 1; i <= 10000; i++){
        arr[selfnum(i)] = 0;
    }
    
    for(i = 1; i <= 10000; i++){
        if(arr[i] != 0) printf("%d\n", arr[i]);
    }
    
}
