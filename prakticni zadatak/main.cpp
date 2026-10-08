#include <iostream>
#include <iomanip>

using namespace std;

double m=0;
double prosjek(int a, int b){
   m=(a+b)/2.0;
   return m;
}


int main()
{
    int a=0;
    int b=0;

    cout << "Unesi prvu ocjenu: " << endl;
    cin >> a;
    cout << "Unesi drugu ocjenu: " << endl;
    cin >> b;

    cout << fixed << setprecision(2) << endl;
    cout << "Prosjek ocjena je: " << prosjek(a, b) << endl;


    return 0;
}
