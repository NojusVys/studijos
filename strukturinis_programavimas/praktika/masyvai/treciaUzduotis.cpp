#include <iostream>
#include <string>

using namespace std;

int main() {
    string sakinys;
    cout << "Iveskite sakini: ";
    getline(cin , sakinys);

    int aKiekis = 0;
    int tarpuKiekis = 0;
    int zodziuKiekis = 0;
    bool zodyje = false;

    for (size_t i = 0; i < sakinys.size(); i++) {
        char simbolis = sakinys[i];

        if (simbolis == 'a' || simbolis == 'A') aKiekis++;
        if (simbolis == ' ') {
            tarpuKiekis++;
            zodyje = false;
        } else if (!zodyje) {
            zodziuKiekis++;
            zodyje = true;
        }
    }

    cout << "Raidziu a ir A: " << aKiekis << endl;
    cout << "Tarpu kiekis: " << tarpuKiekis << endl;
    cout << "Zodziu kiekis: " << zodziuKiekis << endl;

    return 0;
}
