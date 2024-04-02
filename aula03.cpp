/*<-------------------------------------------Tipos Primitivos------------------------------------------->
    Lógico    - bool            Verdadeiro ou Falso.
   Caractere  - char            Guarda 1(UM) caractere - Para palavras usamos um ARRAY de caracteres.
    Inteiro   - int             Guarda Números Inteiros, positivos e negativos.
   Flutuante  - float           Guarda N´pumeros que possuem casas decimais.
   Flutuante  - double          Tambem guarda numeros com casas decimais, porem com qtd. de casas maior.
   Sem Valor  - void            Específico para uma Variável que não possui valor/tipo.
Textos Longos - wchar_t         TEXTO LONGO PORRA, não tem como ser mais específico que isso.
<-------------------------------------------------------------------------------------------------------->*/
//Acima temos os grupos que vão conter os dados primários, ou seja, estrutura de dados que usamos para formar outras estruturas de dados.
//Sempre que atribuímos um valor a variável, o valor antigo será perdido.
//========================================================================================================
//ABAIXO VAMOS MANIPULAR VARIÁVEIS:
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variável varInt é: " << varInt << endl;
    cout << "O valor da variável c é: " << c << endl;
    cout << "O valor da variável pFllutuante é: " << pFlutuante << endl;
    cout << endl;
    cout << "Memória utilizada por varInt: " << sizeof(varInt) << "bytes" << endl;
    cout << "Memória utilizada por c: " << sizeof(c) << "bytes" << endl;
    cout << "Memória utilizada por pFlutuante: " << sizeof(pFlutuante) << "bytes" << endl;
    system("pause");
    return 0;
}