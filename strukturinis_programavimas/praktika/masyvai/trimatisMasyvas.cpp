//Uždavinys 2: Temperatūros matavimai per kelias dienas (trimatis masyvas)
#include <iostream>

using namespace std;

int main() {
    const int MIESTU_KIEKIS = 3;
    const int DIENU_KIEKIS = 7;
    const int PAROS_LAIKAI = 4;
    double temperatura[MIESTU_KIEKIS][DIENU_KIEKIS][PAROS_LAIKAI];

    for (int i = 0; i < MIESTU_KIEKIS; i++) {
        for (int j = 0; j < DIENU_KIEKIS; j++) {
            for (int y = 0; y < PAROS_LAIKAI; y++) {
                cout << "Iveskite temperatura buvusia " << i+1 << " mieste, " << j+1 << " diena, " << y+1 << " paros metu." << endl;
                cin >> temperatura[i][j][y];
            }
        }
    }

    double miestuSavaitesVidurkis[3];
    for (int i = 0; i < MIESTU_KIEKIS; i++) {
        miestuSavaitesVidurkis[i] = 0;
    }

    double max = temperatura[0][0][0];
    int miestas = 1, diena = 1, laikas = 1;

    for (int i = 0; i < MIESTU_KIEKIS; i++) {
        for (int j = 0; j < DIENU_KIEKIS; j++) {
            for (int y = 0; y < PAROS_LAIKAI; y++) {
                miestuSavaitesVidurkis[i] += temperatura[i][j][y];
                if (temperatura[i][j][y] > max) {
                    max = temperatura[i][j][y];
                    miestas = i+1;
                    diena = j+1;
                    laikas = y+1;
                }
            }
        }
        miestuSavaitesVidurkis[i] /= (DIENU_KIEKIS * PAROS_LAIKAI);
        cout << i+1 << " miesto savaites vidurkis: " << miestuSavaitesVidurkis[i] << endl;
    }

    cout << "Silciausia diena buvo: " << miestas << " mieste, " << diena << " diena, " << laikas << " laiku. Temperatura buvo: "
        << max << endl;

    return 0;
}
