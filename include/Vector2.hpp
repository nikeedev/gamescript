#pragma once

#include <math>
class Vector2
{
    public:
        float x;
        float y;
        Vector2()
        {
            x = 0;
            y = 0;
        }
        Vector2(float a, float b)
        {
            x = a;
            y = b;
        }

        friend Vector2 operator+(Vector2 a, Vector2 b)
        {
            return {a.x + b.x, a.y + b.y};
        }
        friend Vector2 operator-(Vector2 a, Vector2 b)
        {
            return {a.x - b.x, a.y - b.y};
        }
        friend Vector2 operator*(Vector2 a, Vector2 b)
        {
            return {a.x * b.x, a.y * b.y};
        }
        friend Vector2 operator/(Vector2 a, Vector2 b)
        {
            return {a.x / b.x, a.y / b.y};
        }
};
