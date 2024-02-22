#include<iostream>
using namespace std;

class SumMatrix {
private:
    int rows, cols;
    int matrix1[100][100]; // Assuming a maximum size for the matrices
    int matrix2[100][100];
    int sum[100][100];

public:
    void rowsCols() {
        cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> cols;
    }

    void matrixInput() {
        cout << "Enter elements of the first matrix:";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix1[i][j];
            }
        }

        cout << "Enter elements of the second matrix:";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix2[i][j];
            }
        }
    }

    void sumMatrices() {
        cout << "Sum of Matrices are:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    SumMatrix s;
    s.rowsCols();
    s.matrixInput();
    s.sumMatrices();
    return 0;
}
