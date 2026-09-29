#include <iostream>

using namespace std;

int main(){
    const int DIENU_KIEKIS = 7;
    double temperaturos[DIENU_KIEKIS];
    double suma = 0;

    for(int i = 0; i < DIENU_KIEKIS; i++){
        cout << "Iveskite " << i+1 << " dienos temperatura: ";
        cin >> temperaturos[i];
        suma += temperaturos[i];
    }

    double vidurkis = suma / DIENU_KIEKIS;
    double maziausia = temperaturos[0];
    double didziausia = temperaturos[0];
    int zemiauVidurkio = 0;

    for(int i = 0; i < DIENU_KIEKIS; i++){
        if (temperaturos[i] < maziausia)
            maziausia = temperaturos[i];
        if (temperaturos[i] > didziausia)
            didziausia = temperaturos[i];
        if (temperaturos[i] < vidurkis) zemiauVidurkio++;
    }

    cout << "Vidurkis: " << vidurkis << endl;
    cout << "Maziausia: " << maziausia << endl;
    cout << "Didziausia: " << didziausia << endl;
    cout << "Dienu zemiau vidurkio: " << zemiauVidurkio << endl;

    return 0;
}
