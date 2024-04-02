//Primeiros Passos no C++
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    cout << "Olá Mundo! / Hello Word!" << std::endl;
    system("pause");
    return 0;
}