#include <iostream>

using namespace std;

int main(){
    int primero = 0;
    int segundo = 1;
    int tercero = 2;
    int cuarto = 3;
    int quinto = 4;

    int surfacearea1 = 6*primero*primero;
    int surfacearea2 = 6*segundo*segundo;
    int surfacearea3 = 6*tercero*tercero;
    int surfacearea4 = 6*cuarto*cuarto;
    int surfacearea5 = 6*quinto*quinto;

    int volumen1 = primero*primero*primero;
    int volumen2 = segundo*segundo*segundo;
    int volumen3 = tercero*tercero*tercero;
    int volumen4 = cuarto*cuarto*cuarto;
    int volumen5 = quinto*quinto*quinto;




    cout << "Face lenght         Surface area         Volume \nof cube (cm)        of cube (cm^2)       of cube(cm^3)" << endl;
    cout << endl;
    cout <<  primero << "                   " << surfacearea1 << "                    " << volumen1 << endl;
    cout <<  segundo << "                   " << surfacearea2 << "                    " << volumen2 << endl;
    cout <<  tercero << "                   " << surfacearea3 << "                   " << volumen3 << endl;
    cout <<  cuarto  << "                   " << surfacearea4 << "                   " << volumen4 << endl;
    cout <<  quinto  << "                   " << surfacearea5 << "                   " << volumen5 << endl;
    
    

    return 0;

}
