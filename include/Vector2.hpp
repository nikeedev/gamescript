#pragma once
#ifdef VECTOR_EXPORTS
 #define CLASS_DECL __declspec(dllexport)
#else
 #define CLASS_DECL __declspec(dllimport)
#endif


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
    y = b;
    x = a;
  }
};
