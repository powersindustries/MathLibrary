#include "Matrix.h"
#include <iostream>


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2::Matrix2X2()
{
    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        m_Matrix[0] = 0.0f;
    }
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2::Matrix2X2(bool shouldBeIdentity)
{
    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        m_Matrix[0] = 0.0f;
    }
    
    if (shouldBeIdentity)
    {
        m_Matrix[0] = 1;
        m_Matrix[3] = 1;
    }
}


// ------------------------------------------------------------
// ------------------------------------------------------------
void Matrix2X2::Print()
{
    std::cout << m_Matrix[0] << " " << m_Matrix[1] << std::endl;
    std::cout << m_Matrix[2] << " " << m_Matrix[3] << std::endl;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3::Matrix3X3()
{
    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        m_Matrix[0] = 0.0f;
    }
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3::Matrix3X3(bool shouldBeIdentiy)
{
    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        m_Matrix[0] = 0.0f;
    }
    
    if (shouldBeIdentiy)
    {
        m_Matrix[0] = 1;
        m_Matrix[4] = 1;
        m_Matrix[8] = 1;
    }
}


// ------------------------------------------------------------
// ------------------------------------------------------------
void Matrix3X3::Print()
{
    std::cout << m_Matrix[0] << " " << m_Matrix[1] << " " << m_Matrix[2] << std::endl;
    std::cout << m_Matrix[3] << " " << m_Matrix[4] << " " << m_Matrix[5] << std::endl;
    std::cout << m_Matrix[6] << " " << m_Matrix[7] << " " << m_Matrix[8] << std::endl;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::Add(Matrix2X2& matrix1, Matrix2X2& matrix2)
{
    Matrix2X2 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] + matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::Add(Matrix3X3& matrix1, Matrix3X3& matrix2)
{
    Matrix3X3 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] + matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::Subract(Matrix2X2& matrix1, Matrix2X2& matrix2)
{
    Matrix2X2 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] - matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::Subract(Matrix3X3& matrix1, Matrix3X3& matrix2)
{
    Matrix3X3 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] - matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::Multiply(Matrix2X2& matrix1, Matrix2X2& matrix2)
{
    Matrix2X2 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] * matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::Multiply(Matrix3X3& matrix1, Matrix3X3& matrix2)
{
    Matrix3X3 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] * matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::Divide(Matrix2X2& matrix1, Matrix2X2& matrix2)
{
    Matrix2X2 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] / matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::Divide(Matrix3X3& matrix1, Matrix3X3& matrix2)
{
    Matrix3X3 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();

    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        matrixValues[x] = matrix1.GetMatrix()[x] / matrix2.GetMatrix()[x];
    }

    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::ScalarMultiply(Matrix2X2& matrix, float scalar)
{
    Matrix2X2 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();
    
    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        matrixValues[x] = matrixValues[x] * scalar;
    }
    
    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::ScalarMultiply(Matrix3X3& matrix, float scalar)
{
    Matrix3X3 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();
    
    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        matrixValues[x] = matrixValues[x] * scalar;
    }
    
    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::ScalarDivide(Matrix2X2& matrix, float scalar)
{
    Matrix2X2 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();
    
    for (int x=0; x < MATRIX_2X2_SIZE; ++x)
    {
        matrixValues[x] = matrixValues[x] * scalar;
    }
    
    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::ScalarDivide(Matrix3X3& matrix, float scalar)
{
    Matrix3X3 outMatrix;
    float* matrixValues = outMatrix.GetMatrix();
    
    for (int x=0; x < MATRIX_3X3_SIZE; ++x)
    {
        matrixValues[x] = matrixValues[x] * scalar;
    }
    
    return outMatrix;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float MatrixMethods::GetDeterminant(Matrix2X2& matrix)
{
    float* matrixValues = matrix.GetMatrix();
    return (matrixValues[0] * matrixValues[3]) - (matrixValues[1] * matrixValues[2]);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float MatrixMethods::GetDeterminant(Matrix3X3& matrix)
{
    float* matrixValues = matrix.GetMatrix();
    return matrixValues[0] * (matrixValues[4] * matrixValues[8] - matrixValues[5] * matrixValues[7]) 
        -  matrixValues[1] * (matrixValues[3] * matrixValues[8] - matrixValues[5] * matrixValues[6]) 
        +  matrixValues[2] * (matrixValues[3] * matrixValues[7] - matrixValues[4] * matrixValues[6]);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix2X2 MatrixMethods::GetInverseMatrix(Matrix2X2& matrix)
{
    float* matrixValues = matrix.GetMatrix();
    float inverseDeterminant = 1 / GetDeterminant(matrix);

    Matrix2X2 outMatrix;
    float* outMatrixValues = outMatrix.GetMatrix();

    outMatrixValues[0] = matrixValues[3];
    outMatrixValues[1] = matrixValues[1] * -1.0f;
    outMatrixValues[2] = matrixValues[2] * -1.0f;
    outMatrixValues[3] = matrixValues[0];

    return ScalarDivide(outMatrix, inverseDeterminant);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Matrix3X3 MatrixMethods::GetInverseMatrix(Matrix3X3& matrix)
{
    float* matrixValues = matrix.GetMatrix();
    float inverseDeterminant = 1 / GetDeterminant(matrix);

    Matrix3X3 outMatrix;
    float* outMatrixValues = outMatrix.GetMatrix();

    outMatrixValues[0] = matrixValues[0];
    outMatrixValues[1] = matrixValues[3];
    outMatrixValues[2] = matrixValues[6] * -1.0f;
    outMatrixValues[3] = matrixValues[1];
    outMatrixValues[4] = matrixValues[4] * -1.0f;
    outMatrixValues[5] = matrixValues[7];
    outMatrixValues[6] = matrixValues[2] * -1.0f;
    outMatrixValues[7] = matrixValues[5];
    outMatrixValues[8] = matrixValues[8];

    return ScalarDivide(outMatrix, inverseDeterminant);
}
