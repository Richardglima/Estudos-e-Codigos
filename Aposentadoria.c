#include <stdio.h>

int main (){
	
	int servico;
	int idade;
	int aposentadoria = 65;
	
	printf("quanto tempo de servico vc tem. \n");
	scanf("%d", &servico);
	
	printf("quantos anos vc tem. \n");
	scanf("%d", &idade);
	
	if (idade >=aposentadoria  || (servico >=35)) { 
	  printf("vc pode se aposentar. \n");
    } else {
    	printf("vc ainda nao pode se aposentar. \n");
	}
	  
	return 0;
}
