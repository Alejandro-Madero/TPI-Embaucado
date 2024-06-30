#include <iostream>
#include<ctime>

using namespace std;

void tirarNaipes(string naipes[], string mano[],int lengthNaipes, int lengthMano)
{
    srand(time(0));

    int numeroAleatorio = {};
    bool noEstaRepetida = true;

    for(int i = 0; i < lengthMano; i++)
    {
        numeroAleatorio = rand()%lengthNaipes + 1;

        for(int j = 0; j < lengthMano; j++)
        {
            if(mano[j] == naipes[numeroAleatorio] )
            {
               noEstaRepetida = false;
            }
        }
        if(noEstaRepetida)
        {
            mano[i] = naipes[numeroAleatorio];
        }
        noEstaRepetida = true;
    }

}

string tirarCartaEmbaucadora(string naipes[], int length)
{
    srand(time(0));

    return naipes[rand()%length + 1];
}
