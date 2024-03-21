#ifndef SRC_S21_MATRIX_H_
#define SRC_S21_MATRIX_H_

#include <algorithm>
#include <cmath>

using namespace std;

class S21Matrix {
 private:
  int rows_, cols_;
  double *matrix_;

 public:
  S21Matrix();
  S21Matrix(int rows, int cols);
  S21Matrix(const S21Matrix &other);
  S21Matrix(S21Matrix &&other) noexcept;
  ~S21Matrix();


  int getRows() const noexcept;
  int getCols() const noexcept;
  void setRows(const int &NewRows);
  void setCols(const int &NewCols);

  bool EqMatrix(const S21Matrix &other) const;
  void SumMatrix(const S21Matrix &other);
  void SubMatrix(const S21Matrix &other);
  void MulNumber(const double num);
  void MulMatrix(const S21Matrix &other);
  S21Matrix Transpose() const;
  double Determinant() const;
  S21Matrix CalcComplements() const;
  S21Matrix InverseMatrix() const;

  double *operator[](int row) const;
  double &operator()(int row, int col) const;

  S21Matrix &operator+=(const S21Matrix &other);
  S21Matrix operator+(const S21Matrix &other) const;

  S21Matrix &operator-=(const S21Matrix &other);
  S21Matrix operator-(const S21Matrix &other) const;

  S21Matrix &operator*=(const S21Matrix &other);
  S21Matrix &operator*=(const double &value);
  S21Matrix operator*(const S21Matrix &other) const;
  S21Matrix operator*(const double &value) const;

  bool operator==(const S21Matrix &other) const noexcept;

  S21Matrix &operator=(S21Matrix &&other) noexcept;
  S21Matrix &operator=(const S21Matrix &other);

  friend S21Matrix operator*(const double &value, const S21Matrix &matrix);
};

#endif  // SRC_S21_MATRIX_H_
