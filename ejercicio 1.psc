Proceso SumaDeNumerosNaturales
    // Declaracion
    Definir n, suma Como Entero;
	Definir i Como Entero;
	
    // Entrada 
    Escribir "Ingrese el valor de n: ";
    Leer n;
	
    // 	Proceso
    suma <- 0;
	
    Para i <- 1 Hasta n Hacer
        suma <- suma + i;
    FinPara
	
    // Salida 
    Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
FinProceso
 
