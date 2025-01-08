#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Įveskite lentelės eilučių skaičių: ";
    cin >> rows;
    cout << "Įveskite lentelės stulpelių skaičių: ";
    cin >> cols;
    int** table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }
    cout << "Įveskite lentelės reikšmes:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Elementas [" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    }
    cout << "\nLentelė:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nEilučių sumos:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += table[i][j];
        }
        cout << "Eilutė " << i << ": " << rowSum << endl;
    }
    cout << "\nStulpelių sumos:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += table[i][j];
        }
        cout << "Stulpelis " << j << ": " << colSum << endl;
    }
    int maxVal = table[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (table[i][j] > maxVal) {
                maxVal = table[i][j];
            }
        }
    }
    cout << "\nDidžiausia reikšmė lentelėje: " << maxVal << endl;
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;

    return 0;
}