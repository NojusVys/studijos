#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Iveskite teigiama skaiciu" << endl;
    cin >> num;

    while(num <= 0){
        cout << "Klaida! Skaicius turi buti teigiamas." << endl;
        cin >> num;
    }

    cout << "Ivestas skaicius yra lygus: " << num << endl;

    return 0;
}
