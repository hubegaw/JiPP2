#ifndef LAB10_FILE_H
#define LAB10_FILE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Stops.h"
#include "myExceptions.h"

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
            throw MyException();
        }
    }

    void exportPlan() {
        std::ofstream Buses("Buses.csv", std::ios::out);
        std::ofstream Trams("Trams.csv", std::ios::out);

        if(Buses.is_open() && Trams.is_open()) {
            /*for(auto &stop : stops) {
                if(stoi(stop.getLineNumber()) > 99) {
                    Buses << stop.getLineNumber() << "," << stop.getStartName() << "," << stop.getStopName()
                     << "," << stop.getCarrier() << "\n";
                } else {
                    Trams << stop.getLineNumber() << "," << stop.getStartName() << "," << stop.getStopName()
                          << "," << stop.getCarrier() << "\n";
               }
        }*/
        } else {
            throw MyException();
        }
    }

    void import() {
        int counter = 0;
        std::string line;

        while (!myFile.eof()) {
            Stops newStop;
            for (int i = 0; i < 4; i++) {
                getline(myFile, line, ',');

                switch (counter) {
                    case 0:
                        newStop.setLineNumber(line);
                        counter++;
                        break;
                    case 1:
                        newStop.setStartName(line);
                        counter++;
                        break;
                    case 2:
                        newStop.setStopName(line);
                        counter++;
                        break;
                    case 3:
                        newStop.setCarrier(line);
                        counter++;
                        break;
                    default:
                        return;
                }
            }
            stops.push_back(newStop);
            counter = 0;
        }
        myFile.close();
    }
};

#endif //LAB10_FILE_H
