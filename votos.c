#include <stdio.h>

int main(){

    int candA = 0;
    int candB = 0;
    int candC = 0;
    int voto;
    do{
       
      printf("Em qual candidato votar. \n");
      scanf("%d", &voto);

      if(voto == 1){
         candA++;
      }
      else if(voto == 2){
        candB++;
      }
      else if(voto == 3){
        candC++;
      }
    else if(voto == 0){
      }
      else{
        printf("voto invalido. \n");
      }
      
    }while (voto != 0);

    printf("A=%d B=%d C=%d\n", candA, candB, candC);


    if(candA > candB && candA > candC){
        printf("CandA venceu. \n");
    }
    else if(candB > candA && candB > candC){
        printf("CandB venceu. \n");
    }
    else if(candC > candA && candC > candB){
        printf("CandC venceu");
    } else {
        printf("empate");
    }


  return 0;

}