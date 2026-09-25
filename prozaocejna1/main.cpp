#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int ocjene[7];

    cout << "Unesi ocjene od broja 1 do 5\n" << endl;

    printf("Unesi prvu ocjenu: ");
    scanf("%i",&ocjene[0]);
    printf("Unesi drugu ocjenu: ");
    scanf("%i",&ocjene[1]);
    printf("Unesi trecu ocjenu: ");
    scanf("%i",&ocjene[2]);
    printf("Unesi cetvrtu ocjenu: ");
    scanf("%i",&ocjene[3]);
    printf("Unesi petu ocjenu: ");
    scanf("%i",&ocjene[4]);
    printf("Unesi sestu ocjenu: ");
    scanf("%i",&ocjene[5]);
    printf("Unesi sedmu ocjenu: ");
    scanf("%i",&ocjene[6]);

    double n=0;
    for(int i=0;i<7;i++){
        n=ocjene[i] + n;
        }
    n=n/7.0;

    printf("\n");

    cout << fixed << setprecision(2);
    cout << "Prosjek broja ocjna zaokruzeno na dvije decimale je: " << n << endl;


    return 0;
}
