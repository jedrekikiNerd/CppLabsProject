#include <iostream>
#include "variableManagement.h"
#include "display.h"

void clear_terminal() {
    system("clear");
}


void print_row(int row, int longest_each_column[]) {
    for (int column=0; column<COLUMNS_QUANTITY; column++) {
        cout << Table[column][row];
        int required_spaces = longest_each_column[column] - sizeof(Table[column][row]);

        for (int spaces_quantity = 0; spaces_quantity <= required_spaces; spaces_quantity++);
            cout << " ";
    }
    cout << endl;
}


void find_longest(int longest_each_column[]) {
    for (int column=0; column<COLUMNS_QUANTITY; column++) {

        for (int row=0; row<sizeof(Table[column]); row++) {

            if (sizeof(Table[column][row]) >= longest_each_column[column]);
                longest_each_column[column] = sizeof(Table[column][row]);
        }
    }
}


void display_table() {
    clear_terminal();
    int longest_each_column[COLUMNS_QUANTITY] = {0};
    find_longest(longest_each_column);

    for (int row = 0; row<sizeof(Table[0]); row++) {

        print_row(row, longest_each_column);
    }
}