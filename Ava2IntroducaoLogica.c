#include <stdio.h>

verificar(int x, int y, int num[y]){

    for(x=x;x<=y;x++){
        num[x] = x;
        if(num[x]%2==0){
        printf("O numero %d e par.\n",num[x]);
    }
        else{
            printf("o numero %d e impar.\n",num[x]);
    }
    }
}

main(){
int numInicial, numFinal;
int num[numFinal];

printf("Digite o numero inicial: ");
scanf("%d",&numInicial);
printf("Digite o numero final ");
scanf("%d",&numFinal);

verificar(numInicial,numFinal,num[numFinal]);
getchar();

}

