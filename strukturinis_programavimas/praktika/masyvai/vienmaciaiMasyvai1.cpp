//Praktinės paskaitos uždaviniai: Vienmačiai masyvai 1
#include <iostream>

using namespace std;

int main() {
    const int DYDIS = 5;
    int arr[DYDIS];

    for (int i = 0; i < DYDIS; i++) {
        cout << "Iveskite " << i+1 << " skaiciu: ";
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for (int i = 0; i < DYDIS; i ++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        sum += arr[i];
    }

    cout << "Visu elementu suma: " << sum << endl;
    cout << "Didziausias elementas: " << max << endl;
    cout << "Maziausias elementas: " << min << endl;

    return 0;
}
