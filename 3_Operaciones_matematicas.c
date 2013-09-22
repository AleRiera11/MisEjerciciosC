#include <stdio.h>
int main(void) {
    int var1,var2,resultado;
    var1=10;
    var2=31;
    resultado=var1+var2; //Sumar
    printf("El resultado de %d + %d es igual a %d", var1,var2,resultado);
    resultado=var2-var1; //Restar
    printf("\nEl resultado de %d - %d es igual a %d", var2,var1,resultado);
    resultado=var1*var2; //Multiplicacion
    printf("\nEl resultado de %d * %d es igual a %d", var1,var2,resultado);
    resultado=var2/var1; //Division Entera
    printf("\nEl resultado de %d / %d es igual a %d", var2,var1,resultado);
    resultado=var2%var1; //Resto de Division
    printf("\nEl resto de la division (%d / %d) es igual a %d", var2,var1,resultado);

    return 0;
}
