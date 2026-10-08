#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    double m;
    double kvadrat;

    cout << "Unesi broj od -100 do 100: " << endl;
    cin >> a;

    printf("\n");

    if(abs(a)%2==1) printf("Broj je neparan\n");
    else printf("Broj je paran\n");

    m=abs(a);
    cout << "Absolutna vrijednost: " << m << endl;

    kvadrat=a*a;
    cout << "Kvadrat broja je: " << kvadrat << endl;

    return 0;
}
