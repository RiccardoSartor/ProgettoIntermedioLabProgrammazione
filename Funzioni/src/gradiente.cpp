#include "../include/function.h"
#include "../include/gradiente.h"
#include <cmath>
#include <iostream>

using namespace std;


double norma(const Function& f, const double x, const double y){
    return sqrt(pow(f.dx(x,y),2)+pow(f.dy(x,y),2));
}

double errore(const Function& f, double x, double y){return f.value(x,y) - f.m();}

void stampa(const Function& f, const double x, const double y, const int k){
    cout<<k<<"\tp_k: ("<<x<<","<<y<<")\t"<<"f(p_k)="<<f.value(x,y)<<"\te_k="<<errore(f, x, y)<<"\tnorma: "<<norma(f, x, y)<<endl;
}

void discesa(const Function& f, const double x0, const double y0, const double passo, const int N, const double T){
    int k = 0; //contatore delle iterazioni
    double  x = x0,
            y = y0;

    while(k<N && norma(f, x, y)>=T){
        double temp_x = x, temp_y = y;
        k++;

        x-=passo*f.dx(temp_x, temp_y);
        y-=passo*f.dy(temp_x, temp_y);

        if(k % 10==0 || k==N){stampa(f, x, y, k);}
    }
    if (k == 0 || (k % 10 != 0 && k != N)) { stampa(f, x, y, k); } //stampo l'ultima iterazione solo se non è già stata stampata nel while
    cout << "PUNTO FINALE: p_E = (" << x << "," << y << ")\tf(p_E) = " << f.value(x, y) << endl; //stampo il punto finale
}