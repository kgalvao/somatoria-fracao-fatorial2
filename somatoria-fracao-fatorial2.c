#include <stdio.h>
int fat (int);
float soma (int);
int main(){
    int n; float total;
    printf("Digite o limite superior de somatoria:\n");
    scanf("%d",&n);
    total=soma(n);
    printf("O valor da soma e:%f",total);
}

//Funcao que recebe int n (positivo) e retorna soma:
float soma(int n){
    float aux=1.0;
    for(int i=1;i<=n;i++){
        aux=aux+(1.0/fat(i)); //S=1+(1+1!)+(1+2!)+(1+3!)+...+(1+n!)
    }
    return aux;
}
//Funcao iterativa que calcula fatorial de um numero:
int fat(int n){
    int temp=n;
    for(int i=n-1;i>0;i--){
        temp=temp*i;
    }
    return temp;
}
