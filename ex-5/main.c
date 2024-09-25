#include <stdlib.h>
#include <stdio.h>

int main(){
	/* Code */
	float dec1 = 12, dec2 = 7;
	float moy = dec1+dec2/2;
	char prenom[20] = "Kévin";

	printf("Mon prénom est %s\n", prenom);
	printf("La moyenne de 12 et 7 est égale à %.2f\n", moy);

	exit(0);
}