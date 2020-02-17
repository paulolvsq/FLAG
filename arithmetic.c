#include <stdio.h>

int addition_p(int a, int b, int p) {

  return ((a + b) % p);

}

int soustraction_p(int a, int b, int p) {

  if (a < b)
    return (((a - b) + p) % p);
  else
    return ((a - b) % p);

}

int multiplication_p(int a, int b, int p) {

  return ((a * b) % p);

}

int pgcd(int a, int b) {

  int r;
  
  if (b == 0) {
    return a;
  }
  else {
    r = a % b;
    return pgcd(b,r);
  }

}

void euclide_etendu(int a, int b) {

  int r0 = a;
  int r1 = b;
  int u0 = 1;
  int u1 = 0;
  int v0 = 0;
  int v1 = 1;

  int r;
  int q;
  int v;
  int u;
  
  while (r1 > 0) {

    r = r0 % r1;
    q = (r0 - r) / r1;
    u = u0 - q * u1;
    v = v0 - q * v1;
    u0 = u1; 
    v0 = v1;
    u1 = u;
    v1 = v;
    r0 = r1;
    r1 = r;

  }

  printf("pgcd de %d et %d : %d. \n", a, b, pgcd(a, b));
  printf("euclide étendu valeur de u : %d, valeur de v : %d \n", u0, v0);
  
}

void inverse_modulaire(int a, int n) {

  if (pgcd(a, n) == 1) {
    
    int r0 = a;
    int r1 = n;
    int u0 = 1;
    int u1 = 0;
    int v0 = 0;
    int v1 = 1;

    int r;
    int q;
    int v;
    int u;
  
    while (r1 > 0) {

      r = r0 % r1;
      q = (r0 - r) / r1;
      u = u0 - q * u1;
      v = v0 - q * v1;
      u0 = u1; 
      v0 = v1;
      u1 = u;
      v1 = v;
      r0 = r1;
      r1 = r;

    }

    if (a*u0 + n*v0 == 1) {
      //printf("L'inverse modulaire de %d modulo %d est %d.\n", a, n, u0);
      if (u0 < 0) {
	u0 += n;
	printf("L'inverse modulaire de %d modulo %d est %d.\n", a, n, u0);
      }
      else {
	printf("L'inverse modulaire de %d modulo %d est %d.\n", a, n, u0);
      }
    }

  }

}
   
void euclide_classique(int a, int b) {

  int n = 0;
  int r = a;

  int q;
  
  while (r >= b) {

    r = r - b;
    q++;

  }

  printf("Euclide classique : le reste de la division euclidienne de %d par %d est %d et il reste %d.\n", a, b, q, r);
  
}

/*
-1 est un carré dans Z/pZ ssi p mod 4 = 1 
*/



int main() {

  printf("soustraction : %d\n", soustraction_p(17, 20, 10));

  printf("addition : %d\n", addition_p(17, 20, 10));

  printf("multiplication : %d\n", multiplication_p(17, 20, 10));

  euclide_etendu(120, 23);

  inverse_modulaire(12, 17);
  inverse_modulaire(120, 23);

  euclide_classique(119, 2);
  
  return 0;

}

