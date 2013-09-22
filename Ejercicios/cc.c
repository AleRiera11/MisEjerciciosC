#include <stdio.h>
int main()
{
int filas=1,columna=1,i,j;
int matriz[filas][columna];
printf("Introduzca la cantidad de filas: ");
scanf("%d",&filas);
printf("Introduzca la cantidad de columnas: ");
scanf("%d",&columna);
for(i=0;i<filas;i++) {
for(j=0;j<columna;j++) {
printf("Llene la Matriz [%d][%d]: ",i,j);
scanf("%d",&matriz[i][j]);
}

printf("___________\n");
}

for(i=0;i<filas;i++) {
for(j=0;j<columna;j++) {
printf("%d \t",matriz[i][j]);
}
printf("\n");
}

return 0;
}
