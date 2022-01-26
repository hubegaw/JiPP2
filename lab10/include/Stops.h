#ifndef LAB10_STOPS_H
#define LAB10_STOPS_H

class Stops {
protected:
    std::string lineNumber;
    std::string startName;
    std::string stopName;
    std::string carrier;
public:
    Stops() {
        lineNumber = "";
        startName = "";
        stopName = "";
        carrier = "";
    }

    void setLineNumber(std::string newLineNumber) {
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

    std::string getLineNumber() {
        return lineNumber;
    }

    std::string getStartName() {
        return startName;
    }

    std::string getStopName() {
        return stopName;
    }

    std::string getCarrier() {
        return carrier;
    }
};

#endif //LAB10_STOPS_H
