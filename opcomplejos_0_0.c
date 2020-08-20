/* Operacion entre complejos */
#include<stdio.h>

void pedir_valores(float *num1, float *num2,float *num3, float *num4);
void definir_operacion (int *op);
void operar_valor (float num1, float num2, float num3, float num4, int op, float rtar,float rtai);

int main (void) //funcion principal
{	
	float numero1=0, numero2=0, numero3=0, numero4=0, resultador=0,resultadoi=0;
        int operacion=0;


	pedir_valores (&numero1,&numero2,&numero3,&numero4);
	definir_operacion (&operacion);
	operar_valor (numero1, numero2, numero3, numero4, operacion, resultador,resultadoi);
//	mostrar_resultado(numero1,numero2,operacion,resultado);
//	return 0;

}
void pedir_valores (float *num1, float *num2,float *num3, float *num4)

{
	printf("\nIngrese la parte imaginaria de primer número imaginario a operar: ");
	scanf("%f",num1);
	printf("\n\nIngrese la parte real del primer número imaginario a operar: " );
	scanf("%f",num2);
	printf("\n\n\nIngrese la parte imanginaria del segundo número imaginario a operar: ");
	scanf("%f",num3);
	printf("\n\n\n\nIngrese la parte real del segundo número imanginario a operar: ");
	scanf("%f",num4);
}

void definir_operacion (int *op)
{
	
	printf("\n\n1.Suma");
	printf("\n\n2.Resta");
	printf("\n\n3.Multiplicación");
	printf("\n\n4.División");
	printf("\n\nElija la operacion que desea realizar: " );
	scanf("%d",op);


}
void operar_valor(float num1,float num2,float num3, float num4, int op, float rtar,float rtai)
{	
if (op==1)  // suma
{
	printf("\nEl resultado es: ");
	rtar=num2+num4;
	rtai=num1+num3;
	printf("%f ",rtar);
	printf("%f i\n",rtai);
}
if (op==2)  //resta
{
	printf("\nEl resultado es: ");
	rtar=num2-num4;
	rtai=num1-num3;
	printf("%f\n",rtar);
	printf("%f i\n",rtai);

}
if (op==3) //multiplicacion
{
	printf("\nEl resultado es: ");
	rtar=(num2 * num4)+(num1 * num3 * (-1));
	rtai=(num2 * num3)+(num4*num1);
	printf("%f ",rtar);
	printf("%f i\n",rtai);

}
if (op==4) //division
{
	printf("\nEl resultado es: ");
	rtar= ((num2*num4)+(num1*num3))/((num4*num4)+(num3*num3)) ;
//	rtai= (((num2 * num3 * (-1))+(num1 * num2))/((num4 * num4)+(num3 * num3))) ;
	rtai= (((num1*num4)-(num2*num3))/((num3*num3)+(num4*num4)));
//	printf("%f i",rtai);
	printf("%f ",rtar);
	printf("%f i\n",rtai);

}	
}	

