#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//CREAR UN PROCEDIMIENTO RECURSIVO Q PERMITA MOSTRAR TODOS LOS VALORES ENTEROS
//COMPRENDIDOS ENTRE UN ENTERO Y OTRO ENTERO. PROBARLO EN EL MAIN, MISMO MAIN
//DEL EJERCICIO A
void pedirEnteros(int* e1, int* e2);
void valoresEnteros(int e1, int e2, int n);

int main()
{
    int enteroMenor;
    int enteroMayor;
    pedirEnteros(&enteroMenor,&enteroMayor);

    int n = enteroMenor+1;
    valoresEnteros(enteroMenor,enteroMayor,n);

    return 0;
}
void valoresEnteros(int e1, int e2, int n){
    if(n!=e2){
        printf("|%d| ",n);
        valoresEnteros(e1,e2,n+1);
    }
}
void pedirEnteros(int* e1, int* e2){
    do{
    printf("\nIngrese el valor del primer entero\n");
    scanf("%d",&(*e1));
    printf("\nIngrese el valor del segundo entero\n");
    scanf("%d",&(*e2));
    }while(*e1>=*e2);

}
