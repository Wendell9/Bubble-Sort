// Atividade N1 Duplas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include<iostream>
#include<cstdlib>
#include <ctime>
#include <iomanip>
#include <random>

using std::endl;
using std::setprecision;
using namespace std;

void ImprimeNumero() {
    std::srand(std::time(nullptr));
    //Define um numero aleatorio inteiro de 0 a 100. No caso o denominador define o limite do valor randomico.
    int a = rand() % 100;
    std::cout << a << endl;

    // Isso cria um gerador de numeros aleatorios com base em alguma fonte de entropia definida pela implementacao 
    // Ele fornece uma semente para o gerador de numeros aleatorios.
    std::random_device rd;
    //Isso inicializa o mecanismo de geracao de numeros aleatorios eng com a semente obtida de rd(), que e um valor de semente aleatorio.
    std::default_random_engine eng(rd());
    //Aqui são definidos os limites dessa geração aleatória. No caso 0 e 100. Além disso o uniform_real_distribution faz com que os numeros que são aleatoriamente
    //gerados sejam do tipo real
    std::uniform_real_distribution<> distr(0, 100);

    std::cout << distr(eng);

}

//O objetivo desse método é receber um vetor desorganizado e organiza-lo por meio do método bubble sort.
//Após isso ele retorna o vetor organizado.
std::vector<int> BubbleSort(std::vector<int> arranjo) {

    int tamanho = arranjo.size();
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arranjo[j] > arranjo[j + 1]) {
                int temp = arranjo[j];
                arranjo[j] = arranjo[j + 1];
                arranjo[j + 1] = temp;
            }
        }
    }
    return arranjo;
}

void VetorAleatorio() {
    std::srand(std::time(nullptr));
    std::vector<int> vetorInt(100);
    //Aqui é criado um vetor de 100 posições aleatórias com limites de 0 a 1000. 
    //Esse vetor é apresentado ao usuario.
    std::cout<<"Vetor Desorganizados"<<endl;
    for (size_t i = 0; i < 100; i++)
    {
        vetorInt[i] = rand() % 1000;
     std::cout << vetorInt[i] << endl;
    }

    std::cout << "Vetor Ordenado" << endl;
    //Aqui o vetor desorganizado passa pelo método bubble sort e retorna um vetor ordenado que é armazenado em cetorOrganizado.
    std::vector<int> vetorOrganizado = BubbleSort(vetorInt);
     
    //Abaixo é impresso o vetor organizado.
    for (size_t i = 0; i < 100; i++)
    {
        std::cout<<vetorOrganizado[i]<<endl;
    }
}

int main()
{
    ImprimeNumero();
}

