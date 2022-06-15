#pragma once

class Size
{
public:
  int width;
  int height;

  Size()
  {
    width = 0;
    height = 0;
  }

  Size(int a, int b)
  {
    width = b;
    height = a;
  }

  ~Size();
};
