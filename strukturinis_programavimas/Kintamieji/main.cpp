#include <iostream>
#include <string>
#include <format>

using namespace std;

int main(){
    string vardas, pavarde, grupe, programa;
    int amzius, kursas;
    cout << "Iveskite studento varda, pavarde, amziu, grupe, kursa ir studiju progrma: \n";
    cin >> vardas >> pavarde >> amzius >> grupe >> kursas >> programa;
    cout << format("Vardas: {0}\nPavarde: {1}\nAmzius: {2}\nGrupe: {3}\nKursas: {4}\nPrograma: {5}\n", vardas, pavarde, amzius, grupe, kursas, programa);
    return 0;
}
