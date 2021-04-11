#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define PI 3.141592


char figuras2d();
char figuras3d();
char figurashd();
void area_tri();
void area_cua();
void area_rec();
void area_pen();
void area_cir();
void perimetro_tri();
void perimetro_rec();
void perimetro_cua();
void perimetro_pen();
void perimetro_cir();

void area_pira();
void area_cono();
void area_pri_rec();
void area_pri_hex();
void area_esfera();
void vol_pira();
void vol_cono();
void vol_pri_rec();
void vol_pri_hex();
void vol_esfera();

void area_cubo();
void area_tetraedro();
void area_octaedro();
void area_dodecaedro();
void area_icoseaedro();
void vol_cubo();
void vol_tetraedro();
void vol_octaedro();
void vol_dodecaedro();
void vol_icoseaedro();

char opciones_figuras,opciones_2d,opciones_3d,opciones_hd,opciones_calculo;


int main()
{
	printf ("\n ________________________________________________________");
	printf ("\n|  A- Figuras 2d  |   B- Figuras 3d   |   C- Figuras hd  |");
	printf ("\n|_________________|___________________|__________________|");

	opciones_figuras = getchar();

	switch( opciones_figuras )
	{
		case 'A':case 'a':
			{
				figuras2d();break;
			}
		case 'B':case 'b':
			{
				figuras3d();break;	
			}
		case 'C':case 'c':
			{
		   		figurashd();break;	
			}
		default:{printf ("\n\t +-----------------------------------------+");
	         	 printf ("\n\t | Ingresa las opciones A, B o C. Por favor|");
			 	 printf ("\n\t +-----------------------------------------+");break;}
	}
}

char figuras2d()
{
	printf("\n\t\t## Selecciona la figura ##\n");
    printf ("\n| T) Triangulo  | \n| C) Cuadrado   |\n| R) Rectangulo | \n| H) Pentagono  |\n| I) Circulo    | ");
			fflush (stdin);
			opciones_2d = getchar();                             

			switch( opciones_2d )
			{
				case 'T':case 't':
				{	
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area     |\n\t\t| P-Perimetro|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':{area_tri();break;}
										 case 'P':case 'p':{perimetro_tri();break;}
										 default:{printf("\n\t ## La opcion ingresada NO es correcta ##");break;}
										}break;	
				}
				case 'R':case 'r':
				{
					printf("\n\t## Selecciona el calculo que queres realizar ##\n");
					printf ("\n\t\t| A-Area     |\n\t\t| P-Perimetro|");
					fflush (stdin);
					opciones_calculo = getchar();

					switch (opciones_calculo)
					{
					case 'A':case 'a':{area_rec();break;}
					case 'P':case 'p':{perimetro_rec();break;}
					default:{printf("\n\t ## La opcion ingresada NO es correcta ##");break;}
					}
					break;
				}
		    	case 'C':case 'c':
				{
				
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area     |\n\t\t| P-Perimetro|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':{area_cua();break;}
										 case 'P':case 'p':{perimetro_cua();break;}
										 default:{printf("\n\t ## La opcion ingresada NO es correcta ##");break;}
										}break;
				}
				case 'H':case 'h':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area     |\n\t\t| P-Perimetro|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':{area_pen();break;}
										 case 'P':case 'p':{perimetro_pen();break;}
										 default:{printf("\n\t ## La opcion ingresada NO es correcta ##");break;}
										}break;
				}	
				case 'I':case 'i':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area     |\n\t\t| P-Perimetro|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':{area_cir();break;}
										 case 'P':case 'p':{perimetro_cir();break;}
										 default:{printf("\n\t ## La opcion ingresada NO es correcta ##");break;}
										}break;
					
				} 
			    

				default:{
				printf ("\n\t +----------------------------------------------+");
	         	printf ("\n\t | Ingresa las opciones 'T,C,R,H o I',por favor |");
			 	printf ("\n\t +----------------------------------------------+");break;}
			}
			
}
char figuras3d()
{      	
	    printf("\n\t\t## Selecciona la figura ##\n");
		printf ("\n\t\t| P-Piramide          | \n\t\t| C-Cono              |\n\t\t| A-Prisma Rectangular|\n\t\t| D-Prisma Hexagonal  |\n\t\t| E-Esfera            |");
			fflush (stdin);
			opciones_3d = getchar();

			switch( opciones_3d )
			{
				case 'P':case 'p':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_pira();break;
										 case 'V':case 'v':vol_pira();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'C':case 'c':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_cono();break;
										 case 'V':case 'v':vol_cono();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'A':case 'a':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_pri_rec();break;
										 case 'V':case 'v':vol_pri_rec();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'D':case 'd':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_pri_hex();break;
										 case 'V':case 'v':vol_pri_hex();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'E':case 'e':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_esfera();break;
										 case 'V':case 'v':vol_esfera();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				default:{printf ("\n\t +----------------------------------------------+");
	         			 printf ("\n\t | Ingresa las opciones 'P,C,A,D o E',Por favor |");
			 			 printf ("\n\t +----------------------------------------------+");break;}
			}

}
char figurashd()
{       	
	    printf("\n\t\t## Selecciona la figura ##\n");
 		printf ("\n\t\t\t\t\t| C) Cubo      |\n\t\t\t\t\t| T) Tetraedro |\n\t\t\t\t\t| O) Octaedro  |\n\t\t\t\t\t| D) Dodecaedro|\n\t\t\t\t\t| P) Icosaedro |");
			fflush (stdin);
			opciones_hd = getchar();
			
			switch( opciones_hd )
			{
				case 'C':case 'c':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_cubo();break;
										 case 'V':case 'v':vol_cubo();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'T':case 't':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_tetraedro();break;
										 case 'V':case 'v':vol_tetraedro();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'O':case 'o':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_octaedro();break;
										 case 'V':case 'v':vol_octaedro();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'D':case 'd':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_dodecaedro();break;
										 case 'V':case 'v':vol_dodecaedro();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				case 'P':case 'p':
				{
									printf("\n\t## Selecciona el calculo que queres realizar ##\n");
									printf ("\n\t\t| A-Area   |\n\t\t| V-Volumen|");
									fflush (stdin);
									opciones_calculo = getchar();

									switch (opciones_calculo)
										{
										 case 'A':case 'a':area_icoseaedro();break;
										 case 'V':case 'v':vol_icoseaedro();break;
										 default:printf("\n\t ## La opcion ingresada NO es correcta ##");break;
										}break;
				}
				default:{printf ("\n\t +----------------------------------------------+");
	         			 printf ("\n\t | Ingresa las opciones 'C,T,O,D o P',Por favor |");
			 			 printf ("\n\t +----------------------------------------------+");break;}
			}	
}




