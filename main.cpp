#include <iostream>
using namespace std;

int main() {
    int i,negativi,p;
    float min,numero,somma,max,media;
    somma=0;
    i=1;
    negativi=0;
    p=0;
     do { 
        cout<<"inserisci un numero"<<endl;
        cin>>numero;
         if ( numero>=0) {
            somma=somma+numero; 
            p=p+1;
         } 
        if (numero<0) {
            negativi=negativi+1;
        } 
        if (i==1) {
            max=numero;
            min=numero;
         }else{ 
            if(numero>max) {
                max=numero;
            } 
            if (numero<min) {
                min=numero;
            }

        }  
        i=i+1;
         }while (numero !=0);
         media=somma/p;
          cout<<"massimo: "<< max <<endl;
          cout<<"minimo: " << min <<endl;
          cout<<"media numeri positivi:"<< media<<endl;
          cout<<"numeri negativi: "<<negativi<<endl;
           }
     }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md