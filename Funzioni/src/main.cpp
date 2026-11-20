#include <iostream>
#include <cctype>
#include "../include/function.h" 
#include "../include/gradiente.h"

using namespace std;

int main() {
    char    continua;
    int     num_funz = 0;
    double  x_0 = 0.0, 
            y_0 = 0.0,
            a   = 0.0,      //passo
            T   = 0.0;      //soglia di tolleranza
    int     N = 0;          //iterazioni massime

    do{
        do {
            cout 
                << "Scegli la funzione (1-8)"                   << endl
                << "1: f1(x,y) = (x^2 + y^2) / 2"               << endl
                << "2: f2(x,y) = (x^2 + 16*y^2) / 2"            << endl
                << "3: f3(x,y) = (x^2 - 1)^2 + y^2"             << endl
                << "4: f4(x,y) = (x^2 - 1)^2 + (x-1)^2/5 + y^2" << endl
                << "5: f5(x,y) = 4 * sinh^2(x/2) + y^2"         << endl
                << "6: f6(x,y) = ln(1 + x^2 + y^2)"             << endl
                << "7: f7(x,y) = 1 - exp(-(x^2 + y^2))"         << endl
                << "8: f8(x,y) = 2 - cos(pi*x) - cos(pi*y)"     << endl;
            cout << "Numero funzione: ";
            cin >> num_funz;

            if (num_funz < 1 || num_funz > 8) {cout << "Numero funzione non valido"<<endl<<endl;}

        }while (num_funz < 1 || num_funz > 8);

        cout << "Coordinate iniziali x_0: ";
        cin >> x_0;

        cout << "Coordinate iniziali y_0: ";
        cin >> y_0;

        cout << "Passo a: ";
        cin >> a;
        
        cout << "Numero massimo di iterazioni: ";
        cin >> N;

        cout << "Soglia di tolleranza: ";
        cin >> T;

        switch (num_funz) {
            case 1: { 
                Function1 f; 
                discesa(f, x_0, y_0, a, N, T);
                break; 
            }
            case 2: { 
                Function2 f; 
                discesa(f, x_0, y_0, a, N, T);
                break; 
            }
            case 3: { 
                Function3 f; 
                discesa(f, x_0, y_0, a, N, T);
                break; 
            }
            case 4: { 
                Function4 f; 
                discesa(f, x_0, y_0, a, N, T); 
                break; 
            }
            case 5: { 
                Function5 f; 
                discesa(f, x_0, y_0, a, N, T); 
                break; 
            }
            case 6: { 
                Function6 f; 
                discesa(f, x_0, y_0, a, N, T); 
                break; }
            case 7: { 
                Function7 f; 
                discesa(f, x_0, y_0, a, N, T); 
                break; 
            }
            case 8: { 
                Function8 f; 
                discesa(f, x_0, y_0, a, N, T);
                break; 
            }
        }

        cout << "Vuoi eseguire un altro test? (s/n): ";
        cin >> continua;
        cout << endl;
    }while (continua == 's' || continua == 'S');

    return 0;
}