#ifndef LAB10_MYEXCEPTIONS_H
#define LAB10_MYEXCEPTIONS_H

#include <exception>

class MyException : public std::exception {
public:
    MyException() {};

    const char* what() const noexcept {
        return "Blad otwarcia pliku!\n";
    }
};

#endif //LAB10_MYEXCEPTIONS_H
