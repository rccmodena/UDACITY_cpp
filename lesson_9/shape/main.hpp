#include <iostream>

using namespace std;

class Shape
{
    private:
      int length;
      int width;

    public:
      Shape(int l, int w);
      int operator + (Shape shapeIn);
      double Area();
      int getLength();
      int getWidth();
};

Shape::Shape(int l = 2, int w = 2)
{
   length = l;
   width = w;
}

int Shape::operator + (Shape shapeIn)
{
    return (length + shapeIn.getLength()) * (width + shapeIn.getWidth());
}

double Shape::Area()
{
   return length * width;
}

int Shape::getLength()
{
    return length;
}

int Shape::getWidth()
{
    return width;
}
