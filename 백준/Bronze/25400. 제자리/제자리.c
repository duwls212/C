#include<stdio.h>
#include<stdlib.h>
int main()
{
   int N, cnt = 0, c = 1;
   int *A;
   int *B;
   
   scanf("%d", &N);
   
   A = (int*)malloc(sizeof(int) * N);
   B = (int*)malloc(sizeof(int) * N);
   
   for(int i = 0; i < N; i++){
      scanf("%d", &A[i]);
   }
   
   for(int i = 0; i < N; i++){
      if(A[i] == c){
         B[c-1] = A[i];
         c++;
      }
      else cnt++;
   }
   
   printf("%d",cnt);
   
   free(A);
   free(B);

  return 0;
}