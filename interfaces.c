#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "interfaces.h"
#include "configuracion.h"
//#include "" -> Incompleto

void menuPrincipal(){

    int op;
    int valido = 0;

    system("cls"); //Limpia la terminal

    printf("****************************\n\nBIENVENIDO A HUNDIR LA FLOTA\n\n****************************\n\n");
    Sleep(500);

    printf ("Elige que quieres hacer\n\n");
    printf("Opciones:\n\n");
    printf("1.Configuracion\n2.Jugar\n3.Salir\n\n");
    Sleep(500);

    while (valido==0) {  // Bucle infinito hasta que se ingrese una opci�n v�lida
        printf("\nTu opcion: ");
        if ((scanf("%d", &op)) != 1) {
            printf("\nEntrada invalida, debes introducir un numero\n");
        }else if (op >= 1 && op <= 3){
            //if(op==2 && !hayConfig == 0){
                //printf("No hay configuracion, elige el menu Configuracion\n");
                //Sleep(1000);
                //menuConfiguracion();

            valido = 1;
        }else {
        printf("\nNumero no valido, introduce una opcion valida.\n");
        }
        // Limpieza del b�fer
        while (getchar() != '\n');
    }


    switch (op){
    case 1: menuConfiguracion();
            break;
    case 2: menuPartida();
            break;
    case 3: Sleep(500);
            system("cls");
            Sleep(500);
            printf("\n\nSaliendo del juego...\n\n\n\n\n\n");
            Sleep(1000);
            exit(1);
    }
}

void menuConfiguracion(){
    int op;
    int valido = 0;
    system("cls");
    Sleep(500);
    printf("****************************\n\nCONFIGURACION\n\n****************************\n\n");
    Sleep(500);

    printf ("Elige que quieres hacer\n\n");
    printf("Opciones:\n\n");
    printf("1.Introducir datos\n2.Mostrar\n3.Borrar\n4.Guardar\n5.Cargar\n6.Volver\n\n");
    Sleep(500);

    while (valido==0) { // Bucle infinito hasta que se ingrese una opci�n v�lida
        printf("\nTu opcion: ");
        if ((scanf("%d", &op)) != 1) {
            printf("\nEntrada invalida, debes introducir un numero\n");
        }else if (op >= 1 && op <= 6) {
        valido = 1;
        } else {
        printf("\nNumero no valido, introduce una opcion valida.\n");
        }
        // Limpieza del b�fer
        while (getchar() != '\n');
    }

    switch (op){
    case 1: introducirDatosConfiguracion();
            break;
    case 2: mostrarDatosConfiguracion();
            break;
    case 3: //por determinar
            break;
    case 4: //por determinar
            break;
    case 5: //por determinar
            break;
    case 6: menuPrincipal();
            break;
        }
}

void menuPartida(){
    int op;
    int valido = 0;

    system("cls");
    Sleep(500);
    printf("****************************\n\nPARTIDA\n\n****************************\n\n");
    Sleep(500);

    printf ("Elige que quieres hacer\n\n");
    printf("Opciones:\n\n");
    printf("1.Jugar Partida\n2.Reiniciar Partida\n3.Reanudar\n4.Volver\n\n");
    Sleep(500);


    while (valido==0) {  // Bucle infinito hasta que se ingrese una opci�n v�lida
        printf("\nTu opcion: ");
        if ((scanf("%d", &op)) != 1) {
            printf("\nEntrada invalida, debes introducir un numero\n");
        }else if (op >= 1 && op <= 4) {
        valido = 1;
        } else {
        printf("\nNumero no valido, introduce una opcion valida.\n");
        }
        // Limpieza del b�fer
        while (getchar() != '\n');
    }

    switch (op){
    case 1: iniciarPartida();
            break;
    case 2: reiniciarPartida();
            break;
    case 3: reanudarPartida();
            break;
    case 4: menuPrincipal();
            break;
        }
}

void mostrarDatosConfiguracion(){
    system("cls");
    printf("****************************\n\nRESUMEN DE DATOS\n\n****************************\n\n");
    //printf("\nDatos del jugador 1:\nNombre: %s\nID: %d, Disparo: %c\nNumero de disparos: %d\nGanador: %d", jugador.jugador1.Nom_jugador, jugador.jugador1.Id_jugador, jugador.jugador1.Tipo_disparo, jugador.jugador1.Num_disparos, jugador.jugador1.Ganador_Ronda);
    //printf("\nDatos del jugador 2:\nNombre: %s\nID: %d, Disparo: %c\nNumero de disparos: %d\nGanador: %d", jugador.jugador2.Nom_jugador, jugador.jugador2.Id_jugador, jugador.jugador2.Tipo_disparo, jugador.jugador2.Num_disparos, jugador.jugador2.Ganador_Ronda);
    //Funcion para ver los barcos que se han escogido usar
    //barcosUsados();
}

void introducirDatosConfiguracion(){
    system("cls");
    printf("****************************\n\nINTRODUCIR DATOS\n\n****************************\n\n");
    //Funcion para introducir datos en estructura jugador

    //Barcos disponibles de escoger
    barcos *barcosMain;
    int n = 5;
    barcosMain = cargar_barcos(&n);
    listar_barcos(barcosMain, 5);

    //Funcion para introducir datos en estructura barcos
}

void iniciarPartida(){
    system("cls");
    printf("Iniciando partida...");
    Sleep(1000);
    system("cls");
    //Aqui ya van funciones de los turnos y demas (funcionamiento de la partida)
}

void reiniciarPartida(){
    system("cls");
    //Ahora se inicia la partida, cargando los datos de la partida anterior (configuracion)
}

void reanudarPartida(){
    system("cls");
    //Se carga una partida que se dejo a medias (todos los datos respecto a esa partida)

}
