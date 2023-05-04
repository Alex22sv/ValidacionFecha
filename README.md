# Validación de fecha
Este programa valida las fechas ingresadas, al igual que identifica si es verano o invierno e identifica el signo zodiacal.

### Importante
Ya que para nuestro programa utilizamos un condicional <b>Switch</b> para los 12 meses del año, tomarle una imagen al flujograma sería complicado para mostrar el resultado, por lo que incluimos el archivo del pseudocódigo con el que se puede crear el flujograma en PseInt.

## ENTRADA:
    - Día
    - Mes
    - Año
    
## PROCESO:
    - Si el mes es 1, 3, 5, 7, 8, 10 o 12... el mes tiene 31 días
    - Si el mes es 4, 6, 9 u 11... el mes tiene 30 días
    - Si el mes es 2 y el año es divisible por 4, el mes tiene 29 días; de lo contrario, tiene 28 días.
    - Si el mes es 11, 12, 1, 2, 3, 4... es verano
    - Si el mes es 5, 6, 7, 8, 9, 10... es invierno
    - Si la fecha está entre 21 de enero y 19 de febrero, es acuario
    - Si la fecha está entre 20 de febrero y 20 de marzo, es piscis
    - Si la fecha está entre 21 de marzo y 19 de abril, es aries
    - Si la fecha está entre 20 de abril y 20 de mayo, es tauro
    - Si la fecha está entre 21 de mayo y 20 de junio, es géminis
    - Si la fecha está entre 21 de junio y 22 de julio, es cáncer
    - Si la fecha está entre 23 de julio y 22 de agosto, es leo
    - Si la fecha está entre 23 de agosto y 22 de septiembre, es virgo
    - Si la fecha está entre 23 de septiembre y 22 de octubre, es libra
    - Si la fecha está entre 23 de octubre y 21 de noviembre, es escorpión
    - Si la fecha está entre 22 de noviembre y 21 de diciembre, es sagitario
    - Si la fecha está entre 22 de diciembre y 20 de enero, es capricornio

## SALIDA:
    - Si la fecha es válida o no
    - Si estamos en verano o invierno
    - El signo zodiacal