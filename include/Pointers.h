#ifndef LAB11_POINTERS_H
#define LAB11_POINTERS_H

template<typename wskTyp>
class UniqWsk {
private:
    wskTyp *uniqWsk;
public:
    UniqWsk(wskTyp zmienna) {
        uniqWsk = zmienna;
    };

    wskTyp getWsk() {
        return uniqWsk;
    }

};

#endif //LAB11_POINTERS_H
