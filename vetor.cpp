#include<iostream>

using namespace std;


int main() {

  float *notas, soma = 0, menorNota = 10, maiorNota = 0;
  int tamanho, contador = 0;

  cout << "Digital o tamanho do vetor: ";
  cin >> tamanho;

  notas = new float[tamanho];

  for (int indice = 0; indice < tamanho; indice++) {
    cout << "Digite nota " << indice + 1 << ": ";
    cin >> notas[indice];
    soma = soma + notas[indice];
    contador++;

    if (notas[indice] > maiorNota) {
      maiorNota = notas[indice];
    } else if (notas[indice] < menorNota) {
      menorNota = notas[indice];
    }

  }

  cout << "Média das notas: " << soma/contador << endl;
  cout << "Maior nota: " << maiorNota << endl;
  cout << "Menor nota: " << menorNota << endl;

  return 0;
}
