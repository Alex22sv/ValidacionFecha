Algoritmo ValidarFecha
	Definir day, month, year Como Entero
	Definir fechaValida Como Logico
	Definir signoZodiacal Como Cadena
	
	Escribir "Ingrese el d�a del mes: "
	Leer day
	Escribir "Ingrese el mes del a�o: "
	Leer month
	Escribir "Ingrese el a�o: "
	Leer year
	
	Segun month Hacer
		1:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
			FinSi
		2:
			Si year%4 == 0 Entonces
				Si 0<day Y day<32 Entonces
					
				FinSi
			FinSi
	FinSegun
	
FinAlgoritmo
