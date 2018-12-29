#include <iostream>

using namespace std;

class rectangle {
    double x, y;    // x = longueur   y = largeur
public :
    rectangle (){x = 0; y = 0;} // constructeur par defauy
    rectangle (double a, double b){x = a; y = b;} // constructeur surchargé
    rectangle(double a){ x =a;} // surchargé


    double surface (){return x*y;}
    double perimetre (){return (x + y)*2;}



};


int main()
{
    rectangle R(2,6);
    cout << R.surface() << endl;
    cout << R.perimetre() << endl;

    return 0;
}
