#include <cmath>
#include "Circunferencia.hpp"

Circunferencia::Circunferencia(int x, int y, int r) {
    xc = x;
    yc = y;
    raio = r;
}

double Circunferencia::calcularArea() {
    return 3.14 * raio * raio;
}

bool Circunferencia::possuiIntersecao(Circunferencia* c) {
    double dist = ((xc - c->xc) * (xc - c->xc)) + ((yc - c->yc) * (yc - c->yc));
    if (dist < 0) {
        dist = dist * -1;
    }
    dist = sqrt(dist);
    if (dist <= raio + c->raio) return true;
    return false;
}
