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
   
   printf("\nDigite a posicao do numero que quer descobrir:");
   scanf("%d", &n);
   f = fibonacci(n);
   printf("\nO termo numero %d da sequencia de Fibonacci eh: %d\n", n, f);
}
