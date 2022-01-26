#ifndef LAB10_STOPS_H
#define LAB10_STOPS_H

class Stops {
private:
    int lineNumber;
    std::string startName;
    std::string stopName;
    std::string carrier;
public:
    Stops() {
        lineNumber = 0;
        startName = "";
        stopName = "";
        carrier = "";
    }

    void setLineNumber(int newLineNumber) {
        this->lineNumber = newLineNumber;
    }

    void setStartName(std::string newStartName) {
        this->startName = newStartName;
    }

    void setStopName(std::string newStopName) {
        this->stopName = newStopName;
    }

    void setCarrier(std::string newCarrier) {
        this->carrier = newCarrier;
    }
};

#endif //LAB10_STOPS_H
