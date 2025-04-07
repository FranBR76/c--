#include <iostream>

#include <string>

using namespace std;

void ex1()
{

    int array[10];

    int i;

    for (i = 0; i < 10; i++)
    {

        cout << "Digite o valor para o indice " << i << " do vetor";

        cin >> array[i];
    }

    int j;

    for (int j = 0; j < 10; j++)
    {

        cout << "Valor salvo no vetor " << j << " = " << array[j] << endl;
    }

    cout << "Valor de tras pra frente \n";

    int g;

    for (int g = 9; g >= 0; g--)
    {

        cout << "Valor salvo no vetor" << g << "= " << array[g] << endl;
    }
}

void ex2()
{

    int array[5];

    int ii;

    for (ii = 0; ii < 5; ii++)
    {

        cout << "Digite o numero para a posicao " << ii << " do vetor" << endl;

        cin >> array[ii];
    }

    int soma = 0;

    for (ii = 0; ii < 5; ii++)
    {

        soma += array[ii];
    }

    cout << "Soma dos valores = " << soma << endl
         << endl;

    cout << "Agora vamos fazer a média destes valores" << endl;

    float media = soma / 5;

    cout << "Média " << media << endl;
}

void ex3()
{

    int array3[10];

    int i3;

    for (i3 = 0; i3 < 10; i3++)
    {

        cout << "Digite o numero para a posicao " << i3 << " do vetor" << endl;

        cin >> array3[i3];
    }

    int num, indice = 0;

    bool numtrue = false;

    cout << "Digite um numero para procurar no array" << endl;

    cin >> num;

    for (int j3 = 0; j3 < 10; j3++)
    {

        if (array3[j3] == num)
        {

            numtrue = true;

            indice = j3;

            break;
        }
    }

    if (numtrue = true)
    {

        cout << "O numero " << num << " se encontra no array " << indice << endl;
    }

    else
    {

        cout << "O numero " << num << " NAO se encontra no array" << endl;
    }
}

void ex4()
{

    int array4[8];

    int i4 = 0;

    int maior, posiM, posim = 0;

    int menor = 999999999;

    for (i4 = 0; i4 < 8; i4++)
    {

        cout << "Digite o numero para a posicao " << i4 << " do vetor" << endl;

        cin >> array4[i4];

        if (array4[i4] > maior)
        {

            maior = array4[i4];

            posiM = i4;
        }

        if (array4[i4] < menor)
        {

            menor = array4[i4];

            posim = i4;
        }
    }

    cout << "O menor numero do array é " << menor << " | Posição " << posim << endl;

    cout << "O maior numero do array é " << maior << " | Posição " << posiM << endl;
}

void ex5()
{

    int array5[10];

    int i5 = 0;

    int par = 0;

    int impar = 0;

    for (i5 = 0; i5 < 10; i5++)
    {

        cout << "Digite o numero para a posicao " << i5 << " do vetor" << endl;

        cin >> array5[i5];

        if (array5[i5] % 2 == 0)
        {

            par++;
        }

        else
        {

            impar++;
        }
    }

    cout << "Quantidade de numeros pares = " << par << endl;

    cout << "Quantidade de numeros impares = " << impar << endl;
}

void ex6()
{

    int array6[5];

    cout << "Digite 5 numeros: ";

    for (int i6 = 0; i6 < 5; i6++)
    {
        cout << "Digite o numero para a posicao " << i6 << " do vetor" << endl;
        cin >> array6[i6];
    }

    int temp = 0;
    for (int i6 = 0; i6 < 5; i6++) {
        for (int i6 = 0; i6 <4 ; i6++)
    {   
        if (array6[i6] > array6[i6 + 1])
        {
            temp = array6[i6];
            array6[i6] = array6[i6 + 1]  ;
            array6[i6 + 1] = temp;
            
        }
    }    
}
    
    char ordem; 

    cout << "Ordenar crescente (C) ou decrescente (D)? ";

    cin >> ordem;
 


    if (ordem == 'C' || ordem == 'c')
    {
        cout << "Numeros crescentes: ";
        for (int i6 = 0; i6 < 5; i6++)
        {
    
            cout << array6[i6] << " ";
        }
        
    }
    else if (ordem == 'D' || ordem == 'd')
    {
        cout << "Numeros decrescentes: ";
        for (int i6 = 4; i6 >= 0; i6--)
        {
            cout << array6[i6] << " ";
        }
    } else {
        cout << "Opcao invalida";
    }

    
}

