#include "Aventurero.h"
#include <stdio.h>

void Mapa_1(FuncionesT *p)
{
    int i,j;


    for (i = 0; i < 40; i++)
    {
        for (j = 0; j < 40; j++)
        {
            if (i == 0 || i == 39 || j == 0 || j == 39 || j == 5)
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

