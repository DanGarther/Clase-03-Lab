#include <stdio.h>
#include <stdlib.h>
int sumarNumeros(int, int);

int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese el primer numero");

    fflush(stdin);
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero");

    fflush(stdin);
    scanf("%d", &numero2);

    resultado = sumarNumeros(numero1, numero2);

    printf("El resultado es: %d", resultado);


    return 0;


}

int sumarNumeros(int numero1, int numero2){

int resultado;

resultado = numero1 + numero2;

return resultado;

}
