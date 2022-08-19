#include <iostream>
using namespace std;

int main (){

    int k = 0;
    int n = 0;
    double sn = 0;

    cin >> k;

    while (sn <= k){
        n += 1;
        sn = sn + 1.0/n;
    }
    cout << n;

    return 0;

}