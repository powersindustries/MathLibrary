#pragma once

#define MATRIX_2X2_SIZE 4
#define MATRIX_3X3_SIZE 9


class Matrix2X2
{
public:
    Matrix2X2();
    Matrix2X2(bool shouldBeIdentity);

    void Print();

    float* GetMatrix() { return m_Matrix; }

private:
    float m_Matrix[MATRIX_2X2_SIZE];
};


class Matrix3X3
{
public:
    Matrix3X3();
    Matrix3X3(bool shouldBeIdentiy);

    void Print();

    float* GetMatrix() { return m_Matrix; }

private:
    float m_Matrix[MATRIX_3X3_SIZE];
};


class MatrixMethods
{
public:

    static Matrix2X2 Add(Matrix2X2& matrix1, Matrix2X2& matrix2);
    static Matrix3X3 Add(Matrix3X3& matrix1, Matrix3X3& matrix2);
    
    static Matrix2X2 Subract(Matrix2X2& matrix1, Matrix2X2& matrix2);
    static Matrix3X3 Subract(Matrix3X3& matrix1, Matrix3X3& matrix2);
    
    static Matrix2X2 Multiply(Matrix2X2& matrix1, Matrix2X2& matrix2);
    static Matrix3X3 Multiply(Matrix3X3& matrix1, Matrix3X3& matrix2);
    
    static Matrix2X2 Divide(Matrix2X2& matrix1, Matrix2X2& matrix2);
    static Matrix3X3 Divide(Matrix3X3& matrix1, Matrix3X3& matrix2);

    static Matrix2X2 ScalarMultiply(Matrix2X2& matrix, float scalar);
    static Matrix3X3 ScalarMultiply(Matrix3X3& matrix, float scalar);
    
    static Matrix2X2 ScalarDivide(Matrix2X2& matrix, float scalar);
    static Matrix3X3 ScalarDivide(Matrix3X3& matrix, float scalar);

    static float GetDeterminant(Matrix2X2& matrix);
    static float GetDeterminant(Matrix3X3& matrix);

    static Matrix2X2 GetInverseMatrix(Matrix2X2& matrix);
    static Matrix3X3 GetInverseMatrix(Matrix3X3& matrix);

};
