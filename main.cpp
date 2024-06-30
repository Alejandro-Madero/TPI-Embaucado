#include <iostream>
#include "funciones.h"
#include <ctime>

using namespace std;

int main()
{
    const int TOTAL_NAIPES = 20;
    const int TOTAL_MANO = 5;
    string cartaEmbaucadora = "";

    string naipes[TOTAL_NAIPES] = {
        "10-Corazon", "J-Corazon", "Q-Corazon", "K-Corazon", "A-Corazon",
        "10-Diamantes", "J-Diamantes", "Q-Diamantes", "K-Diamantes", "A-Diamantes",
        "10-Picas", "J-Picas", "Q-Picas", "K-Picas", "A-Picas",
        "10-Treboles", "J-Treboles", "Q-Treboles", "K-Treboles", "A-Treboles"};
    string mano1[TOTAL_MANO] = {}, mano2[TOTAL_MANO] = {};

    tirarNaipes(naipes, mano1, TOTAL_NAIPES, TOTAL_MANO);
    tirarNaipes(naipes, mano2, TOTAL_NAIPES, TOTAL_MANO);

    cartaEmbaucadora = tirarCartaEmbaucadora(naipes, TOTAL_NAIPES);

    cout << "carta Embaucadora: " << cartaEmbaucadora << endl;

    for (int i = 0; i < TOTAL_MANO; i++)
    {
        cout << mano1[i] << endl;
    }
    cout << "---------------------------" << endl;
    for (int i = 0; i < TOTAL_MANO; i++)
    {
        cout << mano2[i] << endl;
    }

    return 0;
}
