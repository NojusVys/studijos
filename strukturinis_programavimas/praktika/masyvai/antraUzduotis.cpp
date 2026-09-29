#include <iostream>

using namespace std;

int main(){
    const int STUDENTU_KIEKIS = 10;
    const int MAZIAUSIAS = 1;
    const int DIDZIAUSIAS = 10;
    int pazymiai[STUDENTU_KIEKIS];
    int dazniai[DIDZIAUSIAS+1] = {0};

    for (int i = 0; i < STUDENTU_KIEKIS; i++) {
        int pazymys;
        do {
            cout << "Iveskite " << i+1 << " studento pazymi (1-10): ";
            cin >> pazymys;
        } while (pazymys < MAZIAUSIAS || pazymys > DIDZIAUSIAS);
        pazymiai[i] = pazymys;
    }

    for (int i = 0; i < STUDENTU_KIEKIS; i++) {
        dazniai[pazymiai[i]]++;
    }

    cout << "Pazymiu dazniai: " << endl;
    for (int pazymys = MAZIAUSIAS; pazymys <=DIDZIAUSIAS; pazymys++) {
        if (dazniai[pazymys] > 0) {
            cout << pazymys << ": " << dazniai[pazymys] << endl;
        }
    }

    return 0;
}
