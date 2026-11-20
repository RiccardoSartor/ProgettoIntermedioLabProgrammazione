#include <iostream>
#include "function.h" 

using namespace std;

int main() {
    char continua = 's';
    int num_funz = 0;
    double x_0 = 0.0, y_0 = 0.0;
    double a = 0.0;
    int N = 0;
    double T = 0.0;

    while (continua == 's' or continua == 'S') {
        do {
            cout << "Scegli la funzione (1-8)\n";
            cout << "1: f1(x,y) = (x^2 + y^2) / 2\n";
            cout << "2: f2(x,y) = (x^2 + 16*y^2) / 2\n";
            cout << "3: f3(x,y) = (x^2 - 1)^2 + y^2\n";
            cout << "4: f4(x,y) = (x^2 - 1)^2 + (x-1)^2/5 + y^2\n";
            cout << "5: f5(x,y) = 4 * sinh^2(x/2) + y^2\n";
            cout << "6: f6(x,y) = ln(1 + x^2 + y^2)\n";
            cout << "7: f7(x,y) = 1 - exp(-(x^2 + y^2))\n";
            cout << "8: f8(x,y) = 2 - cos(pi*x) - cos(pi*y)\n";

            cout << "\nNumero funzione: ";
            cin >> num_funz;

            

            if (num_funz < 1 or num_funz > 8) {
                cout << "Numero funzione non valido\n\n";
            }

        } while (num_funz < 1 || num_funz > 8);

        cout << "\nCoordinate iniziali x_0: ";
        cin >> x_0;

        cout << "\nCoordinate iniziali y_0: ";
        cin >> y_0;

        cout << "\nPasso a: ";
        cin >> a;
        
        cout << "\nNumero massimo di iterazioni: ";
        cin >> N;

        cout << "\nSoglia di tolleranza: ";
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

        cout << "\nVuoi eseguire un altro test? (s/n): ";
        cin >> continua;
        cout << "\n";
    }

    return 0;
}
