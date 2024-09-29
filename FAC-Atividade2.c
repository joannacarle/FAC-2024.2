/* 
	Desenvolver um programa que, dado um número inteiro n, exiba um triângulo conforme ilustrado pelo exemplo a
seguir:
n = 7
1
2 1
1 2 3
4 3 2 1
1 2 3 4 5
6 5 4 3 2 1
1 2 3 4 5 6 7
	*/

#include <stdio.h>

int main() {
   int n,i,j=1;
   
   printf("digite um valor para n: ");
   scanf("%d", &n);
   
   for(i=1; i<=n;i++){
   	if(i%2 !=0){
   		for(j=1; j<=i; j++){
   			printf("%d ",j);
		   }
	   }
	   else {
	   	for(j=i; j>=1; j-- ){
	   		printf("%d ", j);
		   }
	   }
	   printf("\n");
   }
}

