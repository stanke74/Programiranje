#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int ocjene[5] = {2,5,5,5,4};
    int n=0;
    cout << fixed << setprecision(2);
    for(int i=0;i<5;i++){
        n=ocjene[i] + n;
    }
    n=n/5;
    cout << n << endl;


    return 0;
}
