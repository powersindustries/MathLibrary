#pragma once
#include "Core/Vector.h"


class Box
{
public:

    Box();
    Box(Vector3 position, float xWidth, float yLength, float zHeight);


    bool Collided(Box* inBox);
    bool PofloatInBox(Vector3 pofloat);

    float Area();
    float SurfaceArea();

    Vector3 GetPosition() { return m_Position; }
    void SetPosition(Vector3 position) { m_Position = position; }

    float GetXWidth() { return m_XWidth; }
    void SetXWidth(float xWidth) { m_XWidth = xWidth; }

    float GetYLength() { return m_YLength; }
    void SetYLength(float yLength) { m_YLength = yLength; }

    float GetZHeight() { return m_ZHeight; }
    void SetZHeight(float zHeight) { m_ZHeight = zHeight; }

private:
    Vector3 m_Position;

    float m_XWidth;
    float m_YLength;
    float m_ZHeight;
};


class Sphere
{
public:

    Sphere();
    Sphere(Vector3 position, float radius);

    bool Collided(Sphere* inSphere);
    bool PofloatInSphere(Vector3 pofloat);

    float Volume();
    float SurfaceArea();

    Vector3 GetPosition() { return m_Position; }
    void SetPosition(Vector3 position) { m_Position = position; }

    float GetRadius() { return m_Radius; }
    void SetRadius(float radius) { m_Radius = radius; }

private:
    Vector3 m_Position;

    float m_Radius;
};
