#include <stdio.h>

int main() {
    int num, binary = 0, base = 1, rem;
    scanf("%d", &num);

    // если число меньше 0, то добавляем знак - перед двоичной записью
    if (num < 0) {
        printf("-");
        num = -num;
    }

    // переводим число в двоичную систему счисления
    while (num > 0) {
        rem = num % 2;
        binary = binary + rem * base;
        num = num / 2;
        base = base * 10;
    }

    // выводим двоичную запись 
    printf("%d\n", binary);

    return 0;
}