// Funciones de figuras 2D

void area_tri(void)
{
int  valor_1, valor_2, resultado;
printf("\nIngresa la Base: ");
scanf("%i",&valor_1);
printf("Ingresa la Altura: ");
scanf("%i",&valor_2);
resultado=(valor_1*valor_2)/2;
printf("\nEl area del triangulo es : %i m2",resultado);
}
void area_cua(void)
{
int  valor_1, resultado;
printf("\nIngresa el lado: ");
scanf("%i",&valor_1);
resultado=valor_1*valor_1;
printf("\nEl area del cuadrado es : %i m2",resultado);
}
void area_rec(void)
{
int  valor_1,valor_2, resultado;
printf("\nIngresa el lado mayor: ");
scanf("%i",&valor_1);
printf("Ingresa el lado menor: ");
scanf("%i",&valor_2);
resultado=valor_1*valor_2;
printf("\nEl area del rectangulo es : %i m2",resultado);
}
void area_pen(void)
{
int  valor_1,valor_2, resultado;
printf("\nIngresa el lado: ");
scanf("%i",&valor_1);
printf("Ingresa la apotema: ");
scanf("%i",&valor_2);
resultado=5*valor_1*valor_2/2;
printf("\nEl area del pentagono es : %i m2",resultado);
}
void area_cir(void) // no calcula 
{	
float  valor_1, resultado;
printf("\nIngresa el radio: ");
scanf("%f",&valor_1);
resultado = PI*valor_1*valor_1;
printf("\nEl area del circulo es : %f m2",resultado);
}
void perimetro_tri(void)
{
int  valor_1, resultado;
printf("\nIngresa la Base: ");
scanf("%i",&valor_1);
resultado=valor_1*3;
printf("\nEl perimetro del triangulo es : %i m",resultado);
}
void perimetro_rec(void)
{
int  valor_1, valor_2, resultado;
printf("\nIngresa el lado mayor: ");
scanf("%i",&valor_1);
printf("\nIngresa el lado menor: ");
scanf("%i",&valor_2);
resultado=valor_1*2+valor_2*2;
printf("\nEl perimetro del triangulo es : %i m",resultado);
}
void perimetro_cua(void)
{
int  valor_1, resultado;
printf("\nIngresa el lado: ");
scanf("%i",&valor_1);
resultado=valor_1*4;
printf("\nEl perimetro del cuadrado es : %i m",resultado);
}
void perimetro_pen(void)
{
int  valor_1, resultado;
printf("\nIngresa el lado: ");
scanf("%i",&valor_1);
resultado=valor_1*5;
printf("\nEl perimetro del pentagono es : %i m",resultado);
}
void perimetro_cir(void)
{
int  valor_1, resultado;
printf("\nIngresa el radio: ");
scanf("%i",&valor_1);
resultado=2*PI*valor_1;
printf("\nEl perimetro del pentagono es : %i m",resultado);
}

