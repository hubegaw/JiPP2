#ifndef LAB10_SZABLONY_H
#define LAB10_SZABLONY_H

template<typename T>
T min(T a, T b) {
    if(a < b)
        return a;
    return b;
}

template<typename T>
T max(T a, T b) {
    if(a < b)
        return b;
    return a;
}

template<typename T>
T printArray(T *a, int size) {
    for(int i = 0; i < size; i++)
        std::cout << a[i] << ", ";
    std::cout << std::endl;
}

template<typename T>
T printMatrix(T **a, int columnCount, int rowCount) {
    for(int i = 0; i < columnCount; i++)
        for(int j = 0; j < rowCount; j++)
            std::cout << a[i][j] << " ";
    std::cout << std::endl;
}

template<typename type, typename size>
class Array {
private:
    type i=0;
    size Asize;
    type array = new type*[Asize];
public:
    type addToArray(type element) {
        if(i == Asize)
            return -1;
        array[i] = element;
        i++;
    }
};

template<typename type>
class Vector {
private:
    int size;
    int wsk=0;
    type *elements;
public:
    Vector() {
        size = 0;
    }

    Vector(int size) {
        this->size = size;
        elements = new type[size];
    }

    ~Vector() {
        delete elements;
    }

    void add_elem(type elem) {
        if(wsk == size) {
            elements = new type[wsk];
            size = wsk;
        }
        elements[wsk] = elem;
        wsk++;
    }

    void delete_elem() {
        wsk--;
        size--;
    }

    int get_wsk() {
        return wsk;
    }

    void print_elem() {
        for(int i = 0; i < size; i++) {
            std::cout << elements[i] << " ";
        }
    }
};


#endif //LAB10_SZABLONY_H
