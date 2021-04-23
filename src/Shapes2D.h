#pragma once
#include "Core/Vector.h"

class Rectangle
{
public:
    
    Rectangle();
    Rectangle(Vector2 position, float width, float height);

    bool Collided(Rectangle* inRectangle);
    bool PointInRectangle(Vector2& point);

    float Area();

    Vector2 GetPosition() { return m_Position; }
    void SetPosition(Vector2 position) { m_Position = position; }

    float GetWidth() { return m_Width; }
    void SetWidth(float width) { m_Width = width; }

    float GetHeight() { return m_Height; }
    void SetHeight(float height) { m_Height = height; }

private:
    Vector2 m_Position;
    
    float m_Width;
    float m_Height;
};


class Circle
{
public:
    Circle();
    Circle(Vector2 position, float radius);

    bool Collided(Circle* circle);
    bool PointInRectangle(Vector2& point);

    float Area();
    float Circumference();

    Vector2 GetPosition() { return m_Position; }
    void SetPosition(Vector2 position) { m_Position = position; }

    float GetRadius() { return m_Radius; }
    void SetRadius(float radius) { m_Radius = radius; }

private:
    Vector2 m_Position;

    float m_Radius;
};
