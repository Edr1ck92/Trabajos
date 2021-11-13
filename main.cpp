//ejercicios2.cpp
//Federico Castro Y Edrick Galicia
//Un archivo dedicado a hacer 

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>


using namespace std;

//Problema 1
void operaNumeros(){
    cout<<"Dame la opción deseada \n S) Mostrar la suma de dos numeros \n R) Mostrar la resta de dos numeros \n M) Mostrar la multiplicación de dos números E) Salida"<<endl;
    char opcion;
    cin>>opcion;
    int numero1;
    int numero2;
    cin>>numero1;
    cin>>numero2;
    int respuesta=0;
    switch(opcion){
        case 'S':
            respuesta=numero1+numero2;
            break;
        case 'R':
            respuesta=numero1-numero2;
            break;    
        case 'M':
            respuesta=numero1*numero2;
            break;        
        case 'E':
            return;
            break;
        default:
            cout<<"Opción incorrecta"<<endl;
            break;    
    }
    cout<<"El resultado de la operación es: "<<respuesta<<endl;

}

//Problema 2
void numeroImpar(){
    int numero=0;
    do{
        cout<<"Dame un número impar "<<endl;
        cin>>numero;
    }while(numero%2==0);
}

// EJERCICIO 3
    void sumaPares(){
        int sumadepares = 0;
            for(int i=0; i <= 100; i++){

                if (i % 2 == 0){

                    sumadepares = sumadepares + i;

                }   
            } cout<<"El resultado de los pares de 0 a 100 es: "<<sumadepares<<endl;
        }



// EJERCICIO 4
    void mediaAritmetica()
    {
        int count = 0;
        int numerostotales= 0;
        int numeros = 0;
        int resultado = 0;
        cout<<"Cuantos numeros va a introducir?"<<endl;
        cin>> count;

        for(int i = 1; i<= count; i++){

            cout<<"Introduzca el numero, #"<< i<< endl;
            cin>>numeros;

            numerostotales =numerostotales + numeros;

        }
        resultado = numerostotales /count;

        cout<<"La media aritmetica de sus numeros fue: "<<resultado<<endl;
    }

    //ejercicio 5
    void numeroMagico()
    {
        srand();
        int count = 1;
        int numMagico = rand()%(100-1 + 1) + 1;
        int intento = 0;


        while(intento != numMagico){
        cout<<" este es tu intento numero #"<< count <<"\n dime tu intento: ";
        cin>>intento;

        if (intento<numMagico)
        {
            cout<<"Te falta un poco MÁS ";
            count++;
        }
        else if (intento>numMagico)
        {
            cout<<"Te pasaste, el numero es MENOR ";
            count++;
        }
        else if(intento == numMagico){
            count++;
            cout<<"Por fin, le atinaste al numero MAGICO. El numero magico es "<< numMagico<<", Despues de "<< count<< " intentos lo lograste."<<endl;

        }
        }

        {
            /* code */
        }
        
    }
// Ejercicio 6
    void conversionCelciusFarenheit()
    {
        float valorCelcius;
        float numeroConversiones;

        
        
        
        
        
        
        cin<<valorCelcius
        cin<<numeroConversiones





    }
// Ejercicio 7
    void serieAritmética()
    {
        int inicio, tamanio, factor, Sn, sum;

        inicio = 1;
        factor = 3;
        tamanio = 25;
        sum = (inicio + (tamanio-1)*factor);
        Sn = (((inicio+sum)/2)*tamanio);
 
        cout << "\nTérmino: "<<inicio<<":"<<Sn;
        cout << "\nValor total de la serie: "<<Sn;
        cout << endl;

         int k = 1;
         int i = inicio;
         while (k++ <= tamanio)
        {
           cout << i << " ";
              i += factor;
        }

    }
// Ejercicio 8
    void mediaGeometricaArmonica()
    {

        int N, numero, producto = 1;
 
        cout << "\nN: "; cin >> N;
 
        cout << endl;
        for (int i = 1; i <= N; i++)
        {
         if (N != 0)
        {
         cout << "Numero " << i << ": ";
        cin >> numero;
         producto *= numero;  
        }
         else if (N == 0)
        {
           break;
        }
        cout << "\nLa media geometrica es: " << sqrt(producto) << endl;
 
        return 0;
    }




int main(){

    int opcion;
    
    do{
        cout<<"Dame la opción deseada \n 1) Problema 1 Opera números \n 2) Números impares \n 3) Suma de numeros pares \n 4) Media aritmetica \n 5) Número mágico \n 6)Conversión Celcius Faremheit \n 7)Serie aritmética \n 8)Media geométrica armónica  \n0) Salida"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                operaNumeros();
                break;   
            case 2:
                numeroImpar();
                break; 
            case 3:
                sumaPares();
                break;
            case 4:
                mediaAritmetica();
                break;
            case 5:
                numeroMagico();
                break;
            case 6:
                conversionCelciusFarenheit();
                break;
            case 7:
                serieAritmetica();
                break;
            case 8:
                mediaGeometricaArmonica();
                break;
            case 0:
                return 1;
                break;
            default:
                cout<<"Opción incorrecta"<<endl;
                break;    
        }
    }while(opcion!=0);
    return 0;
    }