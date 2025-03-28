#include <stdio.h>

int main() {
    int idade;

    printf("Infome a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 18){
        printf("Menor de idade (-18)\n");
    }else if (idade >= 18 && idade <= 64){
        printf("Adulto (entre 18 a 64 anos)\n");
    }else{
        printf("Idoso (65+)\n");
    }
    return 0;
}
