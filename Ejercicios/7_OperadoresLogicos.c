//c1 && c2: c1 y c2
//c1 || c2 : c1 o c2
// ! c1: si no(c1)

#include <stdio.h>
int main() {
    int a=5,b=10,c=24,resultado;
    resultado= (a<b) && (c>b);
    printf("EL RESULTADO: %d\n",resultado);
    resultado= !((a<b) && (c>b));
    printf("El resultado1: %d\n", resultado);
    resultado=(a<b) || (c<a);
    printf("El resultado2: %d\n", resultado);
    resultado= !((a<b) && (c<a));
    printf ("El resultado3: %d\n",resultado);
    resultado=!(a<c);
    printf("%d",resultado);
}



