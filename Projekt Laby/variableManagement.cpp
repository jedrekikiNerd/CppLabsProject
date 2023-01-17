#include "variableManagement.h"

using namespace std;

const int COLUMNS_QUANTITY = 5;

string **Table = new string * [COLUMNS_QUANTITY];
string NewRecord[COLUMNS_QUANTITY];

//Nowa tabela - tworzenie
void new_table(int lines, int columns) {

    for (int i = 0; i<columns; i++)
        Table[i] = new string [lines];

}

//Zwalnianie pamięci (czyszczenie kolumn przed ich powiększeniem)
void delete_table() {

    for (int i = 0; i<COLUMNS_QUANTITY; i++)
        delete[] Table[i];
}

//Kopia tabeli
void add_record() {

    int lines = sizeof(Table[0]);
    string **CopyTable = new string * [COLUMNS_QUANTITY];

    for (int i = 0; i<COLUMNS_QUANTITY; i++) {

        CopyTable[i] = new string [lines+1];
        for (int j = 0; j<lines; j++)
            CopyTable[i][j] = Table[i][j];
        CopyTable[i][lines] = NewRecord[i];
    }

    delete_table();
    lines = sizeof(CopyTable[0]);

    for (int i = 0; i<COLUMNS_QUANTITY; i++) {

        Table[i] = new string [lines+1];
        for (int j = 0; j<sizeof(CopyTable); j++)
            Table[i][j] = CopyTable[i][j];
    }

    for (int i = 0; i<COLUMNS_QUANTITY; i++)
        delete[] CopyTable[i];
    delete CopyTable;

}