#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(void){
    int a = 3;
    int** y;
    int* x;
    x = &a;
    y = &x;
    char nome[30];
    
    fgets(nome, 30, stdin);

    printf("%s\n", nome);
    printf("%p\n", *y);
    printf("%p\n", x); // operador dereferece
    printf("%d\n", a); 

    return 0;
}
