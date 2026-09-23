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
    // string password;

    // do{
    //     cout << "Sukurkite slaptazodi bent 8 simboliu ilgumo." << endl;
    //     cin >> password;

    //         if(password.length() < 8)
    //             cout << "Slaptazodis per trumpas." << endl;
    // } while (password.length() < 8);

    // cout << "Slaptazodis yra priimtas." << endl;
    // PVZ.: 4. Saskaitos valdymo meniu.

    int balance = 300;
    int choice;

    do{
        cout << "\n--- SASKAITOS MENIU ---\n";
        cout << "1. Perziureti balansa\n";
        cout << "2. Papildyti balansa\n";
        cout << "3. Atlikti mokejima\n";
        cout << "0. Baigti programa.\n";
        cout << "Iveskite pasirinkima\n";
        cin >> choice;

        switch(choice){
            case 1:
                cout  << "Balansas: " << balance << " EUR\n";
                break;
            case 2: {
                int amount;
                cout << "Iveskite papildymo suma: ";;
                cin >> amount;
                while(amount < 0){
                    cout << "Neteisinga suma. Iveskite dar karta.\n";
                    cin >> amount;
                }
                balance += amount;
                cout << "Balansas papildytas.\n";
            }
                break;
            case 3: {
                int amount;
                cout << "Iveskite mokejimo suma.\n";
                cin >> amount;
                while(amount <= 0 || amount > balance){
                    cout << "Neteisinga suma. Iveskite dar karta.\n";
                    cin >> amount;
                }
                balance -= amount;
                cout << "Mokejimas atlikitas sekmingai. \n";
            }
                break;
            case 0:
                cout << "Programa baigiama.\n";
                break;
            default:
                cout << "Pasirinkimas negalimas.\n";
        }
    } while(choice != 0);

    return 0;
}