// Funciones de figuras 3D

void area_pira(void)
{
int  valor_1, valor_2,valor_3, resultado;
printf("\nIngresa un lado de la Base: ");
scanf("%i",&valor_1);
printf("Ingresa la Apotema: ");
scanf("%i",&valor_2);
printf("Ingresa la Perimetro: ");
scanf("%i",&valor_3);
resultado=pow(valor_1,2)+(valor_2*valor_3)/2;
printf("\nEl area de la Piramide Base Cuadrada es : %i m2",resultado);
}
void area_cono(void)
{
int  valor_1, valor_2,resultado;

printf("\nIngresa el Radio (base): ");
scanf("%i",&valor_1);
printf("Ingresa la generatriz (lado): ");
scanf("%i",&valor_2);
resultado= PI*valor_1*(valor_2+valor_1);
printf("\nEl area del Cono es de %i m2",resultado);
}
void area_pri_rec(void)
{
int  valor_1, valor_2,valor_3, resultado;
printf("\nIngresa el lado de la Base Menor: ");
scanf("%i",&valor_1);
printf("Ingresa el lado de la Base Mayor:");
scanf("%i",&valor_2);
printf("Ingresa la Altura: ");
scanf("%i",&valor_3);
resultado=(2*valor_1*valor_3)+(2*valor_1*valor_2)+(2*valor_3*valor_2);
printf("\nEl area del Prisma Rectangular es : %i m2",resultado);
}
void area_pri_hex(void)
{
int  valor_1, valor_2,valor_3, resultado;
printf("\nIngresa el lado de la Base: ");
scanf("%i",&valor_1);
printf("Ingresa la Apotema:");
scanf("%i",&valor_2);
printf("Ingresa la Altura: ");
scanf("%i",&valor_3);
resultado=valor_1*6*(valor_2+valor_3);
printf("\nEl area del Prisma Hexagonal es : %i m2",resultado);
}
void area_esfera(void)
{
int  valor_1, resultado;
printf("\nIngresa el radio: ");
scanf("%i",&valor_1);
resultado= 4 *PI*pow(valor_1,2);
printf("\nEl area de la esfera es : %i m2",resultado);
}
void vol_pira(void)
{
int  valor_1, valor_2,resultado;

printf("\nIngresa el Area de la Base (m2): ");
scanf("%i",&valor_1);
printf("Ingresa la Altura(m): ");
scanf("%i",&valor_2);
resultado=(valor_1*valor_2)/3;
printf("\nEl volumen de la Piramide es de %i m3",resultado);
}
void vol_cono(void)
{
int  valor_1, valor_2,resultado;

printf("\nIngresa el Radio (base): ");
scanf("%i",&valor_1);
printf("Ingresa la Altura: ");
scanf("%i",&valor_2);
resultado= (PI*pow(valor_1,2)*valor_2)/3;
printf("\nEl volumen del Cono es de %i m3",resultado);	
}
void vol_pri_rec(void)
{
int  valor_1, valor_2,valor_3, resultado;
printf("\nIngresa el lado de la Base Menor: ");
scanf("%i",&valor_1);
printf("Ingresa el lado de la Base Mayor:");
scanf("%i",&valor_2);
printf("Ingresa la Altura: ");
scanf("%i",&valor_3);
resultado=valor_1*valor_2*valor_3;
printf("\nEl volumen del Prisma Rectangular es : %i m3",resultado);	
}
void vol_pri_hex(void)
{
int  valor_1, valor_2,valor_3, resultado;	
printf("\nIngresa la Base: ");
scanf("%i",&valor_1);
printf("Ingresa la Apotema:");
scanf("%i",&valor_2);
printf("Ingresa la Altura: ");
scanf("%i",&valor_3);
resultado=(6*valor_1*valor_2)/2*valor_3;
printf("\nEl volumen del Prisma Hexagonal es : %i m3",resultado);	
}
void vol_esfera(void)
{
int  valor_1, resultado;
printf("\nIngresa el radio: ");
scanf("%i",&valor_1);
resultado=4 * (PI*pow(valor_1,3)/3);
//resultado=4 *(PI * valor_1 * valor_1 * valor_1)/3;
printf("\nEl volumen de la esfera es : %i m3",resultado);	
}

