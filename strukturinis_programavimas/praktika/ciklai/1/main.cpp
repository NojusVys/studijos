#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    //PVZ.: 1
    // int num;

    // cout << "Iveskite teigiama skaiciu" << endl;
    // cin >> num;

    // while(num <= 0){
    //     cout << "Klaida! Skaicius turi buti teigiamas." << endl;
    //     cin >> num;
    // }

    // cout << "Ivestas skaicius yra lygus: " << num << endl;
    //
    // PVZ.: 2
    // double savings = 100.0;
    // const double target = 500.0;
    // const double monthlyDeposit = 75.0;
    // int month = 0;

    // while(savings < target){
    //     month++;
    //     savings += monthlyDeposit;
    //     cout << month << " menuo " << fixed << setprecision(2) << savings << " EUR" << endl;
    // }

    // cout << "Tikslas pasiektas per " << month << endl;
    // PVZ.: 3
    string password;

    do{
        cout << "Sukurkite slaptazodi bent 8 simboliu ilgumo." << endl;
        cin >> password;

            if(password.length() < 8)
                cout << "Slaptazodis per trumpas." << endl;
    } while (password.length() < 8);

    cout << "Slaptazodis yra priimtas." << endl;

    return 0;
}
