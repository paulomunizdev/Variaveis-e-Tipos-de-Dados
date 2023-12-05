#include <iostream>
#include <string>

using namespace std;

int main() {
    // Tipos de Dados Fundamentais
    int idade;               // Declaração de uma variável inteira chamada 'idade'
    idade = 25;              // Atribuição de valor à variável 'idade'

    float altura;            // Declaração de uma variável de ponto flutuante chamada 'altura'
    altura = 1.89;           // Atribuição de valor à variável 'altura'

    double salario;          // Declaração de uma variável de ponto flutuante de precisão dupla chamada 'salario'
    salario = 50000.50;       // Atribuição de valor à variável 'salario'

    char letra;              // Declaração de uma variável do tipo caractere chamada 'letra'
    letra = 'A';             // Atribuição de valor à variável 'letra'

    // Exibir Tipos de Dados Fundamentais
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Salario: $" << salario << endl;
    cout << "Letra: " << letra << endl;

    // Tipos de Dados Modificadores
    short numeroCurto;        // Declaração de uma variável inteira curta chamada 'numeroCurto'
    numeroCurto = 10;          // Atribuição de valor à variável 'numeroCurto'

    long numeroLongo;         // Declaração de uma variável inteira longa chamada 'numeroLongo'
    numeroLongo = 1000000;     // Atribuição de valor à variável 'numeroLongo'

    unsigned int apenasPositivo;  // Declaração de uma variável inteira sem sinal chamada 'apenasPositivo'
    apenasPositivo = 50;           // Atribuição de valor à variável 'apenasPositivo'

    // Exibir Tipos de Dados Modificadores
    cout << "Numero Curto: " << numeroCurto << endl;
    cout << "Numero Longo: " << numeroLongo << endl;
    cout << "Apenas Positivo: " << apenasPositivo << endl;

    // Tipos de Dados Derivados
    int numeros[5] = {1, 2, 3, 4, 5};  // Declaração e inicialização de um array de inteiros chamado 'numeros'

    int *ponteiro;            // Declaração de um ponteiro para inteiro chamado 'ponteiro'
    ponteiro = &idade;        // Atribuição do endereço de 'idade' ao ponteiro

    int &referencia = idade;  // Declaração de uma referência para 'idade'

    // Exibir Tipos de Dados Derivados
    cout << "Numeros Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Ponteiro: " << *ponteiro << endl;   // Valor apontado pelo ponteiro
    cout << "Referencia: " << referencia << endl;  // Valor referenciado

    // Tipos de Dados Compostos
    struct Pessoa {
        string nome;
        int idade;
    };

    Pessoa pessoa;           // Declaração de uma estrutura chamada 'Pessoa'
    pessoa.nome = "Paulo";    // Atribuição de valor ao membro 'nome'
    pessoa.idade = 30;       // Atribuição de valor ao membro 'idade'

    // Exibir Tipos de Dados Compostos
    cout << "Nome da Pessoa: " << pessoa.nome << ", Idade: " << pessoa.idade << " anos" << endl;

    union Dado {
        int inteiro;
        float flutuante;
    };

    Dado dado;               // Declaração de uma união chamada 'Dado'
    dado.inteiro = 42;       // Atribuição de valor ao membro 'inteiro' da união

    // Exibir Tipo de Dados Compostos
    cout << "Dado Inteiro: " << dado.inteiro << endl;

    // Tipo de Dados Enumerado
    enum DiaDaSemana {
        SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO
    };

    DiaDaSemana hoje = TERCA;  // Declaração e inicialização de uma variável enum chamada 'hoje'

    // Exibir Tipo de Dados Enumerado
    cout << "Dia da Semana Atual: " << hoje << endl;

    return 0;
}
