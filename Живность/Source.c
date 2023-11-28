#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BODY 4

int main() {
    setlocale(LC_ALL, "Russian");

    char** penguin;
    penguin = (char*)malloc(BODY * sizeof(char*));

    penguin[0] = " (o o)";
    penguin[1] = " / V \\";
    penguin[2] = "/ (_) \\";
    penguin[3] = " ^^ ^^";

    char** cat;
    cat = (char*)malloc(BODY * sizeof(char*));

    cat[0] = " /\\_/\\";
    cat[1] = "/@   @\\";
    cat[2] = "\\ -W- /";
    cat[3] = " -----";

    int peng_num, cat_num;

    printf("Введите количество пингвинов: ");
    scanf_s("%d", &peng_num);

    printf("Введите количество кошек: ");
    scanf_s("%d", &cat_num);

    for (int i = 0; i < BODY; i++) {
        for (int j = 0; j < peng_num; j++)
            printf("%s\t", penguin[i]);
        printf("\n");
    }
    free(penguin);

    for (int i = 0; i < BODY; i++) {
        for (int j = 0; j < cat_num; j++)
            printf("%s\t", cat[i]);
        printf("\n");
    }
    free(cat);

    return 0;
}