#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>

typedef struct FuncionesS FuncionesT;
struct FuncionesS
{
  char Aventurero[2][2];
  char Mapa1[40][40];
  char Repitidor[0][35];
  char Controlador[10][10];
  char Pos_Guardada[40][40];
};
// Funciones Para Guardar Posicion
void Mapa_1(FuncionesT *p);
void Mv_Guardado(FuncionesT *p);
// Funciones Movimiento
void Mv_Derecha(FuncionesT *p);
void Mv_Izquierda(FuncionesT *p);
void Mv_Arriba(FuncionesT *p);
void Mv_Abajo(FuncionesT *p);


//Funcion Mostrar Mapa

void Mostrar(FuncionesT M_Mapa);


int main()
{
    FuncionesT A;
    int opcion;
    char direccion = '>';



    do
    {
        printf("Eliga La Opcion\n\n 1. Cargar Mapa Practica: \n 2. Mostrar Mapa:\n 3. Mover Derecha \n 4. Mover Izquierda\n 5. Mover Arriba\n 6. Mover Abajo\n 7. Ver posicion Guardada o Caracter\n");
        scanf(" %d", &opcion);

        switch(opcion)
        {
        case 1:
            {
                Mapa_1(&A);

            }
            break;
        case 2:
            {
                Mostrar(A);
            }
            break;
        case 3:
            {
                Mv_Derecha(&A);
            }
            break;
        case 4:
            {
                Mv_Izquierda(&A);
            }
            break;
         case 5:
            {
                Mv_Arriba(&A);
            }
            break;
         case 6:
            {
                Mv_Abajo(&A);
            }
        case 7:
            {
                Mv_Guardado(&A);
            }
            break;
        }



    }while(opcion != 8);


    return 0;
}

void Mapa_1(FuncionesT *p)
{
    int i,j;


    for (i = 0; i < 40; i++)
    {
        for (j = 0; j < 40; j++)
        {
            if (i == 0 || i == 39 || j == 0 || j == 39)
            {
                p->Mapa1[i][j] = '*';
            }
            else
            {
                p->Mapa1[i][j] = ' ';
            }
        }
    }
        p->Mapa1[4][15] = '>';
        p->Mapa1[4][30] = '*';

}



void Mv_Derecha(FuncionesT *p)
{
    int Control;
    int x, y;
    int Pasos;
    int i,j;
    int m,n;
    int l,t;
    int e,g;
    // Movimiento Automatico

    printf("Numero de pasos hacia la Derecha: ");
    scanf("%d", &Control);

    // Enocntrar Aventurero

    for (Pasos = 0; Pasos < Control; Pasos++)
        {
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 40; j++)
                {
                    if (p->Mapa1[i][j] == '<' || p->Mapa1[i][j] == '>' || p->Mapa1[i][j] == '^' || p->Mapa1[i][j] == 'v') // Si el aventurero tiene el caracter > entonces este tomara los valores
                    {
                        x = i; l =i;
                        y = j; t =j;
                    }
                }
            }

            // Guardar Valores

            p->Mapa1[l][t] = '.';
            y++;
            p->Mapa1[x][y] = '>';
            if(p->Mapa1[x][y] == '*')
            {
                p->Mapa1[x][y] = '*';
            }
            for(m = 0; m < 40; m++)
                {
                    for(n = 0; n < 40; n++)
                    {
                        if(p->Mapa1[l][t] == '.')
                        {
                            e = l;
                            g = t;
                            p->Pos_Guardada[l][t] = '+';
                        }
                    }
                }
        }
}

