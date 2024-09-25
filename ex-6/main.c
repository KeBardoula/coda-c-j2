#include <stdlib.h>
#include <stdio.h>

int main(){
	/* Code */
	char prenom[20];
	int age;
	int annee = 2024;
	int anneeFin;
	int anneeNaiss;
	printf("Bonjour, quel est votre prénom ?\n");
	scanf("%s", prenom);

	printf("Bonjour %s, quel est votre âge ?\n", prenom);
	scanf("%d", &age);

	anneeFin = annee - age - 1;
	anneeNaiss = annee - age;


	printf("%s, si vous ëtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n", prenom, anneeFin, anneeNaiss);

	exit(0);
}