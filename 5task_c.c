#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float avg = 0.0;

    // вводим первое число
    scanf("%d", &num);

    // считаем среднее арифметическое до тех пор, пока не будет введено число 0
    while (num != 0) {
        sum += num; // увеличиваем сумму считанных чисел на введенное число
        count++; // увеличиваем счетчик чисел
        scanf("%d", &num); // вводим следующее число
    }

    // если в последовательности были числа, то считаем и выводим среднее арифметическое
    if (count > 0) {
        avg = (float) sum / count;
        printf("Average is %f\n", avg);
    }
    // иначе выводим 0
    else {
        printf("0\n");
    }

    return 0;
}
