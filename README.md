# BEM-VINDO À CALCULADORA DE FIBONACCI
            
A principal função dessa calculadora é informar qual o número de determinada
posição na sequência de Fibonacci.
Por exemplo, se essa sequência é (1, 2, 3, 5, 8, ...) e o usuário pedir 
o 4º termo, o programa informará que o número localizado nessa posição é 5.

## Como usar o programa?
Primeiro, ele lhe pedirá que digite a posição do número que você quer
descobrir. Então digite-o e pressione ENTER
Após isso, ele lhe informará o número da posição que informastes.
    
### Demonstração

# Instalação e Pré-requisitos
Para usar esta calculadora, basta possuir um programa que execute
arquivos em C e copiar o código descrito em Calculadora.c. Após isso,
é só rodar o código no terminal e aproveitar sua calculadora.

## Uso e Exemplos
1. Assim que iniciar o programa, aparecerá no terminal:

            ==========================================
                    Bem-vindo a calculadora de
                            Fibonacci
            ==========================================

            Digite a posicao do numero que quer descobrir:
                                                            
1. Em seguida, digite a posição do número que quer descobrir. Se quiser 
descobrir qual é o 4º número, digite 4; se for o 10º, digite 10. 
Após isso, dê ENTER.
Partindo pelo exemplo do 10º termo, aparecerá logo em seguida:
        
            O termo numero 10 da sequencia de Fibonacci eh: 89
                                                                
1. O programa, então, finalizará as operações e será necessário rodar o
código novamente para utilizá-lo outra vez.

* Lembre-se, esse programa deve receber uma posição, ou seja, ele aceita
apenas valores ***INTEIROS POSITIVOS***. 
Caso tente digitar um número *negativo*, aparecerá no terminal:
        
            ERRO. Digite um numero POSITIVO
                                            
* Se digitar um número decimal, o programa levará em consideração apenas
a parte inteira do número. Por exemplo, se digitar "1.2", ele calculará
como se fosse "1"; se digitar um "5.9", calculará como se fosse um "5".

## Estrutura do Projeto
    │── README.md
    │── LICENSE
    └── Calculadora.c

## Licença
Este projeto está licenciado sob a MIT License. 
Veja o arquivo [LICENSE](LICENSE) para mais detalhes
