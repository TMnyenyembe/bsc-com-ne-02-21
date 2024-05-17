#include <iostream>
using namespace std;
// function  for calculating the triangle
int TriangleArea( int base, int height){
  return 0.5 * base *height;
  }
  // function for calculating the area of the square
  double SquareArea( double side){
    return side * side;
 }

 // function for calculating Rectangle
 double RectangleArea( double width, double length){
    return width * length;
 }

int main(){
    string Shapes[] ={"1.Triangle","2.Square", "3. Rectangle","4.Quit program"};
    //prompting the user to enter selection of shapes
    cout << "Enter the selected shape"<< endl;
    cout<<"1.Triangle"<<endl;
    cout<<"2.Square"<<endl;
    cout<< "3.Rectangle"<< endl;
    cout<< "4. Quit program"<< endl;

    int value;
    cin >> value;

    while (value > 4 || value < 1)
     cout << "You have entered invalid input "<< endl;
     
     if(value == 1 ){
        int base, height;
     cout << "You have selected a triangle "<< endl;
     cout << "enter the base:"<< endl;
     cin >> base;
     cout << "enter the height:"<< endl;
     cin>> height;
     cout << "Area of the triangle is:"<< TriangleArea(base , height)<< endl;
     }
    else if(value == 2){
        double side;
        cout << "You have selected a square"<< endl;
        cout << "enter the side length:"<< endl;
        cin >> side;
        cout << "Area of the square is:"<<SquareArea(side) << endl;
    } 
    else if ( value == 3){
        double width, length;
    cout << "You have selected a Rectangle" << endl;
    cout << "enter the width:"<< endl;
    cin >>width;
    cout << "enter the length:"<<endl;
    cin >> length;
    cout << "Arae of a Rectangle is:" << RectangleArea(width , length)<< endl;
    }
    else
    cout << "Quit the program."<< endl;
    return 0;


}