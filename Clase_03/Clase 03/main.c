#include <stdio.h>
#include <stdlib.h>

float sumar(int numeroUno, int numeroDos){
    float resultado;
    resultado = numeroUno+numeroDos;
    return resultado;
}
float resta(int numeroUno, int numeroDos){
    float resultado;
    resultado = numeroUno-numeroDos;
    return resultado;
}
float divi(int numeroUno, int numeroDos){
    float resultado;
    resultado = numeroUno/numeroDos;
    return resultado;
}
float mult(int numeroUno, int numeroDos){
    float resultado;
    resultado = numeroUno*numeroDos;
    return resultado;
}
void mostrar(void){
printf("\nPa toda la vagancia ");
}
void pedirNumero(void){

}
int pedirYLeerNumero(void){
    int number;
    printf("\nIngrese un numero: ");
    scanf("%d",&number);
    return number;
}
char pedirYLeerOp(void){
    char operador;
    printf("\nIngrese la operacion ");
    operador = getche();
    while (operador!= '+' && operador != '-' && operador != '*' && operador!= '/')
    {
        printf("\nIngrese la operacion, recuerde debe ser una multiplicacion, division, suma o resta ");
        operador = getche();
    }
}
float Calcular(int primerNumero, char op, int segundoNumero){

}

int main()
{
    int num1, num2;
    char op;
    int ope;
    mostrar();
    num1=pedirYLeerNumero();
    op=pedirYLeerOp();
    num2=pedirYLeerNumero();


/*
    printf("Ingrese numero uno: ");
    scanf("%d",&num1);

    printf("Ingrese la operacion ");
    op = getche();

    printf("\nIngrese numero dos: ");
    scanf("%d",&num2);
*/
/*

    switch(op)
    {
        case '+':
            //int suma = num1+num2;
            //ope=num1+num2;
            ope = sumar(num1,num2);
            printf("\nResultado: %d\n",ope);
            break;
        case '-':
           //int resta = num1-num2;
           //ope=num1-num2;
            ope=resta(num1,num2);
            printf("\nResultado: %d\n",ope);
            break;
        case '*':
            //int mult = num1*num2;
            //ope=num1*num2;
            ope=mult(num1,num2);
            printf("\nResultado: %d\n",ope);
            break;
        case '/':
           //int div = num1/num2;
           //ope=num1/num2;
            ope=divi(num1,num2);
            printf("\nResultado: %d\n",ope);
            break;
    }
*/


/*
if (op == '+')
{
        int suma = num1+num2;
        printf("Resultado: %d",suma);
}
if (op == '-')
{
        int resta = num1-num2;
        printf("Resultado: %d",resta);
}
if (op == '*')
{
        int mult = num1*num2;
        printf("Resultado: %d",mult);
}
if (op == '/')
{
        int suma = num1/num2;
        printf("Resultado: %d",suma);
}
*/



    return 0;
}
/** \brief
*realiza la suma de dos numeros
*   \param numero1 el primer numero entero
*   \param lalala
*   \return la suma
*/
