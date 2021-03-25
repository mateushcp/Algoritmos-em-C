#include <iostream>
#include <iomanip>
#include "Estudante.hpp"

using namespace std;

float getMenorRSG(float melhoresRSG[3])
{
    int menorRSG = 101;
    for (int i = 0; i < 3; i++) {
        if (melhoresRSG[i] < menorRSG) {
            menorRSG = melhoresRSG[i];
        }
    }
    return menorRSG;
}

int menorRSGIndice(float melhoresRSG[3])
{
    int menorRSG = 101, menorIndice = 0;
    for (int i = 0; i < 3; i++) {
        if (melhoresRSG[i] < menorRSG) {
            menorRSG = melhoresRSG[i];
            menorIndice = i;
        }
    }
    return menorIndice;
}

int maiorRSGIndice(float melhoresRSG[3])
{
    int maiorRSG = 0, maiorIndice = 0;
    for (int i = 0; i < 3; i++) {
        if (melhoresRSG[i] > maiorRSG) {
            maiorRSG = melhoresRSG[i];
            maiorIndice = i;
        }
    }
    return maiorIndice;
}

int main()
{
    Estudante estudantes[10];
    Estudante melhoresEstudantes[3];
    float rsg[10];
    float melhoresRSG[3];
    for (int i = 0; i < 3; i++) {
        melhoresRSG[i] = 0;
    }
    int indice = 0, menorRSG = 0;
    for (int i = 0; i < 10; i++) {
        cin >> estudantes[i].matricula;
        cin >> estudantes[i].nome;
        for (int j = 0; j < 5; j++) {
            cin >> estudantes[i].notas[j];
        }
        rsg[i] = estudantes[i].calcularRSG();
        menorRSG = getMenorRSG(melhoresRSG);
        if (rsg[i] >= menorRSG) {
            if (rsg[i] == menorRSG) {
                for (int j = 0; j < 10; j++) {
                    if (rsg[j] == menorRSG && estudantes[i].matricula < estudantes[j].matricula) {
                        indice = menorRSGIndice(melhoresRSG);
                        melhoresRSG[indice] = rsg[i];
                        melhoresEstudantes[indice] = estudantes[i];
                    }
                }
            } else {
                indice = menorRSGIndice(melhoresRSG);
                melhoresRSG[indice] = rsg[i];
                melhoresEstudantes[indice] = estudantes[i];
            }
        }
    }
    int maiorIndice, menorIndice;
    maiorIndice = maiorRSGIndice(melhoresRSG);
    menorIndice = menorRSGIndice(melhoresRSG);
    cout << melhoresEstudantes[maiorIndice].matricula << " " << melhoresEstudantes[maiorIndice].nome << " " << setprecision (2) << fixed << melhoresRSG[maiorIndice] << endl;
    for (int i = 0; i < 3; i++) {
        if (i != maiorIndice && i != menorIndice) {
            cout << melhoresEstudantes[i].matricula << " " << melhoresEstudantes[i].nome << " " << setprecision (2) << fixed << melhoresRSG[i] << endl;
        }
    }
    cout << melhoresEstudantes[menorIndice].matricula << " " << melhoresEstudantes[menorIndice].nome << " " << setprecision (2) << fixed << melhoresRSG[menorIndice] << endl;
}
