#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculo de promedio del año\n");
    printf("::::::::::::::::::::::::::::::::::\n");

    float Trimestre1;
    float Trimestre2;
    float Trimestre3;
    float Promedio;

    printf("Ingrese la nota del primer trimestre \n:");
    scanf("%f",&Trimestre1);
    printf("::::::::::::::::::::::::::::::::::\n");

    printf("Ingrese la nota del segundo trimestre \n:");
    scanf("%f",&Trimestre2);
    printf("::::::::::::::::::::::::::::::::::\n");

    printf("Ingrese la nota del tercer trimestre \n:");
    scanf("%f",&Trimestre3);
    printf("::::::::::::::::::::::::::::::::::\n");

    Promedio = (Trimestre1 + Trimestre2 + Trimestre3) / 3;

    printf("La nota promedio es : %.2f",Promedio);
    printf("::::::::::::::::::::::::::::::::::\n");

    if(Promedio >=1 && Promedio <=5){
        printf("DESAPROBADO");
    }

    if(Promedio >=6 && Promedio <=9){
        printf("APROBADO");
    }
    else{
        printf("FELICITACIONES,APROBADO");
    }







    return 0;
}
