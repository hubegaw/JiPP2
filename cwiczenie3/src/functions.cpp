#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>
#include <stdlib.h>
#include <stdexcept>

int liczPole(int a, int b) {
    return a * b;
}

int liczPole(int a, int b, int h) {
    return 0.5*(a+b)*h;
}

int returnRandomNumber(int a, int b) {
    srand(time(NULL));
    return rand()%(b-a) + a;
}

int returnMaxValue(int array[], int size) {
    int temp=0;

    for(int i = 0; i < size; i++) {
        if(temp < array[i]) temp = array[i];
    }
    return temp;
}

void reverseArray(int array[], int size) {
    int temp, end = size - 1;
    for(int i = 0; i < size/2; i++) {
        temp = array[i];
        array[i] = array[end];
        array[end] = temp;
        end--;
    }
}

int liczSrednia(int *a, int *b) {
    return ((*a)+(*b))/2;
}

void pickGreaterThan0(int *number) {
    if(*number > 0) std::cout << *number << " ";
    else return;
}

void sortArray(int *n1, int *n2, int *n3, int *n4, int *n5) {
    int i, x, j;
    int sortedArray[5];
    sortedArray[0] = *n1;
    sortedArray[1] = *n2;
    sortedArray[2] = *n3;
    sortedArray[3] = *n4;
    sortedArray[4] = *n5;

    for (i = 1; i < 5; i++)
    {
        x = sortedArray[i];
        j = i - 1;
        while (sortedArray[j] > x && j >= 0)
        {
            sortedArray[j + 1] = sortedArray[j]; j--;
        }
        sortedArray[j + 1] = x;
    }
    for(i = 0; i<5; i++)
        std::cout << sortedArray[i] << " ";
}

int assign(int x, int *w) {
    *w = x;
    return *w;
}

int divide(int a, int b) {
    if(a%b != 0)
        throw std::invalid_argument("\nWynikiem dzielenia nie jest liczba calkowita\n");
    else if(b == 0)
        throw std::invalid_argument("\nDzielnik jest zerem\n");
    else
        return a/b;
}

int convert(char text[]) {
    char *end;
    if(!strtol(text, &end, 10))
        throw std::invalid_argument("\nWprowadzony ciag zawiera nieprawidlowe znaki\n");
    else if(strtol(text, &end, 10) > 1000000000)
        throw std::overflow_error("\nWprowadzona liczba jest za duza\n");
    else return strtol(text, &end, 10);
}

