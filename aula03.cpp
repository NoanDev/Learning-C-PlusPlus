/*<-------------------------------------------Tipos Primitivos------------------------------------------->
    L�gico    - bool            Verdadeiro ou Falso.
   Caractere  - char            Guarda 1(UM) caractere - Para palavras usamos um ARRAY de caracteres.
    Inteiro   - int             Guarda N�meros Inteiros, positivos e negativos.
   Flutuante  - float           Guarda N�pumeros que possuem casas decimais.
   Flutuante  - double          Tambem guarda numeros com casas decimais, porem com qtd. de casas maior.
   Sem Valor  - void            Espec�fico para uma Vari�vel que n�o possui valor/tipo.
Textos Longos - wchar_t         TEXTO LONGO PORRA, n�o tem como ser mais espec�fico que isso.
<-------------------------------------------------------------------------------------------------------->*/
//Acima temos os grupos que v�o conter os dados prim�rios, ou seja, estrutura de dados que usamos para formar outras estruturas de dados.
//Sempre que atribu�mos um valor a vari�vel, o valor antigo ser� perdido.
//========================================================================================================
//ABAIXO VAMOS MANIPULAR VARI�VEIS:
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da vari�vel varInt �: " << varInt << endl;
    cout << "O valor da vari�vel c �: " << c << endl;
    cout << "O valor da vari�vel pFllutuante �: " << pFlutuante << endl;
    cout << endl;
    cout << "Mem�ria utilizada por varInt: " << sizeof(varInt) << "bytes" << endl;
    cout << "Mem�ria utilizada por c: " << sizeof(c) << "bytes" << endl;
    cout << "Mem�ria utilizada por pFlutuante: " << sizeof(pFlutuante) << "bytes" << endl;
    system("pause");
    return 0;
}