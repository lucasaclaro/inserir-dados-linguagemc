#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	char endereco[100];
	char telefone[20];
	
	printf("Digite o seu nome completo: ");
	fgets(nome, 50, stdin);
	printf("\nDigite o seu endereço: ");
	fgets(endereco, 100, stdin);
	printf("\nDigite o seu telefone: ");
	fgets(telefone, 20, stdin);
	
	printf("\n.....................................................................................");
	printf("\n\nDados informados:\n\nNome: %s\nEndereço: %s\nTelefone: %s", nome, endereco, telefone);
	
	
	
	
	return 0;
}
