//Ce programme sert a calculer une équation du second degré
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta,a,b,c,x0,x1,x2;
int main()
{
    //Rentrer les valeurs de l'équation
    puts("Mettez la valeur de a");
    scanf("%f",&a);
    puts("Mettez la valeur de b");
    scanf("%f",&b);
    puts("Mettez la valeur de c");
    scanf("%f",&c);
    if(a==0 && b==0 && c==0)
    {
        puts("Tout les reels sont solution de l'equation");
    }
    //formule pour calculer le delta
    delta=b*b-4*a*c;
    //Si delta est inferieur a 0
    if(delta<0)
    {
        puts("Il n'y a pas de solution");
    }
    //Si delta est egale a 0
    if(delta==0)
    {
        x0=-b/2*a;
        printf("La solution a l'equation est : %f", x0);
    }
    //Si delta est supérieur a 0
    if(delta>0)
    {
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;
        printf("Il y a deux solution a l'equation, la premiere solution est : %f et la deuxieme solution est : %f",x1,x2);
    }



}
