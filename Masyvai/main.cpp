#include <iostream>
using namespace std;
int main()
{
    cout << "----------1----------" << endl;
    int mas[5], i, sum, min, max;
    cout << "Iveskite 5 sk." << endl;

    for (i=0; i <= 4; i++) {
        cin >> mas[i];
    }
    for (i=0; i <= 4; i++) {
        sum=sum+mas[i];
    }

    min = mas[0];
    max = mas[0];

    for (i=0; i <= 4; i++) {
        if(min > mas[i]) {
            min = mas[i];
        }
        if(max < mas[i]) {
            max = mas[i];
        }
    }
    cout << "suma " << sum << ", " << min << " yra min, " << max << " maksimumas" << endl;

    cout << "----------2----------" << endl;

    int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0, a10=0;
    cout << "sukurto zaidimo ivertinimai" << endl;
    int stud[40] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,};

    for (i=0; i < 40; i++) {
        if(stud[i] == 1) {
            a1++;
        }
        if(stud[i] == 2) {
            a2++;
        }
        if(stud[i] == 3) {
            a3++;
        }
        if(stud[i] == 4) {
            a4++;
        }
        if(stud[i] == 5) {
            a5++;
        }
        if(stud[i] == 6) {
            a6++;
        }
        if(stud[i] == 7) {
            a7++;
        }
        if(stud[i] == 8) {
            a8++;
        }
        if(stud[i] == 9) {
            a9++;
        }
        if(stud[i] == 10) {
            a10++;
        }
    }

    cout << "1 balas: "<<a1<<endl;
    cout << "2 balas: "<<a2<<endl;
    cout << "3 balas: "<<a3<<endl;
    cout << "4 balas: "<<a4<<endl;
    cout << "5 balas: "<<a5<<endl;
    cout << "6 balas: "<<a6<<endl;
    cout << "7 balas: "<<a7<<endl;
    cout << "8 balas: "<<a8<<endl;
    cout << "9 balas: "<<a9<<endl;
    cout << "10 balas: "<<a10<<endl;

    return 0;

}
