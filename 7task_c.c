#include <stdio.h>

int main() {
    int n, i, num, zeros = 0, positives = 0, negatives = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num == 0) { // если число равно 0, увеличиваем счетчик нулей
            zeros++;
        }
        else if (num > 0) { // если число больше 0, увеличиваем счетчик положительных чисел
            positives++;
        } 
        else { // иначе, если число меньше 0, увеличиваем счетчик отрицательных чисел
            negatives++;
        }
    }

    // выводим количество нулей, положительных и отрицательных чисел
    printf("%d %d %d\n", zeros, positives, negatives);

    return 0;
}