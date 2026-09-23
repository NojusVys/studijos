#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double savings = 100.0;
    const double target = 500.0;
    const double monthlyDeposit = 75.0;
    int month = 0;

    while(savings < target){
        month++;
        savings += monthlyDeposit;
        cout << month << " menuo " << fixed << setprecision(2) << savings << " EUR" << endl;
    }

    cout << "Tikslas pasiektas per " << month << endl;

    return 0;
}
