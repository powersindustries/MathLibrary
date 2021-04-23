#include "Vector.h"
#include <iostream>
#include <math.h>


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2::Vector2()
{
    m_X = 0;
    m_Y = 0;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2::Vector2(float x, float y)
{
    m_X = x;
    m_Y = y;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
void Vector2::Print()
{
    std::cout << "[" << m_X << "," << m_Y << "]" << std::endl;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3::Vector3()
{
    m_X = 0;
    m_Y = 0;
    m_Z = 0;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3::Vector3(float x, float y, float z)
{
    m_X = x;
    m_Y = y;
    m_Z = z;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
void Vector3::Print()
{
    std::cout << "[" << m_X << "," << m_Y << "," << m_Z << "]" << std::endl;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2 VectorMethods::Add(Vector2* vector1, Vector2* vector2)
{
    float x = vector1->GetX() + vector2->GetX();
    float y = vector1->GetY() + vector2->GetY();

    return Vector2(x, y);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::Add(Vector3* vector1, Vector3* vector2)
{
    float x = vector1->GetX() + vector2->GetX();
    float y = vector1->GetY() + vector2->GetY();
    float z = vector1->GetZ() + vector2->GetZ();

    return Vector3(x, y, z);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2 VectorMethods::Subtract(Vector2* vector1, Vector2* vector2)
{
    float x = vector1->GetX() - vector2->GetX();
    float y = vector1->GetY() - vector2->GetY();

    return Vector2(x, y);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::Subtract(Vector3* vector1, Vector3* vector2)
{
    float x = vector1->GetX() - vector2->GetX();
    float y = vector1->GetY() - vector2->GetY();
    float z = vector1->GetZ() - vector2->GetZ();

    return Vector3(x, y, z);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2 VectorMethods::ScalarMultiply(Vector2* vector, float scalar)
{
    float x = scalar * vector->GetX();
    float y = scalar * vector->GetY();

    return Vector2(x, y);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::ScalarMultiply(Vector3* vector, float scalar)
{
    float x = scalar * vector->GetX();
    float y = scalar * vector->GetY();
    float z = scalar * vector->GetZ();

    return Vector3(x, y, z);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2 VectorMethods::ScalarDivide(Vector2* vector, float scalar)
{
    float x = scalar / vector->GetX();
    float y = scalar / vector->GetY();

    return Vector2(x, y);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::ScalarDivide(Vector3* vector, float scalar)
{
    float x = scalar / vector->GetX();
    float y = scalar / vector->GetY();
    float z = scalar / vector->GetZ();

    return Vector3(x, y, z);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float VectorMethods::VectorLength(Vector2* vector)
{
    // SquareRoot(x^2 + y^2)
    double vectorLength = sqrt( (vector->GetX() * vector->GetX()) + (vector->GetY() * vector->GetY()) );
    return (float)vectorLength;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float VectorMethods::VectorLength(Vector3* vector)
{
    // SquareRoot(x^2 + y^2 + z^2)
    double vectorLength = sqrt( (vector->GetX() * vector->GetX()) + (vector->GetY() * vector->GetY()) + (vector->GetZ() * vector->GetZ()) );
    return (float)vectorLength;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector2 VectorMethods::RotateCounterClockwise(Vector2* vector, float angleInDegrees)
{
    float xValue = (vector->GetX() * cos(angleInDegrees)) - (vector->GetY() * sin(angleInDegrees));
    float yValue = (vector->GetX() * sin(angleInDegrees)) + (vector->GetY() * cos(angleInDegrees));
    return Vector2(xValue, yValue);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::RotateAboutX(Vector3* vector, float angleInDegrees)
{
    // Rotation Matrix About X Axis
    // 1 0 0
    // 0 cos(theta) -sin(theta)
    // 0 sin(theta) cos(theta)
    int xValue = (1 * vector->GetX()) + (0 * vector->GetY()) + (0 * vector->GetZ());
    int yValue = (0 * vector->GetX()) + (cos(angleInDegrees) * vector->GetY()) + (-1 * sin(angleInDegrees) * vector->GetZ());
    int zValue = (0 * vector->GetX()) + (sin(angleInDegrees) * vector->GetY()) + (0 * cos(angleInDegrees) * vector->GetZ());

    return Vector3(xValue, yValue, zValue);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::RotateAboutY(Vector3* vector, float angleInDegrees)
{
    // Rotation Matrix about Y Axis
    // cos(theta) 0 sin(theta)
    // 0 1 0
    // -sin(theta) cos(theta) 0
    int xValue = (cos(angleInDegrees) * vector->GetX()) + (0 * vector->GetY()) + (sin(angleInDegrees) * vector->GetZ());
    int yValue = (0 * vector->GetX()) + (1 * vector->GetY()) + (0 * vector->GetZ());
    int zValue = (-1 * sin(angleInDegrees) * vector->GetX()) + (cos(angleInDegrees) * vector->GetY()) + (0 * vector->GetZ());

    return Vector3(xValue, yValue, zValue);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::RotateAboutZ(Vector3* vector, float angleInDegrees)
{
    // Rotation Matrix about Z Axis
    // cos(theta) -sin(theta) 0
    // sin(theta) cos(theta) 0
    // 0 0 1
    int xValue = (cos(angleInDegrees) * vector->GetX()) + (-1 * sin(angleInDegrees) * vector->GetY()) + (0* vector->GetZ());
    int yValue = (sin(angleInDegrees) * vector->GetX()) + (cos(angleInDegrees) * vector->GetY()) + (0 * vector->GetZ());
    int zValue = (0 * vector->GetX()) + (0 * vector->GetY()) + (1 * vector->GetZ());

    return Vector3(xValue, yValue, zValue);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float VectorMethods::AnglesBetweenVector2InDegrees(Vector2* vector1, Vector2* vector2)
{
    // Angle = Cos-1( dot product(vector1 vector2) / ||vector1|| ||vector2||
    // Angle = Cos-1(dot product / length)
    float numerator   = DotProduct(vector1, vector2);
    float denominator = VectorLength(vector1) * VectorLength(vector2);

    return acos( numerator / denominator );
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float VectorMethods::DotProduct(Vector2* vector1, Vector2* vector2)
{
    float dotProduct = (vector1->GetX() * vector2->GetX()) + (vector1->GetY() * vector2->GetY());
    return dotProduct;
}

bool VectorMethods::ArePerpendicular(Vector2* vector1, Vector2* vector2)
{
    return DotProduct(vector1, vector2) == 0;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Vector3 VectorMethods::CrossProduct(Vector3* vector1, Vector3* vector2)
{
    //          [v1y * v2z - v1z * v2y ]
    // Returns: [v1x * v2x - v1x * v2z ]
    //          [v1z * v2y - v1y * v2x ]
    float x = ( vector1->GetY() * vector2->GetZ() ) - ( vector1->GetZ() * vector2->GetY() );
    float y = ( vector1->GetY() * vector2->GetZ() ) - ( vector1->GetX() * vector2->GetZ() );
    float z = ( vector1->GetY() * vector2->GetZ() ) - ( vector1->GetY() * vector2->GetX() );

    return Vector3(x, y, z);
}
