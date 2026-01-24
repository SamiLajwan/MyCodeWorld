#include <iostream>
using namespace std;

// runtime polymorphism -> achivied by using virtual keyword -> Late Binding

// Final keyword: 
// - with classes(prevent inheritance)
// - with virtual keyword: prevent overriding in derived classes

class Shape{
  public:
    virtual void draw(){
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape{
  public:
    void draw() override{ // override is not necessary to write
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape{
  public:
    void draw(){
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle : public Shape{
  public:
    void draw() override{
        cout << "Triangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *s){
    s->draw(); // draw is polymorphic -> calls relevant draw function
}

int main(){
   
   
   Shape *s1 = new Circle();
   Shape *s2= new Rectangle();
   Shape *s3 = new Triangle();

   ShapeDrawing(s1);
   ShapeDrawing(s2);
   ShapeDrawing(s3);
   return 0;
}
