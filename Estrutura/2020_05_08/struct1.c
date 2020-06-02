#include <stdio.h>
#include <string.h>
struct pessoa {
	char nome[40];
	int ano_nasc;
};

int main () {
	struct pessoa p1, p2;
	struct pessoa *p, *x; //ponteiro
	strcpy(p1.nome, "ana");
	p1.ano_nasc = 2000;
	printf ("pessoa 1:\nnome: %s\nano de nascimento: %d\n", 
	p1.nome, p1.ano_nasc);
	printf ("digite os dados para pessoa 2:\n");
	printf ("nome: ");
	scanf ("%s", &p2.nome);
	printf ("ano de nascimento: ");
	scanf ("%d", &p2.ano_nasc);
	printf ("pessoa 2:\nnome: %s\nano de nascimento: %d\n", 
	p2.nome, p2.ano_nasc);
	printf ("\nvalor de p = %p\n", p);
	p = &p1;
	printf ("\nvalor de p = %p\n", p);
	p->ano_nasc = 10;
	printf ("pessoa 1:\nnome: %s\nano de nascimento: %d\n", 
	p1.nome, p1.ano_nasc);
	x = &p1;
	return 0;
}