// Funciones de figuras HD

void area_cubo(void)
{
int  valor_1, resultado;
printf("\nIngresa el lado: ");
scanf("%i",&valor_1);
resultado=6*pow(valor_1,2);
printf("\nEl area del cubo es : %i m2",resultado);
}
void area_tetraedro(void)
{
int  valor_1, valor_2, resultado;
printf("\nIngresa la Base : ");
scanf("%i",&valor_1);
printf("Ingresa la Altura: ");
scanf("%i",&valor_2);
resultado=4*((valor_1*valor_2)/2);
printf("\nEl area del tetraedro es : %i m2",resultado);
}
void area_octaedro(void)
{
int  valor_1, resultado;
printf("\nIngresa la arista: ");
scanf("%i",&valor_1);
resultado=2*sqrt(3) * valor_1* valor_1;
printf("\nEl area del octaedro es : %i m2",resultado);
}
void area_dodecaedro(void)
{
int arista;
float resultado;
printf("\nIngresa la arista:");
scanf("%i", &arista);
resultado=((arista*arista)*3)*6.8818;
printf("\nEl area del dodecaedro de arista %i es de %f m2", arista, resultado);
}
void area_icoseaedro(void)
{
int  valor_1, resultado;
printf("\nIngresa la arista: ");
scanf("%i",&valor_1);
resultado=5*sqrt(3)*valor_1*valor_1;
printf("\nEl area del icoseadro es : %i m2",resultado);
}
void vol_cubo(void)
{
int  valor_1, resultado;
printf("\nIngresa el lado: ");
scanf("%i",&valor_1);
resultado = pow(valor_1,3);
printf("\nEl volumen del cubo es : %i m3",resultado);
}
void vol_tetraedro(void)
{
int  valor_1, valor_2, resultado;
printf("\nIngresa la Base: ");
scanf("%i",&valor_1);
printf("Ingresa la Altura: ");
scanf("%i",&valor_2);
resultado=valor_2*(valor_1*valor_2)/2;
printf("\nEl volumen del tetraedro es : %i m3",resultado);
}
void vol_octaedro(void)
{
int arista;
float resultado;
printf("\nIngresa el tamanio de la arista en cm:");
scanf("%i", &arista);
resultado=(0.33333*1.41)*(pow(arista, 3));
printf("\nEl volumen del octaedro de arista de %i cm es de %.2f cm", arista, resultado);	
}
void vol_dodecaedro(void)
{
int arista;
float resultado;
printf("\nIngresa el tamanio de la arista en cm:");
scanf("%i",&arista);
resultado=(0.4699953)*pow(arista,3);
printf("\nEl volumen del octaedro de arista de %i cm es de %.2f cm", arista, resultado);
}
void vol_icoseaedro(void)
{
int  valor_1, resultado;
printf("\nIngresa la arista: ");
scanf("%i",&valor_1);
resultado=5 * ( 3 + sqrt(5)) * valor_1*valor_1 *valor_1/12;
printf("\nEl volumen del icoseadroc es : %i m3",resultado);
}
