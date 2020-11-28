#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <iostream>
#include <vector>

using namespace std;
template<typename T, size_t rows, size_t cols>
class Matrix {
// private:
    // vector<vector<T>> elts_;

public:
    vector<vector<T>> elts_;
    Matrix(const T & values = T()) {
        elts_.resize(rows);
        for(size_t i = 0; i < rows; i++) {
            elts_[i].resize[i].resize(cols, values);
        }
        std::cout << elts_;
    }
// public:
    /*
    Matrix(const T & values = T()) {
        elts_.resize(rows);
        for (size_t i = 0; i < rows; i++){
            elts_[i].resize(cols, values);
        }
        return values;
    }
    // friend ostream& operator<<(ostream& os, const T);
};
     */
    /*
    Matrix(){
        for(size_t i = 0;i < rows;i++){
            elts_.push_back(std::vector<T>());
            for(size_t j = 0; j < cols;j++){
                elts_[i].push_back(0);
                std::cout << elts_[i][j] << " ";

            }
            std::cout << std::endl;
        }

    }

};
*/
    /*
     * It should be much like the constructor from MatrixOfDouble:

MatrixOfDouble(size_t numRows, size_t numCols, double value) {
    elts_.resize(numRows);
    for (size_t i = 0; i < numRows; i++)
        elts_[i].resize(numCols, value);
}

The main difference is that numRows and numCols are not provided as typical parameters.
     I.e. they are not listed inside the parentheses.
     Instead, the number of rows and columns are passed as template parameters to the class:

template<typename T, size_t rows, size_t cols>
class Matrix {

So every time that you need to access the number of rows, use the template parameter ‘rows’.
     Similarly, use ‘cols’ when you need the number of columns.

Otherwise, the body of the Matrix class template constructor is line-for-line the same as
     the MatrixOfDouble constructor.


     */
#endif //MATRIX_MATRIX_H


/*
 * MatrixOfDouble(size_t numRows, size_t numCols, double value) {
    elts_.resize(numRows);
    for (size_t i = 0; i < numRows; i++)
        elts_[i].resize(numCols, value);
}
 */


/*
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
*/
//MATRIX_MATRIX_H
};