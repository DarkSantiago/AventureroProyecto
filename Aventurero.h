#ifndef AVENTURERO_H_INCLUDED
#define AVENTURERO_H_INCLUDED

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

// Funcion Mostrar Mapa
void Mostrar(FuncionesT M_Mapa);
#endif // AVENTURERO_H_INCLUDED
