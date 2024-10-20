#include <iostream>
using namespace std;
const int STULPELIAI = 3;
const int EILUTES = 3;
int main()
{
    int sk, determinantas, matrica[EILUTES][STULPELIAI];
    cout << "Iveskite matricos skaicius" << endl;
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout << "a" <<i+1<<j+1<< " " <<endl;
            cin >> sk;
            matrica[i][j] = sk;
        }
    }
    determinantas=(matrica[0][0]*matrica[1][1]*matrica[2][2]) + (matrica[1][0]*matrica[2][1]*matrica[0][0]) + (matrica[2][0]*matrica[0][1]*matrica[1][2]) - (matrica[0][2]*matrica[1][1]*matrica[2][0]) - (matrica[1][0]*matrica[2][1]*matrica[0][0]) - (matrica[2][2]*matrica[1][1]*matrica[1][2]); ;
    return 0;
}
