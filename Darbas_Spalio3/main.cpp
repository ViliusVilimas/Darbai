#include <iostream>
using namespace std;

int suskaičiuotiPerimetra(int krastine);
void suskaiciuotiPlota(int krastine, int& plotas);
double celsiusToFahrenhei(double C);
void fahrenheitToCelsius(double F, double& C);

int main() {
    cout<<"----------1 uzd----------"<<endl;
    int plotas, krastine;
    cout<<"Sauk krastine: "<<endl;
    cin>>krastine;
    cout<<suskaičiuotiPerimetra(krastine)<<endl;
    suskaiciuotiPlota(krastine,  plotas);
    cout<<"plotas = "<<plotas<<endl;

    cout<<"----------2 uzd----------"<<endl;
    double C, F;
    cout<<"Sauk Temp: ";
    cin>>C;
    cout<<"Sauk Fer: ";
    cin>>F;
    cout<<"Fahrenheit = "<<celsiusToFahrenhei(C)<<endl;
    fahrenheitToCelsius(F, C);
    cout<<"Celsius = "<<C<<endl;

    return 0;

}

int suskaičiuotiPerimetra(int krastine) {
    int plotas;
    plotas = krastine*krastine;
    return plotas;
}

void suskaiciuotiPlota(int krastine, int& plotas) {
    plotas=krastine*krastine;
}

double celsiusToFahrenhei(double C) {
    double temp;
    temp = C*33.8;
    return temp;
}

void fahrenheitToCelsius(double F, double& C) {
    C=F/33.8;

}