void ex7()
{

    int array7[5];

    int array7d2[5];

    int array7d3[5];

    int i7, i7d2, i7d3 = 0;

    int j7, j7d2, j7d3 = 0;

    for (i7 = 0; i7 < 5; i7++)
    {

        cout << "Digite o numero para a posicao " << i7 << " do vetor" << endl;

        cin >> array7[i7];
    }

    for (i7d2 = 0; i7d2 < 5; i7d2++)
    {

        cout << "Digite o numero para a posicao " << i7d2 << " do vetor" << endl;

        cin >> array7d2[i7d2];
    }

    for (i7d3 = 0; i7d3 < 5; i7d3++)
    {

        array7d3[i7d3] = array7[i7d3] + array7d2[i7d3];
    }

    cout << endl;

    for (j7 = 0; j7 < 5; j7++)
    {

        cout << "Valor do array 1 na posição  [" << j7 << "] " << array7[j7] << endl;
    }

    cout << endl;

    for (j7d2 = 0; j7d2 < 5; j7d2++)
    {

        cout << "Valor do array 2 na posição [" << j7d2 << "] " << array7d2[j7d2] << endl;
    }

    cout << endl;

    for (j7d3 = 0; j7d3 < 5; j7d3++)
    {
        cout << "Valor da soma na posição [" << j7d3 << "] " << array7d3[j7d3] << endl;
    }
}
void ex8()
{
    int array8[6];
    int i8 = 0;
    int j8 = 0;
    int mult = 0;

    for (i8 = 0; i8 < 6; i8++)
    {

        cout << "Digite o numero para a posicao " << i8 << " do vetor" << endl;

        cin >> array8[i8];
    }

    cout << "Digite um numero para multiplicar " << endl;

    cin >> mult;
    for (j8 = 0; j8 < 6; j8++)
    {
        array8[j8] = array8[j8] * mult;
    }

    cout << endl;
    for (j8 = 0; j8 < 6; j8++)
    {
        cout << "Valor do da multiplicação do array na posição  [" << j8 << "] " << array8[j8] << endl;
    }
}

void ex9()
{

    int matriz[3][3];
    int matriz2[3][3];
    int matriz3[3][3];
    int i9, j9 = 0;
    int i9d2, j9d2 = 0;
    int i9d3, j9d3 = 0;

    for (i9 = 0; i9 < 3; i9++)
    {
        for (j9 = 0; j9 < 3; j9++)
        {

            cout << "Digite o numero para a posicao [" << i9 << "][" << j9 << "] da matriz 1" << endl;

            cin >> matriz[i9][j9];
        }
    }

    for (i9d2 = 0; i9d2 < 3; i9d2++)
    {
        for (j9d2 = 0; j9d2 < 3; j9d2++)
        {
            cout << "Digite o numero para a posicao [" << i9d2 << "][" << j9d2 << "] da matriz 2" << endl;
            cin >> matriz2[i9d2][j9d2];
        }
    }

    for (i9d3 = 0; i9d3 < 3; i9d3++)
    {

        for (j9d3 = 0; j9d3 < 3; j9d3++)
        {
            matriz3[i9d3][j9d3] = matriz[i9d3][j9d3] + matriz2[i9d3][j9d3];
        }
    }
    cout << endl;

    for (i9d3 = 0; i9d3 < 3; i9d3++)
    {
        for (j9d3 = 0; j9d3 < 3; j9d3++)
        {
            cout << "Valor da soma na posição [" << i9d3 << "][" << j9d3 << "] " << matriz3[i9d3][j9d3] << endl;
        }
    }
}

void ex10()
{
    int matriz10[3][2], matrizinvert[2][3];
    cout << "Digite os valores da matriz 3x2: \n";

    for (int i10 = 0; i10 < 3; i10++)
    {
        for (int j10 = 0; j10 < 2; j10++)
        {

            cout << "Insira o valor para a posição [" << i10 << "][" << j10 << " da matriz";
            cin >> matriz10[i10][j10];
        }
    }

    cout << "Matriz: \n";

    for (int i10 = 0; i10 < 3; i10++)
    {
        for (int j10 = 0; j10 < 2; j10++)
        {

            cout << matriz10[i10][j10] << " ";
        }

        cout << endl;
    }

    for (int i10 = 0; i10 < 3; i10++)
    {

        for (int j10 = 0; j10 < 2; j10++)
        {

            matrizinvert[j10][i10] = matriz10[i10][j10];
        }
    }
    cout << "Matriz invertida para 2x3:\n";

    for (int i10 = 0; i10 < 2; i10++)
    {
        for (int j10 = 0; j10 < 3; j10++)
        {
            cout << matrizinvert[i10][j10] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int ex;
    do
    {
        cout << "\n===== Escolha o número do exercicio ==== \n";
        cout << " 1 - Manipulação de Arrays\n 2 - Cálculo com Arrays\n 3 - Busca em Arrays\n 4 - Encontrando o Maior e o Menor Número\n 5 - Contagem de Elementos\n 6 - Ordenação de Arrays\n 7 - Soma de Dois Arrays\n 8 - Multiplicação de Elementos por um Escalar\n 9 - Soma de Duas Matrizes\n 10 - Matriz Transposta\n";
        cout << "==========================================" << endl;
        cin >> ex;

        switch (ex)
        {

        case 1:
            ex1();
            break;

        case 2:
            ex2();
            break;

        case 3:
            ex3();
            break;

        case 4:
            ex4();
            break;

        case 5:
            ex5();
            break;

        case 6:
            ex6();
            break;

        case 7:

            ex7();
            break;

        case 8:
            ex8();
            break;

        case 9:
            ex9();
            break;

        case 10:
            ex10();
            break;

        case 0:

            cout << "Encerrando...";
            break;

        default:
            cout << "Inválido, tente novamente";
        }

    } while (ex != 0);
    return 0;
}