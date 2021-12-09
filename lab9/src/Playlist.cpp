#include "../include/Playlist.h"

void Playlist::addSong(string artistName, string songName) {
    pair<string,string> song(artistName, songName);
    playlist.push_back(song);
}

void Playlist::deleteSong(int songPosition) {
    playlist.erase(playlist.begin()+songPosition);
}

int checkIfEmpty(int playlistSize) {
    if(playlistSize == 0) {
        cout << "\nPlaylista jest pusta!\n\n";
        return 0;
    }
    return 1;
}

void Playlist::showPlaylist() {
    int i=0;

    if(checkIfEmpty(playlist.size()) == 0)
        return;

    for (auto &song: playlist) {
        cout << i << ". " << song.first << " - " << song.second << endl;
        i++;
    }
}

void Playlist::play() {
    vector<pair<string,string>>::iterator currentSong = playlist.begin();
    vector<pair<string,string>>::iterator pSong = playlist.end();

    for(currentSong; currentSong != playlist.end(); currentSong++) {
        auto nextSong = next(currentSong,1);
        auto prevSong = prev(pSong,1);

        if(currentSong == playlist.begin()) {
            cout << "\n--------------------------------------\n";
            cout << "Poprzednie w kolejce: " << prevSong->first << " - " << prevSong->second << endl;
            cout << "Aktualnie grane: " << currentSong->first << " - " << currentSong->second << endl;
            cout << "Nastepne w kolejce: " << nextSong->first << " - " << nextSong->second << endl;
            cout << "\n--------------------------------------\n";
        }
        else if(currentSong == playlist.end()-1) {
            char action;
            prevSong = prev(currentSong,1);

            cout << "\n--------------------------------------\n";
            cout << "Poprzednie w kolejce: " << prevSong->first << " - " << prevSong->second << endl;
            cout << "Aktualnie grane: " << currentSong->first << " - " << currentSong->second << endl;
            cout << "Nastepne w kolejce: " << playlist.begin()->first << " - " << playlist.begin()->second << endl;
            cout << "\n--------------------------------------\n";
            currentSong = playlist.begin();

            cout << "Czy chcesz odtworzyc kolejke ponownie? t/n\n";
            cin >> action;

            if(action == 'n') {
                return;
            }
        }
        else {
            prevSong = prev(currentSong,1);

            cout << "\n--------------------------------------\n";
            cout << "Poprzednie w kolejce: " << prevSong->first << " - " << prevSong->second << endl;
            cout << "Aktualnie grane: " << currentSong->first << " - " << currentSong->second << endl;
            cout << "Nastepne w kolejce: " << nextSong->first << " - " << nextSong->second << endl;
            cout << "\n--------------------------------------\n";
        }
    }
}