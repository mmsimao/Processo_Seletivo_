#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h> 
#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

/*int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);*/

main()
{
    int INDICE = 13;
    int SOMA = 0;
    int K = 0;

    while(K<INDICE)
    {
        K = K+1;
        SOMA = SOMA + K;
    }

    cout<<SOMA;

    
}