void Mv_Izquierda(FuncionesT *p)
{
    int Control;
    int x, y;
    int Pasos;
    int i,j;
    int m,n;
    int l,t;
    int e,g;
    // Inicio Automatico

    printf("Numero de pasos hacia la Izquierda: ");
    scanf("%d", &Control);

    // Enocntrar Aventurero

    for (Pasos = 0; Pasos < Control; Pasos++)
        {
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 40; j++)
                {
                    if (p->Mapa1[i][j] == '<' || p->Mapa1[i][j] == '>' || p->Mapa1[i][j] == '^' || p->Mapa1[i][j] == 'v') // Si el aventurero tiene el caracter > entonces este tomara los valores
                    {
                        x = i; l =i;
                        y = j; t =j;
                    }
                }
            }

            // Guardar Valores

            p->Mapa1[l][t] = '.';
            y--;
            p->Mapa1[x][y] = '<';
            for(m = 0; m < 40; m++)
                {
                    for(n = 0; n < 40; n++)
                    {
                        if(p->Mapa1[l][t] == '.')
                        {
                            e = l;
                            g = t;
                            p->Pos_Guardada[l][t] = '+';
                        }
                    }
                }
        }

}



void Mv_Arriba(FuncionesT *p)
{
   int Control;
    int x, y;
    int Pasos;
    int i,j;
    int m,n;
    int l,t;
    int e,g;

    printf("Numero de pasos hacia la Arriba: ");
    scanf("%d", &Control);
    // Enocntrar Aventurero
    for (Pasos = 0; Pasos < Control; Pasos++)
        {
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 40; j++)
                {
                    if (p->Mapa1[i][j] == '<' || p->Mapa1[i][j] == '>' || p->Mapa1[i][j] == '^' || p->Mapa1[i][j] == 'v') // Si el aventurero tiene el caracter > entonces este tomara los valores
                    {
                        x = i; l =i;
                        y = j; t =j;
                    }
                }
            }
            // Guardar Valores

            p->Mapa1[l][t] = '.';
            x--;
            p->Mapa1[x][y] = '^';
            for(m = 0; m < 40; m++)
                {
                    for(n = 0; n < 40; n++)
                    {
                        if(p->Mapa1[l][t] == '.')
                        {
                            e = l;
                            g = t;
                            p->Pos_Guardada[l][t] = '+';
                        }
                    }
                }
        }
}

void Mv_Abajo(FuncionesT *p)
{
    int Control;
    int x, y;
    int Pasos;
    int i,j;
    int m,n;
    int l,t;
    int e,g;

    printf("Numero de pasos hacia la Abajo: ");
    scanf("%d", &Control);
    // Enocntrar Aventurero
    for (Pasos = 0; Pasos < Control; Pasos++)
        {
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 40; j++)
                {
                    if (p->Mapa1[i][j] == '<' || p->Mapa1[i][j] == '>' || p->Mapa1[i][j] == '^' || p->Mapa1[i][j] == 'v') // Si el aventurero tiene el caracter > entonces este tomara los valores
                    {
                        x = i; l =i;
                        y = j; t =j;
                    }
                }
            }
            // Guardar Valores

            p->Mapa1[l][t] = '.';
            x++;
            p->Mapa1[x][y] = 'v';
            for(m = 0; m < 40; m++)
                {
                    for(n = 0; n < 40; n++)
                    {
                        if(p->Mapa1[l][t] == '.')
                        {
                            e = l;
                            g = t;
                            p->Pos_Guardada[l][t] = '+';
                        }
                    }
                }
        }
}
// Guardar Posicion

void Mv_Guardado(FuncionesT *p)
{
    int i,j;
    int l,m;
    int Contador;
    int x,y;

    for(i = 0; i < 40; i++)
    {
        for ( j = 0; j < 40; j++)
        {
            if (p->Pos_Guardada[i][j] == '+')
            {
                printf("Posicion guardada en (%d, %d): %c\n", i, j, p->Pos_Guardada[i][j]);
            }
        }
    }
}


// Mostrar Mapa
void Mostrar(FuncionesT M_Mapa)
{
    int i,j;

      for (i = 0; i < 40; i++)
    {
        for (j = 0; j < 40; j++)
        {
            printf(" %c", M_Mapa.Mapa1[i][j]);
        }
        printf("\n");
    }
}
