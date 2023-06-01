#include <iostream>
#include <math.h>


using namespace std;

//________________________INIT CLASS RETANGLE______________
class Rectangle
{
    private:
        double length;
        double width;
    public:
        Rectangle(double length, double width);// constructor
    //--------- declare method-----
        double getlength();
        double getwidth();
        double Calc_meter();
        double Calc_Area();
        double Calc_DiagonalLine();
        void checkSquare();
    //-------------------------
};
//____________DEFINE METHOD IN CLASS_______________
Rectangle::Rectangle(double length, double width){
    Rectangle::length = length;
    Rectangle::width = width;
}
double Rectangle::getlength(){
    if (length<=0)
    {
        /* code */
        cout<<" Invalid number!";
        return 0;
    }
    return length;
}
double Rectangle::getwidth(){
    return width;
}
double Rectangle::Calc_meter(){
    return (length+width)*2;
}
double Rectangle::Calc_Area(){
    return length * width;
}
double Rectangle::Calc_DiagonalLine(){
    return sqrt(pow(length, 2) + pow(width, 2));
}
void Rectangle::checkSquare(){
    if (length = width)
    {
        /* code */
        cout<<"This is Squre!";
    }
    else
        cout<<"This not Square!";
}

//___________________MAIN_____________________
int main(){
    Rectangle rec(2,2 );
    cout<<"Length: "<< rec.getlength() << endl;
    cout<<"Width: "<< rec.getwidth() << endl;
    cout<<"Meter is: " << rec.Calc_meter() << endl;
    cout<<"Area is:"<< rec.Calc_Area() << endl;
    cout<<"DiagonalLine: "<< rec.Calc_DiagonalLine() << endl;
    rec.checkSquare();
   return 0;

}
