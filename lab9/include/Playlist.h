#ifndef LAB9_PLAYLIST_H
#define LAB9_PLAYLIST_H

#include <iostream>
#include <vector>

using namespace std;

class Playlist {

private:
    vector<pair<string, string>> playlist;

public:
    void addSong(string artistName, string songName);

    void deleteSong(int songPosition);

    void showPlaylist();

    void play();
};

#endif //LAB9_PLAYLIST_H
