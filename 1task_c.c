#include <stdio.h>

int main(){
int mes, year, x;
scanf("%d %d", mes, year);
if (mes == 1,3,5,6,8,10,12){
    x = 31;
    }
else x = 30;
if(mes == 2){
    x = 28;
}
if (mes == 2 &&((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))){
    x = 29;
}
printf("%d", x);
    return 0;
}