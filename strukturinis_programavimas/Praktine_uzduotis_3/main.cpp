#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("uzsakymas.txt");
    ofstream fout("rezultatai.txt");

    if(!fin.is_open()) {
        cout << "Nepavyko atidaryti duomenu failo." << endl;
        return 1;
    }

    if(!fout.is_open()) {
        cout << "Nepavyko atidaryti rezultatu failo." << endl;
        return 1;
    }


    fin.close();
    fout.close();
    return 0;
}
