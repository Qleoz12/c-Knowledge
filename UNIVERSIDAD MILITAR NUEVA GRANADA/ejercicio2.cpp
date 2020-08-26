#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// La Universidad Militar Nueva Granada premia a los buenos estudiantes otorgando un descuento del 50% en el pago de la matrícula, a quienes tengan un promedio de notas mayor o igual a 4.5 o que pertenezcan a la selección de algún deporte y obtengan un promedio de notas superior a 4.0. Calcular y escribir el valor del descuento, de lo contrario escribir el mensaje “Paga Matrícula Completa” e imprimir su valor (El valor de la matrícula se debe ingresar por teclado).

void negocio(double b,double c) 
{
    //logica pitagoras
    b = pow(b,2);
    c = pow(c,2);
    double a=sqrt(b+c);

    cout << "/* el valor de la hipotenusa es  */" << endl;
    cout << a << endl;
}


int  main()
{   
    // 
        double  cateto1=0;
        double  cateto2=0;
        
    // 
    cout << "/* ingrese el valor cateto b */" << endl;
    cin >>cateto1;
    cout << "/* ingrese el valor ateto c */" << endl;
    cin >>cateto2;

    negocio(cateto1,cateto2);
   //  para terminar
   cout << "->>>> enter para terminar";
   cin.ignore();  
   cin.get(); 

    return 0;
}

