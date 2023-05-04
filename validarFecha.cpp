/* 
    Alexander Efraín Morales Pineda, 00024123
    Juan Carlos Romero Delgado, 00128023
    Jisya Alexander Rivas Marroquín, 00211723
*/

// Librerías
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    // Función que permite mostrar los caracteres especiales y acentos correctamente en Windows
    SetConsoleOutputCP(CP_UTF8);

    /* Este sistema se encargará de una validación de la fecha */

    // Definición de variables
    int day = 0, month = 0, year = 0;
    bool fechaValida = 0;
    string signoZodiacal = "", epocaClimatica = "";

    // Bienvenida al sistema
    cout<<"---------------------------------\n¡Bienvenido al sistema!\n---------------------------------\n";
    cout<<"Este programa busca validar la fecha ingresada, al igual que busca identificar la época en la que se encuentra (verano/invierno) y su signo zodiacal.\n---------------------------------\n";
    
    // Entrada de datos
    cout<<"Ingrese el día del mes: ";
    cin>>day;
    cout<<"Ingrese el mes del año en números (ej. 1, 5, 7): ";
    cin>>month;
    cout<<"Ingrese el año: ";
    cin>>year;

    // Proceso
    // Validación de la fecha
    switch (month){
        case 1:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "verano";
                if(day>=21){
                    signoZodiacal = "Acuario";
                } else {
                    signoZodiacal = "Capricornio";
                }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 2:
            // Si el año es divisible por 4, el mes tiene 29 días, de lo contrario, tiene 28 días
            if(year%4 == 0){
                // El mes tiene 29 días
                if((0<day) && (day<30)){
                    // Día válido
                    fechaValida = 1;
                    epocaClimatica = "verano";
                    if(day>=20){
                        signoZodiacal = "Piscis";
                    } else {
                        signoZodiacal = "Acuario";
                    }
                } else {
                    cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                    fechaValida = 0;
                }
            } else {
                // El mes tiene 28 días
                if((0<day) && (day<29)){
                    // Día válido
                    fechaValida = 1;
                    epocaClimatica = "verano";
                    if(day>=20){
                        signoZodiacal = "Piscis";
                    } else {
                        signoZodiacal = "Acuario";
                    }
                } else {
                    cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                    fechaValida = 0;
                }
            }
            break;
        case 3:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "verano";
                if(day>=21){
                        signoZodiacal = "Aries";
                    } else {
                        signoZodiacal = "Psicis";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 4:
            // El mes tiene 30 días
            if((0<day) && (day<31)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "verano";
                if(day>=20){
                        signoZodiacal = "Tauro";
                    } else {
                        signoZodiacal = "Aries";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 5:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "invierno";
                if(day>=21){
                        signoZodiacal = "Géminis";
                    } else {
                        signoZodiacal = "Tauro";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 6:
            // El mes tiene 30 días
            if((0<day) && (day<31)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "invierno";
                if(day>=21){
                        signoZodiacal = "Cáncer";
                    } else {
                        signoZodiacal = "Géminis";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 7:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "invierno";
                if(day>=23){
                        signoZodiacal = "Leo";
                    } else {
                        signoZodiacal = "Cáncer";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 8:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "invierno";
                if(day>=23){
                        signoZodiacal = "Virgo";
                    } else {
                        signoZodiacal = "Leo";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 9:
            // El mes tiene 30 días
            if((0<day) && (day<31)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "invierno";
                if(day>=23){
                        signoZodiacal = "Libra";
                    } else {
                        signoZodiacal = "Virgo";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 10:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "invierno";
                if(day>=23){
                        signoZodiacal = "Escorpión";
                    } else {
                        signoZodiacal = "Libra";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 11:
            // El mes tiene 30 días
            if((0<day) && (day<31)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "verano";
                if(day>=22){
                        signoZodiacal = "Sagitario";
                    } else {
                        signoZodiacal = "Escorpión";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        case 12:
            // El mes tiene 31 días
            if((0<day) && (day<32)){
                // Día válido
                fechaValida = 1;
                epocaClimatica = "verano";
                if(day>=20){
                        signoZodiacal = "Capricornio";
                    } else {
                        signoZodiacal = "Sagitario";
                    }
            } else {
                cout<<"\nHas ingresado un día no válido. Finalizando programa...\n";
                fechaValida = 0;
            }
            break;
        default:
            cout<<"\nHas ingresado un mes no válido. Finalizando programa...\n";
            fechaValida = 0;
            break;
    }
    if(fechaValida == 1){
        cout<<"\nHas ingresado una fecha válida.\n";
    } else {
        return 0;
    }

    // Determinar si es invierno o verano
    cout<<"Según la fecha ingresada, usted se encuentra en "<<epocaClimatica<<".\n";

    // Determinar el signo zodiacal
    cout<<"Su signo zodiacal es: "<<signoZodiacal<<"\n";
    cout<<"¡Gracias por utilizar nuestro programa!\n---------------------------------¡Fin del sistema!---------------------------------\n";
    return 0;
}