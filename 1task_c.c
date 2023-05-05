#include <stdio.h>

int main() {
    int month, year, days;
    scanf("%d %d", &month, &year);

    // Если месяц находится в первой группе, то количество дней равно 31
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    } 
    // Если месяц находится во второй группе, то количество дней равно 30
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } 
    // Если месяц февраль, проверяем год на високосность
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            days = 29; // Високосный год, 29 дней
        } else {
            days = 28; // Обычный год, 28 дней
        }
    } 

    printf("%d\n", days); // Вывод количества дней

    return 0;
}