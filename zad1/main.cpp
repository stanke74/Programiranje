#include <iostream>

using namespace std;

double zbroji(double a, double b)
{
 return a+b;
}
double oduzmi(double a, double b)
{
return a-b;
}
double pomnozi(double a, double b)
{
return a*b;
}
double podijeli(double a, double b)
{
return a/b;
}
double ispisiRezultat(double rezultat){
cout << rezultat << endl;
}

int main()
{
    double a=0;
    double b=0;
    double rezultat=0;
    cout << "Unesi broj a: " << endl;
    cin >> a;
    cout << "Unesi broj b: " << endl;
    cin >> b;

    rezultat=zbroji(a,b);
    cout << "Zbroj: " << endl;
    ispisiRezultat(rezultat);

    rezultat=oduzmi(a,b);
    cout << "Razlika: " << endl;
    ispisiRezultat(rezultat);

    rezultat=pomnozi(a,b);
    cout << "Umnozak: " << endl;
    ispisiRezultat(rezultat);

    rezultat=podijeli(a,b);
    cout << "Podijeljeno: " << endl;
    ispisiRezultat(rezultat);

    return 0;
}
