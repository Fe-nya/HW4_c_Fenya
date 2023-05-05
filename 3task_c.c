#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int length, upper = 0, lower = 0, digit = 0, special = 0; // Переменные с количеством символов разных классов
    char password[100]; // массив для хранения пароля

    scanf("%s", password); // Ввод пароля

    length = strlen(password); // Получаем длину пароля

    // Если длина пароля не соответствует ограничениям, то сразу выводим сообщение об ошибке
    if (length < 8 || length > 14) {
        printf("NO\n");
        return 0;
    }

    // Перебираем каждый символ пароля и проверяем, к какому классу символов он относится
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            upper = 1;
        } else if (islower(password[i])) {
            lower = 1;
        } else if (isdigit(password[i])) {
            digit = 1;
        } else if (ispunct(password[i])) {
            special = 1;
        }
    }

    // Если пароль состоит только из одного или двух классов символов, выводим сообщение об ошибке
    if ((upper + lower + digit + special) < 3) {
        printf("NO\n");
        return 0;
    }

    // Проверяем каждый символ пароля на соответствие таблице ASCII с кодами от 33 до 126
    for (int i = 0; i < length; i++) {
        if (password[i] <= 33 || password[i] >= 126) {
            printf("NO\n");
            return 0;
        }
    }

    // Если все условия выполнены, выводим сообщение о правильном пароле
    printf("YES\n");

    return 0;
    }