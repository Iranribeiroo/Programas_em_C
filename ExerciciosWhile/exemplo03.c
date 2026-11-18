#include<stdio.h>
int main(){
    int i=1;
    int numero;
    while(i<=3){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        printf("%d - Voce digitou: %d\n",i, numero);
       i++;
    }
return 0;
}
