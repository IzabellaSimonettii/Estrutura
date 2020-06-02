#include <stdio.h>
#include <string.h>
struct pessoa {
	char nome[40];
	int ano_nasc;
};
int igual_pessoas (struct pessoa p1, struct pessoa p2) {
	if (p1.ano_nasc == p2.ano_nasc && strcmp (p1.nome, p2.nome)==0)
		return 1;
	return 0;
}
int igual_pessoas_por_ref(struct pessoa *p1, struct pessoa *p2) {
	if (p1 == p2)
		return 1;
	if (p1->ano_nasc == p2->ano_nasc && strcmp (p1->nome, p2->nome)==0)
		return 1;
	return 0;
}
int main () {
	struct pessoa p1, p2;
	
	strcpy(p1.nome, "andreia");
	p1.ano_nasc = 2000;
	strcpy(p2.nome, "ana");
	p2.ano_nasc = 2000;
	if (igual_pessoas(p1, p2)) {
		printf ("sao a mesma pessoa\n");
	}
	else {
		printf ("nao sao a mesma pessoa\n");
	}
	if (igual_pessoas_por_ref(&p1, &p2)) {
		printf ("sao a mesma pessoa\n");
	}
	else {
		printf ("nao sao a mesma pessoa\n");
	}
	return 0;
}
