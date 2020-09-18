
// kodutöö1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
void minuArvutused(double raadius) {

    double kulg = 2 * raadius;
    double ruudupindala = pow(kulg, 2);
    double ringipindala = M_PI * pow(raadius, 2);
    double ringiumbermoot = 2 * M_PI * raadius;
    cout << kulg << endl;
    cout << ruudupindala << endl;
    cout << ringipindala << endl;
    cout << ringiumbermoot << endl;
}



int main()
{
    cout << "--------------------------------------------------------------------------------------------------------------- " << endl;
    cout << "esimene ul (1.1) " << endl;
    cout << " sisesta raadius(AINULT NUMBRID!)" << endl;

    double raadius;
    cin >> raadius;
    minuArvutused(raadius);
   

    cout << "--------------------------------------------------------------------------------------------------------------- " << endl;
    cout << "jargmine ul (1.2) " << endl;


    double palgad[] = { 500, 1005, 1000, 700, 1900 };
    int length = sizeof(palgad) / sizeof(double);
    for (int i = 0; i < length; i++) {
        ;
        // cout << i << endl;
        if (palgad[i] < 1000) {
            ;
            //cout << palgad[i] << endl;
            palgad[i] = (int)(palgad[i] * 1.05);
        }
        cout << palgad[i] << endl;
    }

    cout << "--------------------------------------------------------------------------------------------------------------- " << endl;
    cout << "jargmine ul (1.3) " << endl;


    cout << "Sisesta kraad(AINULT NUMBRID!)" << endl;
    int number;
    cin >> number;

    double a = number;
    if (a > 20) {
        cout << "HOT" << endl;
    }
    else if (a < 10) {
        cout << "COLD!" << endl;
    }
    else {
        cout << "WARM!" << endl;

    }





}