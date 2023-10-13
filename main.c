#include<stdio.h>
#include "Funciones.h"

typedef struct Mapa_AventureroS Mapa_AventureroT;
struct Mapa_AventureroS
{
    char Matriz [40][40];
};


int main()
{


    int Opcion;



    do
    {
        printf(" Eliga la Opcion\n 1. Cargar Mapas: ");
        scanf("%d", &Opcion);

        switch(Opcion)
        {
            case 1:
                {
                    Opcion = 0;
                    printf(" Eliga Mapa: \n 1. Mapa:  \n 2. Mapa:  \n 3. Mapa: ");
                    scanf("%d", &Opcion);
                    switch(Opcion)
                    {
                        case 1:
                            {
                                Arc_Mapa();
                            }
                            break;
                        case 2:
                            {
                                Arc_Mapa2();
                            }
                            break;
                        case 3:
                            {
                                Arc_Mapa3();
                            }
                            break;


                    }
                }


                break;


        }


    }while(Opcion != 6);

    printf("Gracias");


    return 0;
}
