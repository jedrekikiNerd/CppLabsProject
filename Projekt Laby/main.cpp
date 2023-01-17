#include <iostream>
#include "file_handle.h"
#include "variableManagement.h"
#include "display.h"

using namespace std;

int init() {
    string file_name = "";
    cout << "Witaj w programie do sprawdzania obecności!\n";
    cout << "Podaj nazwę pliku z listą obecności z jakiego chcesz korzystać: ";
    cin >> file_name;
    cout << readfile(file_name);
    return 0;
}

int main(){
    init();

    while (true) {
        display_table();
        string komenda = "";
        cout << "\n\n\nWpisz komendę: ";
        cin >> komenda;

    }
}