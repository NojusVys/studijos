//Uždavinys 1: Studentų pažymių lentelė (dvimatis masyvas)
#include <iostream>

using namespace std;

int main() {
    int N, M;
    cout << "Iveskite kiek bus studentu: ";
    cin >> N;
    cout << "Iveskite kiek dalyku: ";
    cin >> M;
    int arr[N][M];
    double bendrasVidurkis = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Studentas " << i+1 << ", dalykas " << j+1 << ": " << endl;
            cin >> arr[i][j];
            bendrasVidurkis += arr[i][j];
        }
    }

    double studentoVidurkis[N];
    for(int i = 0; i < N; i++){
        studentoVidurkis[i] = 0;
    }
    cout << "<----Rezultatu lentele---->\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            studentoVidurkis[i] += arr[i][j];
        }
        studentoVidurkis[i] = static_cast<double>(studentoVidurkis[i]) / M;
        cout << "Studento " << i+1 << " visu dalyku vidurkis: " << studentoVidurkis[i] << endl;
    }

    double dalykoVidurkis[M];
    for(int i = 0; i < M; i++){
        dalykoVidurkis[i] = 0;
    }
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            dalykoVidurkis[j] += arr[i][j];
        }
        dalykoVidurkis[j] = static_cast<double>(dalykoVidurkis[j]) / N;
        cout << "Dalyko " << j+1 << " visu studentu vidurkis: " << dalykoVidurkis[j] << endl;
    }

    bendrasVidurkis = static_cast<double>(bendrasVidurkis) / (N * M);
    cout << "Bendras visu studentu ir visu dalyku vidurkis: " << bendrasVidurkis << endl;
    return 0;
}
