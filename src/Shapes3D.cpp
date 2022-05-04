#include "Shapes3D.h"
#include <math.h>

#define PI_CONSTANT 3.14f


// ------------------------------------------------------------
// ------------------------------------------------------------
Box::Box()
{
    m_Position = Vector3();
    m_XWidth = 0;
    m_YLength = 0;
    m_ZHeight = 0;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Box::Box(Vector3 position, float xWidth, float yLength, float zHeight)
{
    m_Position = position;
    m_XWidth = xWidth;
    m_YLength = yLength;
    m_ZHeight = zHeight;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Box::Collided(Box* inBox)
{
    if (m_Position.GetX() <= inBox->GetPosition().GetX() + inBox->GetXWidth()
     && m_Position.GetX() + GetXWidth() >= inBox->GetPosition().GetX()
     && m_Position.GetY() <= inBox->GetPosition().GetY() + inBox->GetYLength()
     && m_Position.GetY() + GetYLength() >= inBox->GetPosition().GetY()
     && m_Position.GetZ() <= inBox->GetPosition().GetZ() + inBox->GetZHeight()
     && m_Position.GetZ() + GetZHeight() >= inBox->GetPosition().GetZ())
    {
        return true;
    }

    return false;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Box::PofloatInBox(Vector3 pofloat)
{
    if (pofloat.GetX() >= m_Position.GetX() 
     && pofloat.GetX() <= m_Position.GetX() + m_XWidth
     && pofloat.GetY() >= m_Position.GetY() 
     && pofloat.GetY() <= m_Position.GetY() + m_YLength
     && pofloat.GetZ() >= m_Position.GetZ() 
     && pofloat.GetZ() <= m_Position.GetZ() + m_ZHeight)
    {
        return true;
    }
    
    return false;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Box::Area()
{
    return m_XWidth * m_YLength * m_ZHeight;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Box::SurfaceArea()
{
    return (2 * m_YLength * m_XWidth) + (2 * m_YLength * m_ZHeight) + (2 * m_XWidth * m_ZHeight);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Sphere::Collided(Sphere* inSphere)
{
    float temp = (GetPosition().GetX() - inSphere->GetPosition().GetX()) * (GetPosition().GetX() - inSphere->GetPosition().GetX())
        + (GetPosition().GetY() - inSphere->GetPosition().GetY()) * (GetPosition().GetY() - inSphere->GetPosition().GetY())
        + (GetPosition().GetZ() - inSphere->GetPosition().GetZ()) * (GetPosition().GetZ() - inSphere->GetPosition().GetZ());
    float distanceBetweenPofloats = (float)sqrt(temp);
    
    return distanceBetweenPofloats < (GetRadius() + inSphere->GetRadius());
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Sphere::PofloatInSphere(Vector3 pofloat)
{
    float temp = (pofloat.GetX() - GetPosition().GetX()) * (pofloat.GetX() - GetPosition().GetX())
        + (pofloat.GetY() - GetPosition().GetY()) * (pofloat.GetY() - GetPosition().GetY())
        + (pofloat.GetZ() - GetPosition().GetZ()) * (pofloat.GetZ() - GetPosition().GetZ());
    float distanceBetweenPofloats = (float)sqrt(temp);

    return distanceBetweenPofloats < GetRadius();
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Sphere::Volume()
{
    return (4 / 3) * PI_CONSTANT * (m_Radius * m_Radius * m_Radius);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Sphere::SurfaceArea()
{
    return 4.0f * PI_CONSTANT * (m_Radius * m_Radius);
}
