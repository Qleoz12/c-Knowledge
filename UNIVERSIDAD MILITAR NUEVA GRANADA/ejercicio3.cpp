#include <iostream>
#include <string>
#include <cmath>

using namespace std;


// Leer un número entero de tres cifras y determinar si la suma de sus dígitos es un número par o impar e imprimir un mensaje indicándolo. Ejemplo: la suma de los dígitos del número 345 es par porque 3+4+5 es igual a 12.
// (el símbolo para el mod en C++ es % y para división div es /).

void negocio(string numero) 
{
    int suma=0;
    bool par=false;
    for(char const &c  : numero)
    {
       suma+=(c-'0'); 
    }
    if(suma % 2 ==0)
    {
        cout << "/* la suma es " << suma<<" y es par  */"<<endl;
    }
    else
    {
        cout << "/* la suma es " << suma<<" y es impar */"<<endl;
    }

    
}


int  main()
{   
    // 
        string  numero;
    // 
    cout << "/* ingrese el valor  */" << endl;
    cin >>numero;
   
    negocio(numero);
   //  para terminar
   cout << "->>>> enter para terminar";
   cin.ignore();  
   cin.get(); 

    return 0;
}

