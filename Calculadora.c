#include <stdio.h>

int fibonacci (int n){
    if(n==0 || n==1){
        return 1;
    }else{
       return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    printf("\n==========================================\n\tBem-vindo a calculadora de\n\t\tFibonacci\n==========================================\n");

   int n, f;
   char c;
   
   printf("\nDigite a posicao do numero que quer descobrir:");
   scanf("%d", &n);
   if(n<0){
    printf("\nERRO. Digite um numero POSITIVO\n");
    n = 0;
   }else {
    f = fibonacci(n);
    printf("O termo numero %d da sequencia de Fibonacci eh: %d\n", n, f);
    f = 0;
   }
}
