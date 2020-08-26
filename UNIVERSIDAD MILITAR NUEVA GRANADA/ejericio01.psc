Funcion negocio(nota, valorMatricula,deportes)
	notaregla1=4.5;
    notaregla2=4.0;
    //a mayuscula
	deportes=Mayusculas(deportes)
	Si deportes == "S" & nota>notaregla2 Entonces
		Escribir "el descuento de la matricula es"
		Escribir  valorMatricula*0.5
		
	SiNo 
		Si nota>=notaregla1 Entonces
			Escribir "el descuento de la matricula es "
			Escribir valorMatricula*0.5
		
		SiNo
			escribir "Paga Matrícula Completa "
			Escribir  valorMatricula
		fin si
	Fin Si
		
Fin Funcion

Algoritmo ejercicio1
	valorMatricula<-0;
	nota<-0;
	deportes<-null;
	
	Escribir "/* ingrese el valor de la matricula */";
    Leer valorMatricula;
    Escribir "/* ingrese el valor nota obtenida */";
    Leer nota;
    Escribir "/* ¿Esta usted en alguna selección de deportes? (S/N) */" ;
    Leer deportes
	
	negocio(nota,valorMatricula,deportes);
	
FinAlgoritmo
