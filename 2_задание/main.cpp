#include <iostream>
using namespace std;
class Figure{
public:
  virtual void calc_print() const = 0;
};
class Triangle: public Figure{
private:
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
public:
    Triangle(int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C):a(side_a), b(side_b), c(side_c), A(angle_A), B(angle_B), C(angle_C) {}
    void calc_print() const{
      cout << "a = " <<  a << ", b = " << b << ", c = " << c << ", A = " << A << ", B = " << B << ", C = " << C << endl;
    }
};
class rightTriangle: public Triangle{
public:
  rightTriangle (int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C): Triangle(side_a, side_b, side_c, angle_A, angle_B, angle_C){
    angle_C = 90;
  }
};
class isoscelesTriangle: public Triangle{
public:
  isoscelesTriangle(int side_b, int side_c, int angle_B, int angle_C): Triangle(side_c, side_b, side_c, angle_C, angle_B, angle_C){
  }

};
class equilateralTriangle: public Triangle{
public:
  equilateralTriangle(int side_a, int angle_A): Triangle(side_a, side_a, side_a, angle_A, angle_A, angle_A){}
    
  };
class Quadrilateral: public Figure{
private:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
public:
    Quadrilateral(int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D):a(side_a), b(side_b), c(side_c), d(side_d), A(angle_A), B(angle_B), C(angle_C), D(angle_D){}

    void calc_print() const{
      cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << endl;
      
    }
};
class Parallelogram: public Quadrilateral{
public:
  Parallelogram(int side_a, int side_b, int angle_A, int angle_B): Quadrilateral(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B){
    }
  };
class Phombus: public Parallelogram{
public:
  Phombus(int side_a, int angle_A, int angle_B): Parallelogram(side_a, side_a, angle_A, angle_B){

}
};
class Rectangle: public Parallelogram{
public:
  Rectangle(int side_a, int side_b, int angle_A = 90, int angle_B = 90): Parallelogram(side_a, side_b, angle_A, angle_B){
  }
};
class Square: public Rectangle{
public:
  Square(int side_a, int angle_A): Rectangle(side_a, side_a, angle_A, angle_A){

  }
};
void printdata(Figure* f)
{
    f->calc_print();
}

int main() {
  Triangle f1(10, 20, 30, 50, 60, 70);
  rightTriangle f2(10, 20, 30, 50, 60, 90);
  isoscelesTriangle f3(20, 30, 60, 70);
  equilateralTriangle f4(10, 50);
  Quadrilateral f5(10, 20, 30, 40, 50, 60, 70, 80);
  Parallelogram f6(10, 20, 50, 60);
  Phombus f7(10, 50, 60);
  Rectangle f8(10, 20, 90, 90);
  Square f9(10, 90);
  printdata(&f1);
  printdata(&f2);
  printdata(&f3);
  printdata(&f4);
  printdata(&f5);
  printdata(&f6);
  printdata(&f7);
  printdata(&f8);
  printdata(&f9);
  
}
