#include <stdio.h>

/**************************************
* NOMBRE: #Jorge#
* PRIMER APELLIDO: #Daza#
* SEGUNDO APELLIDO: #Rodriguez#
* DNI: #76439433#
* EMAIL: #jdaza32@alumno.uned.es#
***************************************/
int main() {

/*
1º1 enero 1601 fue lunes
2ºbisiestos multiplos 4 menos multiplos de 100 y 400
3ºfuncion saber si el año es bisiesto
4ºdia de la semana que comienza un mes de un año
Tipos enumerados para dias semana
imprimir pantalla usando funciones





*/
  typedef enum Months{ENERO,FEBRERO,MARZO,ABRIL,MAYO,JUNIO,JULIO,AGOSTO,SEPTIEMBRE,OCTUBRE,NOVIEMBRE,DICIEMBRE};
  typedef enum Days{LU,MA,MI,JU,VI,SA,DO};
  int month;
  int year;
  char equal="=";
  char punto=".";
  char barra="|";

  printf("¿Mes (1..12?");
  scanf("%d",&month);
  printf("\n");
  printf("¿Ano (1601..3000)?");
  scanf("%d",&year);





  return 0;
}
