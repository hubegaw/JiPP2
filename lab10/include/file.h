#ifndef LAB10_FILE_H
#define LAB10_FILE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Stops.h"

class File : public Stops {
private:
    std::string fileName;
    std::fstream myFile;

    std::vector<Stops> stops;
public:
    File() {
        fileName = "";
    }

    File(std::string fileName) {
        this->fileName = fileName;
    }

    void openFile() {
        myFile.open(fileName, std::ios::in);

        if(!myFile.is_open()) {
            std::cout << "Nie udalo sie otworzyc pliku!\n\n";
            return;
        }
    }

    void import() {
        while(!myFile.eof()) {

        }
    }

};

#endif //LAB10_FILE_H
