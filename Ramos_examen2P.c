//Instrucciones: La Fundación Salud Ecuador, es una organización no gubernamental sin fines de lucro, la cual, 
//a través de donaciones de empresas privadas y población civil, financia hasta un 90% de los tratamientos de pacientes con enfermedades 
//raras en el Ecuador. La fundación desea optimizar sus recursos y una de sus necesidades prioritarias es contar con un registro 
//sistematizado de los principales insumos médicos con los que cuenta.
//Para resolver esto, suponga que inicialmente se desea manejar solo 30 insumos médicos, por medio de un programa que maneje los datos de ingresos y egresos (unidades) para cada insumo, y para cada uno de los meses del año. El programa debe permitir interactuar con el usuario con estas 2 opciones:
//1) Imprimir en pantalla todo el detalle de ingresos y egresos de cada mes y por cada insumo.
//2) Obtener el total de ingresos y egresos en todo el año por cada insumo e imprimirlo en pantalla.
//Ingreso las bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Defino valores a las variables
#define meses 12
#define insumos 30

void ingresos_egresos(int ingresos[insumos][meses], int egresos[insumos][meses]) {
    for (int i = 0; i < insumos; ++i) {
        printf("Detalle de Insumo %d:\n", i + 1);
        for (int j = 0; j < meses; ++j) {
            ingresos[i][j] = rand() % 51;
            egresos[i][j] = rand() % 51;
            printf("  Mes %d: Ingresos=%d, Egresos=%d\n", j + 1, ingresos[i][j], egresos[i][j]);
        }
    }
}
