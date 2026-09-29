#include <iostream>

using namespace std;

int main() {
    const int STUDENTAI = 3;
    const int ATSISKAITYMAI = 4;
    int balai[STUDENTAI][ATSISKAITYMAI];

    for (int i = 0; i < STUDENTAI; i++) {
        for (int j = 0; j < ATSISKAITYMAI; j++) {
            cout << "Studentas " << i+1 << ", atsiskaitymas " << j+1 << ": " << endl;
            cin >> balai[i][j];
        }
    }

    int didziausias = balai[0][0];
    int studentoNumeris = 0;
    int atsiskaitymoNumeris = 0;

    cout << "Balu lentele: " << endl;
    for (int i = 0; i < STUDENTAI; i++) {
        int studentoSuma = 0;
        for (int j = 0; j < ATSISKAITYMAI; j++) {
            cout << balai[i][j] << " ";
            studentoSuma += balai[i][j];
            if (balai[i][j] > didziausias) {
                didziausias = balai[i][j];
                studentoNumeris = i;
                atsiskaitymoNumeris = j;
            }
        }
        cout << "Suma: " << studentoSuma << endl;
    }

    cout << "Didziausias balas: " << didziausias << endl;
    cout << "Ji gavo " << studentoNumeris + 1 << " studentas, " << atsiskaitymoNumeris + 1 << " atsiskaityme." << endl;

    return 0;
}
