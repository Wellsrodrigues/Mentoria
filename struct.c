#include <stdio.h>
#include <string.h>

typedef struct{
	int cep;
	char rua[100];
	char bairro[50];
}casa;

casa criar (int cep, char rua[100],char bairro[50]){
	casa house;
	house.cep = cep;
	strcpy(house.bairro,bairro);
	strcpy(house.rua,rua);
	//dentro dela é uma variavel que traz uma informação que esta
	//sendo enviada pelo usuario na função main
	
return house;
}

casa editar (casa house,int cep, char bairro[50]){
	house.cep=cep;
	strcpy(house.bairro,bairro);
return house;
}

void imprime(casa house) {
	printf("Cep: %d\n",house.cep);
	printf("Rua: %s\n",house.rua);
	printf("Bairro: %s\n\n",house.bairro);	
}

int main(){

/*
	casa jaelma;
	jaelma = criar(65636030,"Nunes","Flores");
	imprime(jaelma);
	
	casa wellison;
	wellison = criar(123, "Rua01", "Centro");
	imprime(wellison);
*/

	casa vila[3];

	vila[0] = criar(453, "IFMA", "Caxias");
	vila[1] = criar(768,"rua04","bairro04");
	vila[2] = criar(592,"rua05","bairro05");
	
	vila[0] = editar(vila[0], 123, "Tinom");
	imprime(vila[0]);
}
