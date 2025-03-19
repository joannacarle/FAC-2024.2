/*Suponha a exist�ncia de um vetor, inicialmente
vazio (ou seja, uma vari�vel quant ter� o valor 0,
inicialmente), com capacidade para armazenar at�
CAP n�meros inteiros, onde CAP � uma
constante.

Pede-se o desenvolvimento de um programa que,
atrav�s de um menu, permita ao usu�rio realizar
as seguintes opera��es sobre o vetor (para cada
opera��o, uma fun��o deve ser implementada):

1) Inser��o de um novo n�mero;
2) Remo��o de todas as ocorr�ncias de
determinado valor;
3) Altera��o de todas as ocorr�ncias de um
dado valor por outro;
4) Busca de determinado n�mero;
5) Exibi��o de todos os elementos do vetor.
A execu��o do sistema deve consistir na exibi��o
do menu seguida da execu��o da opera��o
escolhida, repetidas vezes, at� que o usu�rio opte
pela sa�da do programa.

Observa��es:
a. S�o permitidos valores duplicados;
b. Os elementos n�o precisam estar
ordenados (crescentemente ou
decrescentemente) dentro do vetor;
c. Ao longo das aulas, os alunos podem
apresentar suas d�vidas sobre o
exerc�cio.*/

#include <stdio.h>

 #include <stdio.h>
#define TAM 31 //constante, n?o pode ser alterado

void inicializarTabela(int t[]){
	int i;
	
	for(i=0;i<TAM;i++){
		t[i]=0;
	}
}

int funcaoHash(int chave){
	return chave % TAM;	
}

void inserir(int t[], int valor){
	int id = funcaoHash (valor);
	while(t[id] != 0){
		id = funcaoHash(id + 1);
	}
	t[id]= valor;
}

void remover(int t[], int valor){
	int id = funcaoHash (valor);
	while (t[id] =! 0){
		id = funcaoHash(id - 1);
	}
	t[id]=valor;
}


int busca(int t[], int chave){
	int id = funcaoHash(chave);
	while(t[id] != 0){
		if(t[id]== chave){
			return t[id];
		} else {
			id = funcaoHash (id + 1);
		}
	}
	return 0;
}

void imprimir(int t[]){
	int i;
	for (i=0; i< TAM; i++){
		printf ("%d = %d\n", i, t[i]);
	}
}

int main (){
	
	int opcao, valor, retorno, tabela[TAM]; //tam. da tabela = 2*15=30~31
	inicializarTabela(tabela);
	
	
	do{
		printf ("\n\t0 = sair\n\t1 = inserir\n\t2 = buscar\n\t3 = imprimir\n\t4 = Remover todas as ocorrencias de um numero\n\t5 = Alterar todas as ocorrencias de um numero\n ");
		scanf("%d", &opcao);
		
		switch(opcao){
		case 1:
			printf("\tQual valor deseja inserir? ");
			scanf ("%d", &valor);
			inserir(tabela, valor);
		   break;
		case 2:
			printf("\tQual valor deseja buscar? ");
			scanf ("%d", &valor);
			retorno = busca (tabela, valor);
			if(retorno != 0){
				printf ("\tValor encontrado!: %d\n", retorno);
			} else {
				printf("\tValoro econtrado!\n");
			}
		   break;
		case 3:	
		    imprimir(tabela);
		    break;
	     	default:   
		   printf("opcao invalida\n");    
		  	
		}
			
	}while (opcao != 0);
	
	return 0;
}





























