#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateNewPopulation(double prevPopulation, double birthRate, double deathRate) {
    return prevPopulation * (1.0 + birthRate) * (1.0 - deathRate);
}

int main() {
    double P;
    double B;
    double D;
    int years;

    cout << "Enter the starting size of the population (minimum 2): ";
    cin >> P;
    while (P < 2) {
        cout << "Invalid input. Starting population must be at least 2. Re-enter the starting size of the population: ";
        cin >> P;
    }

    cout << "Enter the annual birth rate (as a decimal, e.g., 0.032): ";
    cin >> B;
    while (B < 0) {
        cout << "Invalid input. Birth rate cannot be negative. Re-enter the annual birth rate: ";
        cin >> B;
    }

    cout << "Enter the annual death rate (as a decimal, e.g., 0.026): ";
    cin >> D;
    while (D < 0) {
        cout << "Invalid input. Death rate cannot be negative. Re-enter the annual death rate: ";
        cin >> D;
    }

    cout << "Enter the number of years to display (minimum 1): ";
    cin >> years;
    while (years < 1) {
        cout << "Invalid input. Number of years must be at least 1. Re-enter the number of years to display: ";
        cin >> years;
    }

    cout << "\nYear\tProjected Population\n";
    cout << "----------------------------\n";
    cout << "Start\t" << round(P) << endl;

    for (int year = 1; year <= years; ++year) {
        P = calculateNewPopulation(P, B, D);
        cout << year << "\t" << round(P) << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
