#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;

    do{
       printf("-------------------------------------\n");
       printf("| 1) Dar de alta al agente.          |\n");
       printf("| 2) Dar de baja al agente.          |\n");
       printf("| 3) Modificar el perfil del agente. |\n");
       printf("| 4) Buscar el perfil del agente.    |\n");
       printf("| 5) Salir del menu.                 |\n");
       printf("-------------------------------------\n");

       fflush(stdin);
       scanf("%c", &opcion);

       switch(opcion){

       case '1':
        printf("Ingrese los datos del agente mas adelante.\n");
        break;
        case '2':
        printf("Elija el agente a eliminar.\n");
        break;
        case '3':
        printf("Elija agente a modificar.\n");
        break;
        case '4':
        printf("Ingrese dato a encontrar.\n");
        break;
        default:
            printf("Seguro que desea salir?.\n");
            fflush(stdin);
            scanf("%c", &opcion);
            break;
            }


            system("pause");
            system("cls");



    }while(opcion != 's');

    return 0;


}
