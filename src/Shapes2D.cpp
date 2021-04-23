#include "Shapes2D.h"
#include <math.h>

#define PI_CONSTANT 3.14


// ------------------------------------------------------------
// ------------------------------------------------------------
Rectangle::Rectangle()
{
    m_Position = Vector2();
    m_Width    = 0;
    m_Height   = 0;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Rectangle::Rectangle(Vector2 position, float width, float height)
{
    m_Position = position;
    m_Width    = width;
    m_Height   = height;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Rectangle::Collided(Rectangle* inRectangle)
{
    if (m_Position.GetX() < inRectangle->GetPosition().GetX() + inRectangle->GetWidth() 
     && m_Position.GetX() + m_Width > inRectangle->GetPosition().GetX()
     && m_Position.GetY() < inRectangle->GetPosition().GetY() + inRectangle->GetHeight() 
     && m_Position.GetY() + m_Height > inRectangle->GetPosition().GetY())
    {
        return true;
    }

    return false;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Rectangle::PointInRectangle(Vector2& point)
{
    if (m_Position.GetX() < point.GetX()
     && m_Position.GetX() + m_Width > point.GetX()
     && m_Position.GetY() < point.GetY()
     && m_Position.GetY() + m_Height > point.GetY())
    {
        return true;
    }

    return false;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Rectangle::Area()
{
    return m_Width * m_Height;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Circle::Circle()
{
    m_Position = Vector2();
    m_Radius   = 0;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
Circle::Circle(Vector2 position, float radius)
{
    m_Position = position;
    m_Radius   = radius;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Circle::Collided(Circle* circle)
{
    float distanceX = m_Position.GetX() - circle->GetPosition().GetX();
    float distanceY = m_Position.GetY() - circle->GetPosition().GetY();
    float distance = (float)sqrt( (distanceX*distanceX) + (distanceY*distanceY) );

    return distance < (m_Radius + circle->GetRadius());
}


// ------------------------------------------------------------
// ------------------------------------------------------------
bool Circle::PointInRectangle(Vector2& point)
{
    float distanceX = point.GetX() - m_Position.GetX();
    float distanceY = point.GetY() - m_Position.GetY();
    float distance = (float)sqrt((distanceX * distanceX) + (distanceY * distanceY));

    return distance < m_Radius;
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Circle::Area()
{
    return PI_CONSTANT * (m_Radius * m_Radius);
}


// ------------------------------------------------------------
// ------------------------------------------------------------
float Circle::Circumference()
{
    return 2 * PI_CONSTANT * m_Radius;
}
