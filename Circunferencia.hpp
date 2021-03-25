#ifndef CIRCUNFERENCIA
#define CIRCUNFERENCIA

struct Circunferencia {
    double xc;
    double yc;
    double raio;
    
    Circunferencia(int x, int y, int r);
    double calcularArea();
    bool possuiIntersecao(Circunferencia* c);
};
#endif