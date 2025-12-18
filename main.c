#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"
int main( void ) {
int result = power( 2, 3 );
int first=10,second=20;
printf( "2³ == %d\n", result );
result = fact( 6 );
printf( "6! == %d\n", result );
printf("first=%d et second=%d\n",first,second);
permutation(&first,&second);
printf("first=%d et second=%d",first,second);
printf("\n===== EXERCICE 7 =====\n");
equation_second_degre(1, -3, 2);

printf("\n===== EXERCICE 12a =====\n");
int n = 17;
if (estPremier(n))
    printf("%d est un nombre premier\n", n);
else
    printf("%d n'est pas un nombre premier\n", n);

printf("\n===== EXERCICE 13 =====\n");
Point p1, p2;

p1.x = 1;
p1.y = 2;
p2.x = 4;
p2.y = 6;

printf("Distance entre les deux points = %.2f\n", distance(p1, p2));
return EXIT_SUCCESS;
}