#include <stdio.h>

int
main () 
{

    double x;
    printf("Введите значение x: ");
    scanf("%lf", &x);


    double result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;


    printf("Значение многочлена (по правилу Горнера): %lf\n", result);


    return 0;
}










/*

Задача из книги C Programming: A Modern Approach" (2nd Edition) by K.N. King
Цель: напишите программу, которая попросит пользователя ввести значение для x, а затем отобразит значение многочлена, вычисляля по правилу Горнера

*/