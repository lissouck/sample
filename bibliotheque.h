#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
//definition d'une fonction de permutation
void permutation(int *a,int *b);
#endif
// Exercice 7 : résolution d'une équation du second degré
void equation_second_degre(double a, double b, double c);
// Exercice 12a : test de nombre premier
int estPremier(int n);
// Exercice 13 : structure point et distance
typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2);