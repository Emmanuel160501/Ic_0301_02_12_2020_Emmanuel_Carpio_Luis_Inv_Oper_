
/** 
 * @version 5.11.4.9.2
 * @date 27/11/2020
 * @author emmanuel carpio luis
 * @brief Colocar los valores 
 */#include "ic_0301_04_10_2020_emmanuel_carpio_luis_simplex.h"


int leeDatos(int *var){
int rest,c,i;

	
		
	printf(" __________||Funcion a Optimizar||__________ \n\n\ningrese el numero de Variables: ");
	scanf("%d",var);
	
	printf("\nRecuerda que que: c1.X1+c2.X2+...cn.Xn = b \n\n");
	/**
	@param tomamos en cuenta la formula del metodo simplex 
        @param declaramos un for para que realize la  operacion
	@param c es la funcion 
	@param rest el numero de restricciones 
	@param i es el termino independiente 
	@paramestos datos se le piden a el usuario y se guardan en rest,c,i y var que serviran para sacar las matrizes
	@return esto nos retornara un rest
	*/
	for(c=0;c<*var;c++)
	{
		
		printf(" c%d: ", c+1);
		scanf("%lf",&funcion[c]);
		fflush(stdin);
		
		}
		
	
		printf("\n  Ingresa el numero de Restricciones: ");
		scanf("%d",&rest);
		
		fflush(stdin);
		
		for(i=0;i<rest;i++)
		{
			
			printf("Restriccion %d\n",i+1);
			for(c=0;c<*var;c++)
			{
				
				printf(" c%d: ",c+1);
				scanf("%lf",&restricciones[i][c]);
				fflush(stdin);
			}
			printf("dame el independiente ");
			scanf("%lf", &independiente[i]);
			fflush(stdin);
			}
			
			return rest;
			
	}
