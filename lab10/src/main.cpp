#include <iostream>
#include "../include/szablony.h"
#include "../include/file.h"

using namespace std;

int main() {

    Vector<int> wektor{3};

    wektor.add_elem(1);
    wektor.add_elem(5);
    wektor.add_elem(7);

    wektor.print_elem();
    cout << "\n";

    wektor.delete_elem();
    cout << "wsk = " << wektor.get_wsk() << "\n";

    wektor.print_elem();
    cout << "\n";




    return 0;
}
