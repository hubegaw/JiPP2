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

void sortArray(int array[]) {
    int i, x, j;
    for (i = 1; i < sizeof(array)/sizeof(int); i++)
    {
        x = array[i];
        j = i - 1;
        while (array[j] > x && j >= 0)
        {
            array[j + 1] = array[j]; j--;
        }
        array[j + 1] = x;
    }
}

int assign(int x, int *w) {
    *w = x;
    return *w;
}

int divide(int a, int b) {
    if(a%b != 0)
        throw std::invalid_argument("\nWynikiem dzielenia nie jest liczba calkowita\n");
    else if(b == 0)
        throw std::invalid_argument("\nDzielnik jes zerem\n");
    else
        return a/b;
}

int convert() {
    std::cout << "\n\nWpisz dowolny ciag znakow do przekonwertowania na liczbe typu int: ";
    char text[20];
    fgets(text, 20, stdin);
    if(!atoi(text))
        throw std::invalid_argument("\nWprowadzony ciag zawiera nieprawidlowe znaki\n");
    else if(sizeof(text) > 20)
        throw std::invalid_argument("\nWprowadzona liczba jest za duza\n");
    else return atoi(text);
}

