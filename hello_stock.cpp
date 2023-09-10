#include <iostream>
using namespace std;

class Rectangle{
private:
    int width;
    int height;

public:
    void setWidth(int W) {
            width = W;
        }


    void setHeight(int Height) {

            height = Height;
        }

   int CalculateArea() {
       return width*height;
   }
   void displayInfo(){
    std::cout << "Width: " << width <<std::endl;
    std::cout << "Height: " << height <<std::endl;}
//std::cout << "Area: " << CaculateArea()<<std::endl;}

   };

int main() {
     Rectangle rect;
     rect.setWidth(50);
     rect.setHeight(40);
std::cout << "Rectangle:" <<rect.CalculateArea()<<std::endl;

     return 0;
}