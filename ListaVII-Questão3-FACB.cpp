/* QUEST�O 03: Fa�a um programa que exiba
na tela as tabuadas dos n�meros de 1 a 9,
como descrito a seguir:
    1 � 0 = 0   2 � 0 = 0 ...   9 � 0 = 0
    1 � 1 = 1   2 � 1 = 2 ...   9 � 1 = 9
    1 � 2 = 2   2 � 2 = 4 ...   9 � 2 = 18
    . . .
    . . .
    . . .
    1 � 9 = 9   2 � 9 = 18 ...  9 � 9 = 81*/



#include <stdio.h>

int main (){
	int i, j, res;
	printf("\t TABUADA\t\n\n");
	
	for(j=1; j<=9; j++){
		for(i=0; i<=10; i++){
			res = j*i;
			printf("\t%d x %d = %d\n", j, i, res);
		}
		printf("\n");
	}
}
