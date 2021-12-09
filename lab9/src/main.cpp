#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include "../include/Playlist.h"

using namespace std;

int main() {
    /*
    //zadanie 1
    vector<char> str = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<char>::iterator it;

    for(it = str.begin(); it != str.end(); it++) {
        *it = toupper(*it);
        cout << *it << " ";
    }
     return 0;
    */
    Playlist playlist;
    string artist, song;
    string action;

    while(1) {
        cout << "Wpisz:\n- add, aby dodac piosenke do kolejki\n- delete, aby usunac dowolna piosenke\n- show, aby wyswietlic kolejke odtwarzania\n"
                "- play, aby odtwarzac\n- end, aby zakonczyc program\n\n";
        cin >> action;

        if(action.compare("add") == 0) {
            cout << "\nPodaj artyste i nazwe piosenki:" << endl;

            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, artist);
            getline(cin, song);

            playlist.addSong(artist, song);

        }
        else if(action.compare("delete") == 0) {
            int songNumber;

            cout << "\nPodaj numer piosenki, ktora chcesz usunac:" << endl;
            cin >> songNumber;

            playlist.deleteSong(songNumber);

        }
        else if(action.compare("show") == 0) {

            cout << "\nPlaylista:" << endl;
            playlist.showPlaylist();

        }
        else if(action.compare("play") == 0) {

            playlist.play();

        }
        else if(action.compare("end") == 0) {
            return 0;
        }
    }
}