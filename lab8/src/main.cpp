#include <iostream>
#include <string>
#include "../include/note.h"

int main() {
    int sizeOfNotebook = 0;
    int newNotePosition = 0;
    string title;
    string content;
    string action;
    //Note *notebook = new TextNote[newNoteposition];

    cout << "Witaj w notatniku!\n" << endl;

    while(1) {
        cout << "Co chcesz zrobic?" << endl;
        cout << "add - utworz nowa notatke.\nshow - pokaz notatki\nend - zakoncz program\n" << endl;

        cin.clear();
        cin >> action;

        if (action.compare("add") == 0) {
           Note *newNote = new TextNote();
            sizeOfNotebook += 1;

            cout << "\n----------------------------------------------------------------------\n";
            cout << "Tytul:";
            cin >> title;
            newNote->setTitle(title);

            cout << "Notatka:\n";
            cin.clear();
            cin >> content;
            newNote->addContent(content);
            cout << "\n----------------------------------------------------------------------\n";

        } else if(action.compare("show") == 0) {
            int whichNote = 0;

            cout << "Twoje notatki:" << endl;

            if(sizeOfNotebook == 0) {
                cout << "\nNotatnik jest pusty.\n";
            }
            else {
                for (int i = 0; i < sizeOfNotebook; i++) {
                    cout << "--------------------------------------------\n";

                    //cout << notebook[i].getTitle() << endl;
                    //cout << notebook[i].getContent() << endl;
                }
            }
                cout << "Co chcesz teraz zrobic?" << endl;
                cout << "delete - usun notatke\nedit - edytuj notatke\n" << endl;
                cin >> action;


            if(action.compare("delete") == 0) {

                cout << "wpisz numer notatki do usuniecia:";
                cin >> whichNote;

                for(int i = whichNote-1; i < sizeOfNotebook; i++) {
                    if(i+1 == sizeOfNotebook)
                        break;
                    else {
                        //notebook[i] = notebook[i + 1];
                    }
                }
                sizeOfNotebook -= 1;
            }
            else if(action.compare("edit") == 0) {
                char editWhat;

                cout << "Wpisz:\n't' jesli chcesz edytowac tytul\n'c' jesli chcesz edytowac zawartosc" << endl;
                cin >> editWhat;

                if(editWhat == 't') {
                    cout << "\nEdytuj tytul";
                    getline(cin,title);
                    //notebook[whichNote-1].setTitle(title);
                }
                else if(editWhat == 'c') {
                    cout << "\nEdytuj zawartosc";
                    getline(cin, content);
                    //notebook[whichNote-1].addContent(content);
                }
            }
        }
        else if(action.compare("end") == 0) {
            //delete[] notebook;
            return 0;
        }
    }
}
