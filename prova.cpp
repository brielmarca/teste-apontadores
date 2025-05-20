#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    // Questão a) Listagem usando ponteiro
    cout << "Questão a) Listagem usando ponteiro:\n";
    int x[5] = {10, 11, 12, 13, 14};
    int* p = x;
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << "\n";
    }
    
    // Questão b) Soma usando ponteiro
    cout << "\nQuestão b) Soma do array:\n";
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += *(p + i);
    }
    cout << "Soma: " << soma << "\n";
    
    // Questão c) Média usando ponteiro
    cout << "\nQuestão c) Média do array:\n";
    double media = static_cast<double>(soma) / 5;
    cout << "Média: " << media << "\n";
    
    // Questão d) Declaração de ponteiro para soma
    cout << "\nQuestão d) Declaração de ponteiro para soma:\n";
    int* q = x;
    soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += *(q + i);
    }
    cout << "Soma: " << soma << "\n";
    
    // Questão e) Média usando ponteiro declarado
    cout << "\nQuestão e) Média usando ponteiro declarado:\n";
    media = static_cast<double>(soma) / 5;
    cout << "Média: " << media << "\n";
    
    // Questão f) Introduzindo novos valores
    cout << "\nQuestão f) Introduzindo novos valores:\n";
    int y[5];
    for (int i = 0; i < 5; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> y[i];
    }
    cout << "Valores introduzidos:\n";
    for (int i = 0; i < 5; i++) {
        cout << y[i] << "\n";
    }
    
    // Questão g) Acessando x[0] e x[4] com ponteiro
    cout << "\nQuestão g) Acessando x[0] e x[4] com ponteiro:\n";
    int* r = x;
    cout << "Valor de x[0]: " << *r << "\n";
    cout << "Valor de x[4]: " << *(r + 4) << "\n";
    
    // Questão h) Acessando x[0], x[2] e x[4] com ponteiro
    cout << "\nQuestão h) Acessando x[0], x[2] e x[4] com ponteiro:\n";
    cout << "Valor de x[0]: " << *r << "\n";
    cout << "Valor de x[2]: " << *(r + 2) << "\n";
    cout << "Valor de x[4]: " << *(r + 4) << "\n";
    
    // Questão i) Maior e menor valor usando ponteiro
    cout << "\nQuestão i) Maior e menor valor usando ponteiro:\n";
    int maior = *r;
    int menor = *r;
    for (int i = 0; i < 5; i++) {
        if (*(r + i) > maior) {
            maior = *(r + i);
        }
        if (*(r + i) < menor) {
            menor = *(r + i);
        }
    }
    cout << "Maior valor: " << maior << "\n";
    cout << "Menor valor: " << menor << "\n";
    
    return 0;
}