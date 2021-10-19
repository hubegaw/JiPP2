#include <iostream>
#include <cstdlib>
#include <ctime>

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

