#include <stdio.h>
int main(){
    
    int Tcase, H, W, N, room = 0;
    
    scanf("%d", &Tcase);
    
    for(int i = 0; i < Tcase; i++){
        scanf("%d %d %d", &H, &W, &N);
        
        if(H == N){
            room = (H * 100) + 1;
        }
        
        else if(N % H != 0){
            room = ((N % H) * 100) + ((N / H) + 1);
        }
        
        else{
            room = (H * 100) + (N / H);
        }
        
        printf("%d\n", room);
    }
}
