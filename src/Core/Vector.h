#pragma once


class Vector2
{
public:

    Vector2();
    Vector2(float x, float y);

    void Print();

    void SetX(float x) { m_X = x; }
    float GetX() { return m_X; }

    void SetY(float y) { m_Y = y; }
    float GetY() { return m_Y; }

private:
    float m_X;
    float m_Y;
};


class Vector3
{
public:

    Vector3();
    Vector3(float x, float y, float z);

    void Print();

    void SetX(float x) { m_X = x; }
    float GetX() { return m_X; }

    void SetY(float y) { m_Y = y; }
    float GetY() { return m_Y; }

    void SetZ(float z) { m_Z = z; }
    float GetZ() { return m_Z; }

private:
    float m_X;
    float m_Y;
    float m_Z;
};


class VectorMethods
{
public:

    static Vector2 Add(Vector2* vector1, Vector2* vector2);
    static Vector3 Add(Vector3* vector1, Vector3* vector2);
    
    static Vector2 Subtract(Vector2* vector1, Vector2* vector2);
    static Vector3 Subtract(Vector3* vector1, Vector3* vector2);
    
    static Vector2 ScalarMultiply(Vector2* vector, float scalar);
    static Vector3 ScalarMultiply(Vector3* vector, float scalar);
    
    static Vector2 ScalarDivide(Vector2* vector, float scalar);
    static Vector3 ScalarDivide(Vector3* vector, float scalar);
    
    static float VectorLength(Vector2* vector);
    static float VectorLength(Vector3* vector);
   
    static Vector2 RotateCounterClockwise(Vector2* vector, float angleInDegrees);
    
    static Vector3 RotateAboutX(Vector3* vector, float angleInDegrees);
    static Vector3 RotateAboutY(Vector3* vector, float angleInDegrees);
    static Vector3 RotateAboutZ(Vector3* vector, float angleInDegrees);

    static float AnglesBetweenVector2InDegrees(Vector2* vector1, Vector2* vector2);
   
    static float DotProduct(Vector2* vector1, Vector2* vector2);
    static bool ArePerpendicular(Vector2* vector1, Vector2* vector2);

    static Vector3 CrossProduct(Vector3* vector1, Vector3* vector2);
};
