#include <iostream>
using namespace std;
class Figure{
private:
    int sideFigure = 0;
public:
    Figure(int s){
        sideFigure = s;
    }
    void getFigure(){
        cout << sideFigure << endl;

    }
};
class Triangle: public Figure{
public:
    Triangle (int s): Figure(s){

    }
};
class Quadrangle: public Figure{
public:
    Quadrangle(int s): Figure(s){
    }

};
int main() {
    cout << "Number of sides: " << endl;
    Figure figure(0);
    cout << "Figure: ";
    figure.getFigure();
    Triangle triangle(3);
    cout << "Triangle: ";
    triangle.getFigure();
    Quadrangle quadrangle(4);
    cout << "Quadrange: ";
    quadrangle.getFigure();
}
