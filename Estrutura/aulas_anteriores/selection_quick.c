#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 50000
void gera (int v[]) {
   int i;
   for (i=0; i < T; i++)
      v[i] = rand();
}
void mostra (int v[]) {
   int i;
   for (i=0; i < T; i++)
      printf ("%d ", v[i]);
   printf ("\n\n");
}
void selecao (int v[]) {
   int i, j, min, x;
   for (i = 0; i < T-1; i++) {
		min = i;
		for (j = i+1; j < T; j++) {
			if (v[j] < v[min]) { 
				min = j;
            }
        }
		x = v[i]; 
		v[i] = v[min]; 
		v[min] = x;
   }
}
int particao (int v[], int p, int r) {
    int x = v[r], i = p-1, j, aux;
	for(j = p; j < r; j++)
          if (v[j] <= x ){
             i = i + 1;
	         aux = v[i];
             v[i] = v[j]; 
		  	 v[j] = aux;   
          }
	i++;
	aux = v[r]; 
	v[r] = v[i]; 
    v[i] = aux;
	return i;
}
void quick (int v[], int p, int r) {
     int q;
     //printf ("\np = %d, r = %d", p, r);
     if (p < r) {
         q = particao (v, p, r);
         //printf ("\t, q = %d", q);
         quick (v, p, q-1);
         quick (v, q+1, r);
     }      
}
int main () {
    int *v;
    time_t ini_sel, fim_sel, ini_quick, fim_quick;
    srand (time(0));
    v = (int *) malloc (T * sizeof(int));
    //gera (v);
    //mostra(v);
    //printf ("ordenando pelo selection...\n"); 
    //ini_sel = time(0);
    //selecao (v);
    //fim_sel = time(0);
	//mostra(v);
    gera (v);
    //mostra (v);
	printf ("ordenando pelo quick primeira vez...\n"); 
    ini_quick = time(0);
    quick (v, 0, T-1);
    fim_quick = time(0);
	//mostra (v);
	//printf ("\n\nA selecao demorou %d", fim_sel - ini_sel);
    printf ("\n\nO primeiro quick demorou %d\n\n", fim_quick - ini_quick);
    printf ("ordenando pelo quick segunda vez...\n"); 
    ini_quick = time(0);
	quick (v, 0, T-1);
    fim_quick = time(0);
	//mostra (v);
	printf ("\n\nO segundo quick demorou %d\n\n", fim_quick - ini_quick);
    printf ("\n\n\n");
    return 0;
}
