//Atividade 9

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.*/

#include <stdio.h>

int main () {

    int num, cont = 0, cont_num = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", & num);

    while (cont <= num)
    {
        cont_num = num;
        cont++;
        if (cont_num % 2 != 0)
        {
            printf("%d ", cont_num);
            cont_num++;
        }

    }


return 0;

}