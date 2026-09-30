//Praktinės paskaitos uždaviniai: Vienmačiai masyvai 1
#include <iostream>

using namespace std;

int main() {
    const int STUDENTU_KIEKIS = 40;
    const int MAZIAUSIAS = 1;
    const int DIDZIAUSIAS = 10;
    int ivertinimai[STUDENTU_KIEKIS];
    int daznis[DIDZIAUSIAS+1] = {0};

    for (int i = 0; i < STUDENTU_KIEKIS; i++) {
        int ivertinimas;
        do {
            cout << "Iveskite " << i+1 << " studento zaidimo ivertinima (1-10): ";
            cin >> ivertinimas;
        } while (ivertinimas < MAZIAUSIAS || ivertinimas > DIDZIAUSIAS);
        ivertinimai[i] = ivertinimas;
    }

    for (int i = 0; i < STUDENTU_KIEKIS; i++) {
        daznis[ivertinimai[i]]++;
    }

    cout << "Zaidimo ivertinimu daznis: " << endl;
    for (int ivertinimas = MAZIAUSIAS; ivertinimas <=DIDZIAUSIAS; ivertinimas++) {
        if (daznis[ivertinimas] > 0) {
            cout << ivertinimas << ": " << daznis[ivertinimas] << endl;
        }
    }

    return 0;
}
