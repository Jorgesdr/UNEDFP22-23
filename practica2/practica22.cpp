#include <stdio.h>


/**************************************
* NOMBRE: #Jorge#
* PRIMER APELLIDO: #Daza#
* SEGUNDO APELLIDO: #Rodriguez#
* DNI: #76439433#
* EMAIL: #jdaza32@alumno.uned.es#
***************************************/

/*
1º@
2º.
3ºo
4º.
5º@
max=20
no imorimir 0 o negativos
blancos=lado del rombo - indice de linea

*/

int main() {
  int lado;
  int indice;

  char arroba='@';
  char punto='.';
  char ooo='o';

  printf("Lado del Rombo?");
  scanf("%d",&lado);
  printf("\n");

  if (lado>0 && lado<21) {
    indice=1;
    for (int i=1;i<=lado;i++) {
      for (int a=0;a<lado-indice;a++) {
        printf(" ");
      }
      for (int j=0;j<indice;j++) {
        if (j%4==0) {
          printf("%c",arroba);
        } else if (j%4==1) {
          printf("%c",punto);
        } else if (j%4==2) {
          printf("%c",ooo);
        } else if (j%4==3) {
          printf("%c",punto);
        }
      }
      for (int h=indice-1;h>=1;h--) {
        if (h%4==1) {
          printf("%c",arroba);
        } else if (h%4==2) {
          printf("%c",punto);
        } else if (h%4==3) {
          printf("%c",ooo);
        } else if (h%4==0) {
          printf("%c",punto);
        }
      }
      printf("\n");
      indice++;
    }


    //Parte abajo
    if(indice>=lado){
      indice=lado-1;
      }

    for (int a=1;a<=lado-1;a++) {
      for (int b=0;b<=lado-indice-1;b++) {
        printf(" ");
      }
      for (int m=1;m<=indice;m++) {
        if ( m%4==2) {
          printf("%c",punto);
        } else if ( m%4==0) {
          printf("%c",punto);
        } else if ( m%4==3) {
          printf("%c",ooo);
        } else if ( m%4==1) {
          printf("%c",arroba);
        }
      }
      for (int n=indice-1;n>=1;n--) {
       if (n%4==3) {
         printf("%c",ooo);
       } else if (n%4==0) {
        printf("%c",punto);
       } else if (n%4==1) {
          printf("%c",arroba);
       } else if (n%4==2) {
         printf("%c",punto);
       }
      }

      indice--;
      printf("\n");
    }
  } else {
    printf("Lado del Rombo tiene que estar entre 1 y 20!!\n");

  }






}
















