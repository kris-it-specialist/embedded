#include <stdio.h>
#include <stdlib.h>

/* To tutaj robimy printf i scanf */

#include "pole/pole.h"


int main()
{
	float a;
	float b;
	float h;
	float r;
	int figura;

	// Wybór pola
	printf("Program do obliczania pola figur. \n");
	printf("Prosze wybrać figure do obliczenia jej pola: \n");
	printf("1. Pole prostokąta \n");
	printf("2. Pole kwadratu \n");
	printf("3. Pole trójkąta \n");
	printf("4. Pole koła \n");
	printf("----------------------------------------------------\n");
	printf("Podaj wartość: \n");
	scanf("%d",&figura);

	
	switch(figura)
	{	
	// Prostokat
		case 1:
		{
			printf("Wybrałeś pole prostokąta.\n");
			printf("Wzór na obliczenie pola prostokata to P = a * b\n");
			printf("Podaj długośc boku a: \n");
			scanf("%f", &a); 
			printf("Podaj długość boku b: \n");
     			scanf("%f", &b);	
				if (a>0 && b>0)
				{
					printf("Pole prostokata wynosi = %f \n", prostokat(a,b));
					break;
				}
				else
				{
				 	printf("Podałeś liczby mniejsze od 0. Spróbuj jeszcze raz. \n");
					break;
				}
		}	

	// Kwadrat
		case 2:
		{
			printf("Wybrałeś pole kwadratu.\n");
			printf("Wzór na obliczenie pola kwadratu to P = a ^ 2\n");
			printf("Podaj długość boku a: \n");
			scanf("%f", &a);
                                if (a>0)
                                {
                                        printf("Pole kwadratu wynosi = %f \n", kwadrat(a));
					break;
                                }
                                else
                                {
                                        printf("Podałeś liczby mniejsze od 0. Spróbuj jeszcze raz. \n");
                                        break;
                                }
		}
	
	// Trójkat
		case 3:
		{	
			printf("Wybrałeś pole trójkata.\n");
			printf("Wzór na obliczenie pola trójkata to P = 0.5 * a * h\n");
			printf("Podaj długość boku a: \n");
			scanf("%f", &a); 
			printf("Podaj wysokość trójkąta h: \n");
     			scanf("%f", &h);
                                if (a>0 && h>0)
                                {
                                        printf("Pole trójkata wynosi = %f \n", trojkat(a,h));
					break;
                                }
                                else
                                {
                                        printf("Podałeś liczby mniejsze od 0. Spróbuj jeszcze raz. \n");
                                        break;
                                }
		}

	// Koło
		case 4:
		{
			printf("Wybrałeś pole koła.\n");
			printf("Wzór na obliczenie pola koła to P = PI * r ^ 2\n");
			printf("Podaj promień r: \n");
			scanf("%f", &r); 	
                                if (r>0)
                                {
                                        printf("Pole koła wynosi = %f \n", kolo(r));
				       	break;
                                }
                                else
                                {
                                        printf("Podałeś liczby mniejsze od 0. Spróbuj jeszcze raz. \n");
                                        break;
                                }
		}

	// Inne wartości
		default:
		{
			printf("Podałeś złe dane. Spróbuj jeszcze raz. \n");
			break;
		}
	}
}


