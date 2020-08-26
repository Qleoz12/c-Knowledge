#include <iostream>
#include <string>
#include <cmath>

using namespace std;


//Leer dos números en dos variables e intercambiar sus valores.

void negocio(double numero1,double numero2) 
{
    //pivote o comodin
    double pivot =0;
    pivot=numero1;
    numero1 = numero2;
    numero2 = pivot;

     cout << "/* los valores han sido intercambiados */" << endl;
     cout << "/* numero ( " << numero1<<","<<numero2<<") */"<< endl;

    
}


int  main()
{   
    // 
        double  numero1;
        double  numero2;
    // 
    cout << "/* ingrese el valor 1 */" << endl;
    cin >>numero1;
    cout << "/* ingrese el valor 2 */" << endl;
    cin >>numero2;

    negocio(numero1,numero2);
   //  para terminar
   cout << "->>>> enter para terminar";
   cin.ignore();  
   cin.get(); 

    return 0;
}

