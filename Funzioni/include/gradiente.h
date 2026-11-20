#ifndef GRADIENTE_H //Controlla se la macro non è ancora stata definita.
#define GRADIENTE_H //Definisce la macro per segnalare che il file è già sttao incluso.
#include "function.h"

void discesa(const Function& f, const double x0, const double y0, const double passo, const int N, const double T);
//Non serve definire anche le altre funzioni in quanto, dato che non sono state utilizzate direttamente nel main non è necessario esplicitarle 
//il linker non cercherà mai di associarle fineche non vengono usate lì.

#endif //Chiude il blocco condizionale (se la macro è gia stata definita salta il codice e finisce qua).