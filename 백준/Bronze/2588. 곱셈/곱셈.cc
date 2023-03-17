#include<stdio.h>
 int main(){
 	
 	int A, B, q, w, e;
 	
 	scanf("%d %d", &A, &B);
 	
 	q=(B%10)*A;
 	w=(((B%100)-(B%10))/10)*A;
 	e=((B-(B%100))/100)*A;
 	
 	printf("%d\n", q);
 	printf("%d\n", w);
 	printf("%d\n", e);
 	printf("%d", A*B);
 
 }