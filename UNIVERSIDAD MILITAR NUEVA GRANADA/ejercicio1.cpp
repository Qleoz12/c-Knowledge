#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


// La Universidad Militar Nueva Granada premia a los buenos estudiantes otorgando un descuento del 50% en el pago de la matrícula, a quienes tengan un promedio de notas mayor o igual a 4.5 o que pertenezcan a la selección de algún deporte y obtengan un promedio de notas superior a 4.0. Calcular y escribir el valor del descuento, de lo contrario escribir el mensaje “Paga Matrícula Completa” e imprimir su valor (El valor de la matrícula se debe ingresar por teclado).

void negocio(double nota, double valorMatricula,string deportes) 
{
    double  notaregla1=4.5;
    double  notaregla2=4.0;
    //a mayuscula
    transform(deportes.begin(), deportes.end(),deportes.begin(), ::toupper);

    cout<<deportes<<endl;
    if(deportes == "S" && nota>notaregla2)
    {
        cout<<"el descuento de la matricula es "<<endl;
        cout<<valorMatricula*0.5<<endl;
    }
    else if (nota>=notaregla1)
    {
        cout<<"el descuento de la matricula es "<<endl;
        cout<<valorMatricula*0.5<<endl;
    }
    else
    {
        cout<<"Paga Matrícula Completa "<<endl;
        cout<<valorMatricula<<endl;
    }
}


int  main()
{   
    // 
        double  valorMatricula=0;
        double  nota;
        string  deportes;
    // 
    cout << "/* ingrese el valor de la matricula */" << endl;
    cin >>valorMatricula;
    cout << "/* ingrese el valor nota obtenida */" << endl;
    cin >>nota;

    cout << "/* ¿Esta usted en alguna selección de deportes? (S/N) */" << endl;
    cin >>deportes;

    negocio(nota,valorMatricula,deportes);
   //  para terminar
   cout << "->>>> enter para terminar";
   cin.ignore();  
   cin.get(); 

    return 0;
}

