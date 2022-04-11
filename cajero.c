#include <stdio.h>

int main(void) {
  
    int usd1, usd5, usd10, usd20, usd50, usd100;
    int cantidad;

    printf ("Ingresar cantidad a retirar: ");

    scanf("%d", &cantidad);
  

    if(cantidad<20){

        printf("El monto fue menor al minimo requerido");
        return 1;
    }

    else if (cantidad>5000){

        printf ("El monto fue mayor al maximo requerido");
        return 2;
    }

    for(usd100=0; cantidad>=100; usd100++){

        cantidad=cantidad-100;     
    } 
    for(usd50=0; cantidad>=50; usd50++){

            cantidad=cantidad-50;
    } 
    for(usd20=0; cantidad>=20; usd20++){

        cantidad=cantidad-20;        
    }              
    for(usd10=0; cantidad>=10; usd10++){

        cantidad=cantidad-10;        
    }
    for(usd5=0; cantidad>=5; usd5++){

        cantidad=cantidad-5;        
    }                       
    for(usd1=0; cantidad>=1; usd1++){

        cantidad=cantidad-1;        
    }

   
    printf("Billetes de 100: %d\n", usd100);
    printf("Billetes de 50: %d\n", usd50);
    printf("Billetes de 20: %d\n", usd20);
    printf("Billetes de 10: %d\n", usd10);
    printf("Billetes de 5: %d\n", usd5);
    printf("Billetes de 1: %d\n", usd1);



  return 0;
}