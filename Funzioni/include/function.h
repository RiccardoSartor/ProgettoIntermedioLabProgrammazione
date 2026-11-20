#ifndef FUNCTION_H //Controlla se la macro non è ancora stata definita.
#define FUNCTION_H //Definisce la macro per segnalare che il file è già sttao incluso.

class Function { //Dichiaro una classe chiamata Function
    public:
        virtual double value(double x , double y)   const = 0;//virtual permette di usare polimorfismo dinamico.
        virtual double dx(double x, double y)       const = 0;    //const impedice di modificare i membri dell'oggetto in cui viene chiamato.
        virtual double dy(double x, double y)       const = 0;    //= 0 indica che il metodo è una funzione virtuale pura.
        virtual double m()                          const = 0;

        virtual ~Function() = default;  //Distruttore virtuale.
};

class Function1 : public Function { //Function uno è una classe derivata di Function.
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function2 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function3 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function4 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function5 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function6 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function7 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

class Function8 : public Function {
    public: 
        double value(double x , double y)   const override;
        double dx(double x, double y)       const override;
        double dy(double x, double y)       const override;
        double m()                          const override;
};

#endif //Chiude il blocco condizionale (se la macro è gia stata definita salta il codice e finisce qua).