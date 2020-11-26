#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <iostream>

using namespace std;

template<typename T, size_t rows, size_t cols>
class Matrix {
private:
    T values[rows][cols];

public:
    T Arr[rows][cols];
    Matrix(){
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols;j++){
                Arr[i][j] = 0;
                std::cout  << Arr[i][j] << " ";
            }
            std::cout << std::endl;
        }


    }

    Matrix(T a){
        //std::cout << getName();
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols;j++){
                Arr[i][j] = a;
                std::cout  << Arr[i][j] << " ";
            }
            std::cout << std::endl;
        }


    }

//    T[]& operator[](int index) {
//        return values[index];
//    }
//    const T[]& operator[](int index) const {
//        return values[index];
//    }

    Matrix<T,rows,cols> operator+(const Matrix<T,rows,cols> &rhs) const {
        Matrix<T,rows,cols> result;
        //TODO: implement +
        return result;
    }

    Matrix<T,rows,cols>& operator+=(const Matrix<T,rows,cols> &rhs) const {
        //TODO: implement +=
        return this;
    }

    template<size_t otherCols>
    Matrix<T,rows,otherCols> operator*(const Matrix<T,cols,otherCols> & other) const {
        Matrix<T,rows,otherCols> result;
        //TODO: compute result
        return result;
    }
};

template<typename T, size_t rows, size_t cols>
ostream & operator<<(ostream & out, const Matrix<T, rows, cols> & m) {
    //TODO: implement output operator
    return out;
}

#endif //MATRIX_MATRIX_H
