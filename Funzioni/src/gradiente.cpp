#include "../include/function.h"
#include "../include/gradiente.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;


double norma(const Function& f, const double x, const double y){ //calcola e ritorna il valore della norma in double.
    return sqrt(pow(f.dx(x,y),2)+pow(f.dy(x,y),2));
}

double errore(const Function& f, double x, double y){return f.value(x,y) - f.m();} //calcola l'errore per ogni iterazione.

void stampa(const Function& f, const double x, const double y, const int k){ //stampa semplicemente i valori ma utilizzando iomanip in modo da avere una tabella che non sia storta per via dei /t.
    cout << setw(6)  << k
         << "  ("    << setw(14) << x << ", " << setw(14) << y << ")"
         << setw(16) << f.value(x, y)
         << setw(16) << errore(f, x, y)
         << setw(16) << norma(f, x, y)
         << endl;
}

void discesa(const Function& f, const double x0, const double y0, const double passo, const int N, const double T){// la funzione principale che contiene l'algoritmo principale.
    int k = 0; //contatore delle iterazioni
    double  x = x0, //mi definisco le mie due variabili x, y che posso utilizzare senza modificare i valori originali.
            y = y0;

    cout << scientific << setprecision(6);   // imposto il formato della tabella con iomanip, in modo da avere i risultati sul terminale ordinati
    cout << setw(6)  << "k"
         << setw(34) << "p_k"
         << setw(16) << "f(p_k)"
         << setw(16) << "e_k"
         << setw(16) << "||grad f||"
         << endl;
            
    while(k<N && norma(f, x, y)>=T){ //vado avanti finche non raggiungo le iterazioni massime oppure fino a quando il valore è sotto la tolleranza.
        double temp_x = x, temp_y = y; // ho dovuto creare queste due variabili altrimenti avrei modificato x/y intanto che le salvavo.
        k++;

        x-=passo*f.dx(temp_x, temp_y);
        y-=passo*f.dy(temp_x, temp_y);

        if(k % 10==0 || k==N){stampa(f, x, y, k);} //stampo ogni 10 iterazioni o all'ultima prima del blocco per i troppi tentativi 
    }
    if (k == 0 || (k % 10 != 0 && k != N)) { stampa(f, x, y, k); } //stampo l'ultima iterazione solo se non è già stata stampata nel while
    cout << "PUNTO FINALE: p_E = (" << x << "," << y << ")\tf(p_E) = " << f.value(x, y) << endl << endl; //stampo il punto finale
    cout << defaultfloat;   // ripristina il formato normale (tolgo la formattazione per la tabella)
}