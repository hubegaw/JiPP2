#ifndef UNTITLED_PLANEREXCEPTIONS_H
#define UNTITLED_PLANEREXCEPTIONS_H

#include <exception>

class NegativeNumber : public std::exception {
private:
    int negNumb;
public:
    /**
     * constructor for NegativeNumber exception class
     * @param negNumb - number from a file
     */
    NegativeNumber(int negNumb): negNumb(negNumb) {}

    /**
     * function returns caught wrong number
     * @return returns a number from
     */
    int negativeNumber() {
        return negNumb;
    }
};

class FileError : public std::exception {
private:
    std::string fileOpenError;
public:
    FileError(std::string fileOpenError): fileOpenError(fileOpenError) {}

    std::string fileError() {
        return fileOpenError;
    }
};


#endif //UNTITLED_PLANEREXCEPTIONS_H
