#include <stdio.h>
#include <stdlib.h>
#include "Aventurero.h"  // Incluye el header "aventurero.h"

int main() {
    FuncionesT A;
    int opcion;

    do {
        printf("Elige una opción:\n");
        printf("1. Cargar Mapa Práctica\n");
        printf("2. Mostrar Mapa\n");
        printf("3. Mover Derecha\n");
        printf("4. Mover Izquierda\n");
        printf("5. Mover Arriba\n");
        printf("6. Mover Abajo\n");
        printf("7. Ver posición Guardada o Caracter\n");
        printf("8. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                Mapa_1(&A);
                break;
            case 2:
                Mostrar(A);
                break;
            case 3:
                Mv_Derecha(&A);
                break;
            case 4:
                Mv_Izquierda(&A);
                break;
            case 5:
                Mv_Arriba(&A);
                break;
            case 6:
                Mv_Abajo(&A);
                break;
            case 7:
                Mv_Guardado(&A);
                break;
        }

    } while (opcion != 8);

    return 0;
}


