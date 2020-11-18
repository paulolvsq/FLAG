#include <stdio.h>
#include <math.h>

int main(){

 float A[50];/* tableau des coefficients de P */
 int i;      /* indice courant    */
 int D;      /* degré du polynôme */
 float x;    /* argument */
 float p;    /* résultat */

 printf("Entrer le degré  D du polynôme (max.50) : ");
 scanf("%d", &D);
 printf("Entrer la valeur x de l'argument : ");
 scanf("%f", &x);
 /* Saisie des coefficients */
 for (i = 0; i <= D ; i++){
     printf("Entrer le coefficient A%d : ", i);
     scanf("%f", &A[i]);
 }

 for (p = 0.0, i = 0 ; i <= D ; i++)
       p = p*x + A[D - i];  
 
 printf("Valeur du polynôme pour x = %.2f : %.2f\n", x, p);
 return 0;
 
}
