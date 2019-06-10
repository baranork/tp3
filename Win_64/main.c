#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    int r;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        printf("1.Cargar datos\n6.Listar empleados\n10.Salir\n");
    scanf("%d", &option);
        switch(option)
        {
            case 1:
                r = controller_loadFromText("data.csv",listaEmpleados);
                if(r==0){
                    printf("Todo bien");
                }
                else{
                    printf("Todo mal");
                }
                break;
            case 6:
                controller_ListEmployee(listaEmpleados);
                printf("Entro");
                break;
        }
        fflush(stdin);
    }while(option != 10);
    return 0;
}
