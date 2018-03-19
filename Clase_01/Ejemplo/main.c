#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //Library added so I can use the getch and getche funct
#include <ctype.h> //Library added so I can use the toupper and tolower funct

int main()
{
    /* int %d  -- float %f -- char %c */

    int numero1;
    float numero2;
    char letra;

    // numero1=10;
    // numero2=6;

    printf("Ingrese un valor: ");
    scanf("%d",&numero1);
    printf("Ingrese un segundo valor: ");
    scanf("%f",&numero2);
    printf("Ingrese una letra: ");
/*  fflush(stdin); //Super High Important to put this before scanf(%c) so the buffer is clear
    scanf("%c", &letra);   */
    letra = getche(); //With this I can input a value to a char variable
    letra = toupper(letra); //With this every letter I input turns into mayus
    letra = tolower(letra); //With this every letter I input turns into minus

    float suma = numero1+numero2;

/*    for(int i = 0 ; i<10; i++)
          printf("\a"); */

    printf("\n\nLa letra es %c\n",letra);
    printf("This is bad number %d and this is his brother %.2f \n",numero1,numero2);
    printf("La suma de los numeros es %.2f\n",suma);
    // Al poner "%.2f" le estoy diciendo que cuando me muestre el float me lo traiga solo con los primeros dos decimales


    return 0;
}
