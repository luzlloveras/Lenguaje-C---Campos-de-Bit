// campos de bit

#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct {
		unsigned int A : 1;
		int			 B : 3;
		unsigned int C : 1;
	} X ;
	
	X.A = 1;
	X.B = 15;
	X.C = 4357951443;
	
	printf("\n\n VERIFICANDO CONTENIDO DE LOS CAMPOS");
	printf("\n\n X.A = %d \t X.B = %d \t X.C = %d \n\n", X.A, X.B, X.C);
	printf("\n\n");
	
	return 0;
}
