#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double CIJENA_ULAZNICE = 5.0;
    const int PRAG_POPUSTA = 5;
    const double STOPA_POPUSTA = 0.10;

    int ukupnoUlaznica = 0;
    double ukupniPrihod = 0.0;

    int redniBroj;
    int kolicina;
    double osnovniIznos;
    double konacniIznos;

    cout << fixed << setprecision(2);

    for (redniBroj = 1; redniBroj <= 3; redniBroj++) {

        do {
            cout << "Kupnja " << redniBroj << " - unesi broj ulaznica od 1 do 30: ";
            cin >> kolicina;
        } while (kolicina < 1 || kolicina > 30);

        osnovniIznos = kolicina * CIJENA_ULAZNICE;
        if (kolicina >= PRAG_POPUSTA) {
            konacniIznos = osnovniIznos - (osnovniIznos * STOPA_POPUSTA);
        } else {
            konacniIznos = osnovniIznos;
        }

        ukupnoUlaznica = ukupnoUlaznica + kolicina;
        ukupniPrihod = ukupniPrihod + konacniIznos;

        cout << "Kupnja " << redniBroj << ": " << konacniIznos << " EUR" << endl;
    }

    cout << "Ukupno prodanih ulaznica: " << ukupnoUlaznica << endl;
    cout << "Ukupni prihod: " << ukupniPrihod << " EUR" << endl;

    return 0;
}
