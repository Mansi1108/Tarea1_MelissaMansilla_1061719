#include "Ejercicios.h"



Ejercicios::Ejercicios()
{
}
int Ejercicios::Basen(int num4, int base) 
{

}
//Referencia y ayuda de Stackoverflow
int Ejercicios::Multiplicacion(int sum, int multi) {
	if (sum == 0 || multi == 0) {
		return 0;
	}
	else {
		return sum + Multiplicacion(sum, multi - 1);
	}
}

System::String^ Ejercicios::Palindromas(System::String^ palabra) {
	int num = palabra->Length-1;
	int i;

	for (i = 0; i < palabra->Length - 1; i++)
	{
		for (num = palabra->Length - 1; num >= 0; num--)
		{
			if (palabra[i] == palabra[num])
			{
				return "Es Palíndromo";
			}
			else
			{
				return "No es palíndromo.";
			}
		}
	}
}
