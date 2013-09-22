// a<b: a menor que b
// a>b: a mayor que b
// a <= b: a menor o igual que b
// a >=b: a mayor o igual que b
// a == b: a igual que b
// a != b : a disttinto que b
//
// 1 : Verdadero
// 0 : Falso
//
 #include <stdio.h>
 int main () {
    int x=4,y=10, a=18,resultado;
    resultado = (x<a);
    printf("a < b resultado: %d\n",resultado);
    resultado= (a!=y);
    printf("a != y resultado %d\n",resultado);
    resultado=(x>y);
    printf("x > y resultado %d\n",resultado);
}
