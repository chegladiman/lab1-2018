#include <stdio.h>
#include <stdlib.h>
#include <windef.h>

int numero1;
int numero2;
int numero3;
int mayor;
int mayor2;
int resultado;
char apellido;
int aumento;
float sueldo;
int sueldoReal;





int main(void)
{
  /*printf("INGRESAR NUMERO:");
    scanf("%d",&numero1);
    printf("INGRESAR NUMERO:");
    scanf("%d",&numero2);
    printf("INGRESAR NUMERO:");
    scanf("%d",&numero3);
    mayor=max(numero1,numero2);
    mayor=max(mayor,numero3);
    printf("el resultado es: %d",mayor);

    return 0; */

    printf("Ingresar inicial de apellido:");
    fflush(stdin);
    scanf("%c",&apellido);
    printf("Ingresar porcentaje de aumento:");
    scanf("%d",&aumento);

    printf("Ingresar sueldo:");
    scanf("%f",&sueldo);

    sueldoReal= ((sueldo+(sueldo*aumento)/100));

    printf("el apellido es: %c , el sueldo original es %.2f y el sueldo real es %d ",apellido,sueldo,sueldoReal);


}
