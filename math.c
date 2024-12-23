#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcule(int n1, int n2, double *rusélta, char coriction) {
    switch (coriction) {
        case '+':
            *rusélta = n1 + n2;
             printf("résultat : %.2f\n", *rusélta);
             break;
        case '-':
             *rusélta = n1 - n2;
             printf("résultat : %.2f\n", *rusélta);
             break;
        case '*':
            *rusélta = n1 * n2;
             printf("résultat : %.2f\n", *rusélta);
             break;
        case '/':
            if (n2 != 0) {
                *rusélta = (double)n1 / n2;
                 printf("résultat : %.2f\n", *rusélta);
            } else {
                 printf("erreur : division par zéro\n");
            }
            break;
        case '%':
            if (n2 != 0) {
                *rusélta = n1 % n2;
                 printf("résultat : %.2f\n", *rusélta);
            } else {
                 printf("erreur : division par zéro\n");
            }
            break;
        case '^':
              *rusélta = pow(n1 ,n2);
               printf("résulta :%.2f\n" ,*rusélta);  
               break;
        default:
            printf("l'opération n'est pas valide\n");
            break;
    }
}

int main() {
    int n1, n2;
    double rusélta;
    char coriction;

    printf("Entrez le nombre 1 :\n");
    scanf("%d", &n1);
  
    printf("Entrez le nombre 2 :\n");
    scanf("%d", &n2);

    printf("Entrez l'opération ('+', '-', '*', '/', '%%' ,'^') :\n");
    scanf(" %c", &coriction);

    calcule(n1, n2, &rusélta, coriction);  

    return 0;
}
