#include "bibliotheque.h"
#include <stdio.h>
#include <math.h>
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
//definition d'une fonction de permutation
void permutation(int *a,int *b){
    int c=0;
    c=*a;
    *a=*b;
    *b=c;
}
// Exercice 7 : résolution d'une équation du second degré
void equation_second_degre(double a, double b, double c) {
    double delta, x1, x2;

    if (a == 0) {
        printf("Ce n'est pas une equation du second degre.\n");
        return;
    }

    delta = b*b - 4*a*c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Deux solutions reelles : x1 = %.2f et x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Une solution double : x = %.2f\n", x1);
    }
    else {
        printf("Aucune solution reelle.\n");
    }
}
// Exercice 12a : verifier si un nombre est premier
int estPremier(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
// Exercice 13 : calcul de la distance entre deux points
double distance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) +
                (p2.y - p1.y)*(p2.y - p1.y));
}