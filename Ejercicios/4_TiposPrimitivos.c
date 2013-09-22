//Los tipos primitivos se refiere a los tipos de Datos..

// Enteros..
// char= para guardar un caracter
// short = para guardar numeros cortos.. -
// int= numeros enteros
// long = numeros muy grandes
//NUMEROS REALES
// float = \f o \g para redondear
// double = muchisimas comas..
//
#include <stdio.h>

int main() {
    int n1=14,n2=10;
    char letra= 'A';
    char letra1 = 'B';
    float coma=2.4, pi=3.14;

    printf ("Los numeros enteros son el %d y %d\n", n1,n2);
    printf ("Los flotantes son el %g y %g\n", coma,pi);
    printf ("De un caracter son el %c y %c\n",letra,letra1);
}
