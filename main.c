#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5 //Je donne la taille de mon tableau.

//Creation de la structure.
typedef struct Point{
    int x;
    int y;

} Point;

int main()

 {
     int a,b =0; //Je declare les variables.
     int valeur =1;
     int tableau[TAILLE][TAILLE];
     Point point;

     for (a= 0; a<TAILLE;a++)

        {
            for (b= 0; b<TAILLE;b++)

            {
                tableau [a][b]= 0;
            }

                point.x= TAILLE/2-1;
                point.y= TAILLE/2;
        }



    while  (valeur <= TAILLE * TAILLE) // Incrementation des nombres au sein du tableau.

{
        if (point.x < 0)
                {
                    point.x = TAILLE-1;
                }

        if (point.x > TAILLE-1)
                {
                    point.x = 0;
                }

        if (point.y <0)
                {
                    point.y = TAILLE-1;
                }

        if (point.y > TAILLE-1)
                {
                    point.y = 0;
                }

        if (tableau [point.x][point.y] !=0)
                {
                    point.x = point.x-1;
                        point.y = point.y-1;
                }

        if (tableau [point.x][point.y] == 0)
                    {

                        tableau [point.x][point.y] = valeur;

                            {
                            point.x = point.x-1;
                            point.y = point.y+1;
                                valeur++;
                            }
                    }
}
     for (a= 0; a<TAILLE;a++)
        {
        for (b= 0; b<TAILLE;b++)
            {
            printf("%i ", tableau[a][b]);
            }
        printf("\n");

        }


    return 0;
 }
