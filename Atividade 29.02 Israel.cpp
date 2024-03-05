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
    int a = rand() % 100;
    std::cout << a << endl;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<> distr(0, 100);

    std::cout << distr(eng);

}

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
    for (size_t i = 0; i < 100; i++)
    {
        vetorInt[i] = rand() % 1000;
    std:cout << vetorInt[i] << endl;
    }

    std::cout << "Vetor Ordenado" << endl;
    std::vector<int> vetorOrganizado = BubbleSort(vetorInt);

    for (size_t i = 0; i < 100; i++)
    {
        std::cout<<vetorOrganizado[i]<<endl;
    }
}

int main()
{
    VetorAleatorio();
}

