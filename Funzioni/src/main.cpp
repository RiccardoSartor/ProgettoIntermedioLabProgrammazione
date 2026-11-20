#include <iostream>
#include <cctype>
#include "../include/function.h" 

using namespace std;

int main() {
    char    continua;
    int     num_funz = 0;
    double  x_0 = 0.0, 
            y_0 = 0.0,
            a   = 0.0,
            T   = 0.0;
    int     N = 0;

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

        cout << "Coordinate iniziali x_0: "<<endl;
        cin >> x_0;

        cout << "Coordinate iniziali y_0: "<<endl;
        cin >> y_0;

        cout << "Passo a: "<<endl;
        cin >> a;
        
        cout << "Numero massimo di iterazioni: "<<endl;
        cin >> N;

        cout << "Soglia di tolleranza: "<<endl;
        cin >> T;

        switch (num_funz) {
            case 1: { 
                Function1 f; 
                /**/; 
                break; 
            }
            case 2: { 
                Function2 f; 
                /**/; 
                break; 
            }
            case 3: { 
                Function3 f; 
                /**/; 
                break; 
            }
            case 4: { 
                Function4 f; 
                /**/; 
                break; 
            }
            case 5: { 
                Function5 f; 
                /**/; 
                break; 
            }
            case 6: { 
                Function6 f; 
                /**/; 
                break; }
            case 7: { 
                Function7 f; 
                /**/; 
                break; 
            }
            case 8: { 
                Function8 f; 
                /**/; 
                break; 
            }
        }

        cout << "Vuoi eseguire un altro test? (s/n): ";
        cin >> continua;
        cout << endl;
        continua = static_cast<char>(tolower(static_cast<unsigned char>(continua))); //converte l'eventuale carattere maiuscolo in minuscolo
    }while (continua == 's');

    return 0;
}
