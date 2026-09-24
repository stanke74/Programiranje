#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a=0;
    double b=0;

    printf("Unesi stranicu a: ");
    scanf("%lf",&a);
    printf("Unesi stranicu b: ");
    scanf("%lf",&b);

    cout << fixed << setprecision(2);
    const double PDV = 0.25;
    //n=cijena
    int Ocijena=a*b;
    double n=Ocijena;
    cout << "Cijena bez PDVa: " << n << " EUR" << endl;
    cout << "PDV je 25% ili 0.25\n";

    auto d=a*b;
    cout << d << "cm na kvadrat" <<endl;



    return 0;
}
