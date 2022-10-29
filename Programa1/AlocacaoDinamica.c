#include <stdio.h>

int main(int argc, char *argv[]){
    int a;
    printf("(%s)\n", argv[0]);
    printf("(%s)\n", argv[1]);
    scanf("%d", &a);
    printf("%d\n", a);

    return 0;
}