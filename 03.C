// campos de bit

#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct CAMPOS {
		int 		 A : 1;
		unsigned int B : 3;
		int 		 C : 4;
	};
	
	union {
		struct CAMPOS CB;
		char CAR;
	} X;
	
	X.CAR = 1423;
	
	printf("\n\n VERIFICANDO CONTENIDO DE LOS CAMPOS");
	printf("\n\n X.CB.A = %d \t X.CB.B = %d \t X.CB.C = %d \n\n", X.CB.A, X.CB.B, X.CB.C);
	printf("\n\n");
	
	return 0;
}
