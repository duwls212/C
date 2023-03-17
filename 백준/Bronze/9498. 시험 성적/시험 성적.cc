#include<stdio.h>
 int main(){
 	
 	int x;
 	
 	scanf("%d", &x);
 	
 	if(x<=100 && x>=90){
 		printf("A");
	 }
	 else if(x<=89 && x>=80){
	 	printf("B");
	 }
	 else if(x<=79 && x>=70){
	 	printf("C");
	 }
	 else if(x<=69 && x>=60){
	 	printf("D");
	 }
	 else{
	 	printf("F");
	 }
 }