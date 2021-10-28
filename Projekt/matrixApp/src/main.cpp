#include "../include/appService.h"

int main(int argc, char *argv[]) {

    const char *choice = argv[1];
    const char *matrixType = argv[2];

    try {
        chooseAction(choice, argc, matrixType);
    }
    catch(invalid_argument&e) {
        cerr << e.what() << endl;
        return -1;
    }

    int rowCountA=0, columnCountA=0, rowCountB=0, columnCountB=0;
    int *rowCountA_ptr = &rowCountA, *columnCountA_ptr = &columnCountA, *rowCountB_ptr = &rowCountB, *columnCountB_ptr = &columnCountB;

    if(strcmp(choice, "help") == 0) {
        startInstructions();
        help();
    }else {

        try {
            cout << "\nMacierz A:\n";
            setMatrixSize(rowCountA_ptr, columnCountA_ptr);
        }
        catch (invalid_argument &e) {
            cerr << e.what() << endl;
            return -1;
        }
        Matrix matrixA(matrixType, rowCountA, columnCountA);

        if (strcmp(choice, "addMatrix") == 0) {

            try {
                cout << "\nMacierz B:\n";
                setMatrixSize(rowCountB_ptr, columnCountB_ptr);
            }
            catch (invalid_argument &e) {
                cerr << e.what() << endl;
                return -1;
            }

            Matrix matrixB(matrixType, rowCountB, columnCountB);
            Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixB, matrixType);

                cout << "\nWynik dodawania:\n";
                matrix.intMatrix = addMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.rowCount, matrix.columnCount);
                matrix.showMatrix(matrixType);
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixB, matrixType);

                cout << "\nWynik dodawania:\n";
                matrix.doubleMatrix = addMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrix.rowCount,
                                                matrix.columnCount);
                matrix.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "subtractMatrix") == 0) {

            try {
                cout << "\nMacierz B:\n";
                setMatrixSize(rowCountB_ptr, columnCountB_ptr);
            }
            catch (invalid_argument &e) {
                cerr << e.what() << endl;
                return -1;
            }

            Matrix matrixB(matrixType, rowCountB, columnCountB);
            Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixB, matrixType);

                cout << "\nWynik odejmowania:\n";
                matrix.intMatrix = subtractMatrix(matrixA.intMatrix, matrixB.intMatrix, matrix.rowCount,
                                                  matrix.columnCount);
                matrix.showMatrix(matrixType);
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixB, matrixType);

                cout << "\nWynik odejmowania:\n";
                matrix.doubleMatrix = subtractMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrix.rowCount,
                                                     matrix.columnCount);
                matrix.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "multiplyMatrix") == 0) {

            try {
                cout << "\nMacierz B:\n";
                setMatrixSize(rowCountB_ptr, columnCountB_ptr);
            }
            catch (invalid_argument &e) {
                cerr << e.what() << endl;
                return -1;
            }

            Matrix matrixB(matrixType, rowCountB, columnCountB);
            Matrix matrix(matrixType, matrixB.rowCount, matrixA.columnCount);

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixB, matrixType);

                cout << "\nWynik mnozenia:\n";
                matrix.intMatrix = multiplyMatrix(matrixA.intMatrix, matrixB.intMatrix, matrixA.rowCount,
                                                  matrixA.columnCount, matrixB.columnCount);
                matrix.showMatrix(matrixType);
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixB, matrixType);

                cout << "\nWynik mnozenia:\n";
                matrix.doubleMatrix = multiplyMatrix(matrixA.doubleMatrix, matrixB.doubleMatrix, matrixA.rowCount,
                                                     matrixA.columnCount, matrixB.columnCount);
                matrix.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "multiplyByScalar") == 0) {

            cout << "Skalar:";
            matrixA.setScalar(matrixType);

            Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWynik mnozenia przez skalar:\n";
                matrix.intMatrix = multiplyByScalar(matrixA.intMatrix, matrixA.rowCount,
                                                    matrixA.columnCount, matrixA.intScalar);
                matrix.showMatrix(matrixType);
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWynik mnozenia przez skalar:\n";
                matrix.doubleMatrix = multiplyByScalar(matrixA.doubleMatrix, matrixA.rowCount,
                                                       matrixA.columnCount, matrixA.doubleScalar);
                matrix.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "transpozeMatrix") == 0) {

            Matrix matrix(matrixType, matrixA.columnCount, matrixA.rowCount);

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWynik transponowania macierzy:\n";
                matrix.intMatrix = transpozeMatrix(matrixA.intMatrix, matrix.columnCount, matrix.rowCount);
                matrix.showMatrix(matrixType);
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWynik transponowania macierzy:\n";
                matrix.doubleMatrix = transpozeMatrix(matrixA.doubleMatrix, matrix.columnCount, matrix.rowCount);
                matrix.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "powerMatrix") == 0) {

            matrixA.setPower();

            Matrix matrix(matrixType, matrixA.rowCount, matrixA.columnCount);

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWynik potegowania:\n";
                matrix.intMatrix = powerMatrix(matrixA.intMatrix, matrix.rowCount, matrix.columnCount, matrixA.power);
                matrix.showMatrix(matrixType);

            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWynik potegowania:\n";
                matrix.doubleMatrix = powerMatrix(matrixA.doubleMatrix, matrix.rowCount, matrix.columnCount,
                                                  matrixA.power);
                matrix.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "determinantMatrix") == 0) {

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWyznacznik macierzy: "
                     << determinantMatrix(matrixA.intMatrix, matrixA.rowCount, matrixA.columnCount);
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nWyznacznik macierzy: "
                     << determinantMatrix(matrixA.doubleMatrix, matrixA.rowCount, matrixA.columnCount);
            }
        } else if (strcmp(choice, "matrixIsDiagonal") == 0) {

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nMacierz A:\n";
                matrixA.showMatrix(matrixType);

                cout << "\nCzy macierz jest diagonalna?:";
                if (!matrixIsDiagonal(matrixA.intMatrix, matrixA.rowCount, matrixA.columnCount)) cout << " falsz\n";
                else cout << " prawda\n";
            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nMacierz A:\n";
                matrixA.showMatrix(matrixType);

                cout << "\nCzy macierz jest diagonalna?:";

                if (!matrixIsDiagonal(matrixA.doubleMatrix, matrixA.rowCount, matrixA.columnCount)) cout << " falsz\n";
                else cout << " prawda\n";
            }
        } else if (strcmp(choice, "swap") == 0) {

            int a1, b1, a2, b2;
            int *a1_ptr = &a1, *a2_ptr = &a2, *b1_ptr = &b1, *b2_ptr = &b2;

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);
                try {
                    CoordinatesToSwapNumbers(a1_ptr, a2_ptr, b1_ptr, b2_ptr);
                }
                catch (invalid_argument &e) {
                    cerr << e.what() << endl;
                    return -1;
                }

                int *numberToSwap1 = &matrixA.intMatrix[a1][b1], *numberToSwap2 = &matrixA.intMatrix[a2][b2];

                cout << "\nMacierz A po zamianie liczb miejscami:\n";
                swap(numberToSwap1, numberToSwap2);
                matrixA.showMatrix(matrixType);
            } else if (strcmp(matrixType, "double") == 0) {

                double *numberToSwap1 = &matrixA.doubleMatrix[a1][b1], *numberToSwap2 = &matrixA.doubleMatrix[a2][b2];

                fillAndDisplay(matrixA, matrixType);
                try {
                    CoordinatesToSwapNumbers(a1_ptr, a2_ptr, b1_ptr, b2_ptr);
                }
                catch (invalid_argument &e) {
                    cerr << e.what() << endl;
                    return -1;
                }

                cout << "\nMacierz A po zamianie liczb miejscami:\n";
                swap(numberToSwap1, numberToSwap2);
                matrixA.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "sortRow") == 0) {

            int chooseRow = 0;

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                try {
                    chooseRow = chooseRowToSort(chooseRow);
                }
                catch (invalid_argument &e) {
                    cerr << e.what() << endl;
                    return -1;
                }

                cout << "\nTablica posortowana:\n";
                sortRow(matrixA.intMatrix[chooseRow], matrixA.columnCount);
                matrixA.showMatrix(matrixType);

            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                try {
                    chooseRow = chooseRowToSort(chooseRow);
                }
                catch (invalid_argument &e) {
                    cerr << e.what() << endl;
                    return -1;
                }

                cout << "\nTablica posortowana:\n";
                sortRow(matrixA.doubleMatrix[chooseRow], matrixA.columnCount);
                matrixA.showMatrix(matrixType);
            }
        } else if (strcmp(choice, "sortRowsInMatrix") == 0) {

            if (strcmp(matrixType, "int") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nPosortowane wiersze w macierzy:\n";
                sortRowsInMatrix(matrixA.intMatrix, matrixA.rowCount, matrixA.columnCount);
                matrixA.showMatrix(matrixType);

            } else if (strcmp(matrixType, "double") == 0) {

                fillAndDisplay(matrixA, matrixType);

                cout << "\nPosortowane wiersze w macierzy:\n";
                sortRowsInMatrix(matrixA.doubleMatrix, matrixA.rowCount, matrixA.columnCount);
                matrixA.showMatrix(matrixType);

            }
        }
    }

return 0;
}