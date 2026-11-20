Gruppo iPhoneDiuo
Partecipanti: Bison Tommaso, Bonora Alessandro, Sartor Riccardo

Contributi per partecipante:

Bison Tommaso:
    scritto function.h, function.cpp
    commentato function.h, function.cpp

Bonora Alessandro:
    scritto main.cpp
    calcolato tutti i minimi delle funzioni

Sartor Riccardo
    scritto gradiente.cpp, gradiente.h
    commentato gradiente.cpp, gradiente.h, main.cpp


Compilazione:
Il codice è stato testato sulla macchina virtuale "VLab/Taliercio.2020".
Con il terminale dalla posizione "src" sono stati dati i seguenti comandi:
    g++ main.cpp gradiente.cpp function.cpp -o main
    ./main

Sono stati effettutati i seguenti test:
    Funzione	x₀      y₀	        a	    N	           T
    1	        4	    2	        0.2	    1000	0.000001
    1	        4	    2	        0.2	    20	    0.000001
    1	        0	    0	        0.2	    1000	0.000001
    1	        4	    2	        2.5	    100	    0.000001
    2	        -3	    4	        0.08	1000	0.000001
    2	        -3	    4	        0.2	    100	    0.000001
    3	        1.5     1	        0.05	1000	0.000001
    3	        -0.5	-1	        0.05	1000	0.000001
    3	        0	    1	        0.05	1000	0.000001
    4	        1.5	    1	        0.05	1000	0.000001
    4	        -1	    1	        0.05	1000	0.000001
    5	        2	    -2	        0.15	1000	0.000001
    5	        4	    0	        0.15	100	    0.000001
    6	        4	    4	        0.3	    1000	0.000001
    7	        1	    1	        0.2	    1000	0.000001
    7	        3	    3	        0.2	    1000	0.000001
    8	        0.5	    -0.5	    0.1	    1000	0.000001
    8	        2.5	    3.5	        0.1	    1000	0.000001
    8	        3	    3	        0.1	    1000	0.000001