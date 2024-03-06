#include <iostream>
#include <conio.h>

using namespace std;

const int T = 10;
int i, numMaior, numMenor, numAnt, nums[T];
float media = 0;

void resetArray() {
    for (i = 0; i < T; i++)
    {
        nums[i] = 0;
    }
    cout << "Array resetado!" << endl << endl;
}

void validateNumber(int a, int b) {
    if (a == b+1) {
        i = 10;
    }
}

void insertArray() {
    for (i=0 ; i<T ; i++) {
        cout << "Insira um numero: " << endl;
        cin >> nums[i];
        if (i > 0) {
            validateNumber(nums[i], nums[i-1]);
        }
    }
}

void biggerValue(int a) {
    if (a > numMaior) {
        numMaior = a;
    }
}

void smallValue() {
    for (i=0 ; i<T ; i++) {
        if (i == 0) { 
            numMenor = nums[i];
            numMaior = nums[i];
        } else {
            if (nums[i] < numMenor) {
                numMenor = nums[i];
            } else {
                biggerValue(nums[i]);
            }
        }
    }
}


VVVVVVVVVVVVVVVVV
void average(float a) {
    media = a / T;
}

int sum() {
    for (i=0 ; i<T ; i++) {
        media = media + nums[i]; 
    }

    return media;

    average(media);
}

int main() {
    resetArray();
    insertArray();

    return 0;
}

// cout << a << "/" << b << endl;

