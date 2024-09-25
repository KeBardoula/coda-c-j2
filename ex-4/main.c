#include <stdlib.h>
#include <stdio.h>

int main(){
	/*Code*/
	int var1;
	int var2;
	int var3 = var1*var2;
	char prenom[20] = "Kévin";

	printf("Je m'appelle %s\n", prenom);
	printf("La somme de la multiplication est :\n");
	printf("%d x %d = %d\n", var1, var2, var3);
	exit(0);
}