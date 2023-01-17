#include <iostream>
#include <fstream>
#include <string>
#include "variableManagement.h"
#include "file_handle.h"

using namespace std;

string readfile(string path) {
    fstream file;
    string line;
    file.open(path);
    if ( !file.good() ) {
        return "ERROR: Nie udało się wczytać pliku!";
    }
    int row = 0;
    while ( !file.eof() ) {
        for (int column = 0; column < COLUMNS_QUANTITY; column++)
            file >> NewRecord[column];
        add_record();

    }
    file.close();
    return "Plik wczytano pomyślnie!";
}

string writefile(string path){
    fstream file;
    string line;
    file.open(path);
    if ( !file.good() ) {
        return "ERROR: Nie udało się otworzyć pliku!";
    }


    for ( int column = 0; column < COLUMNS_QUANTITY; column++ ) {
        for ( int row=0; row < sizeof(Table[0]); row++ ) {
            //wpisz do pliku
        }
        
    }
    return "Plik zapisano pomyślnie!";
}