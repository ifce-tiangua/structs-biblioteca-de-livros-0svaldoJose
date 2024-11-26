#include <stdio.h>
#include <stdlib.h>

typedef struct livros{
	char nome[50];
	char isbn[20];
	double pre;
	int score;
	char edi[40];
}livro, *pLivro;

pLivro aloc(int qtde){
	
	pLivro livros = (pLivro)malloc(qtde * sizeof(livro));
	
	return livros;
}

void preencher(pLivro livros, int qtde){
	int i;
	for(i = 0; i < qtde; i++){

	scanf(" %[^\n]", livros[i].nome);
	scanf("%s", livros[i].isbn);
	scanf("%lf", &livros[i].pre);
	scanf("%d", &livros[i].score);
	scanf(" %[^\n]", livros[i].edi);
	
   }	
 } 

void mostrar(pLivro livros, int qtde){
	int i;
	
	for(i = 0; i < qtde; i++){
		
	printf("Livro %d:\n", i + 1);
	printf("Nome: %s\n", livros[i].nome);
	printf("ISBN: %s\n", livros[i].isbn);
	printf("Preço: R$ %.2lf\n", livros[i].pre);
    printf("Score: %d\n", livros[i].score);
	printf("edi: %s\n", livros[i].edi);
	
	if(i < qtde - 1)
	printf("\n");
   }
  }

void desaloc(pLivro livros){
	free(livros);
}

int main(){
	
	int qtde;
	
	scanf("%d", &qtde);
	if(qtde <= 0)
	printf("Sem livros\n");
	
	else{
	pLivro livros = aloc(qtde);  
	preencher(livros, qtde);
	mostrar(livros, qtde);
	desaloc(livros);
    }
	
	return 0;
}
