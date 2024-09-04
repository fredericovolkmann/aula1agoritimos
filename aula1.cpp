#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0, number;
    // pedir para o usuariodigitar o numero 
    cout <<"digite o número  de  elementos: ";
    cin >>  n;

    // o loop para ler e calcular a soma dos numeros 
    for(int i =1;i<=n;++i) {
        cout << "digite o numero" << i <<":";
        cin >> number;
        sum += number;
    }
     //calcula e exibe a  media 
     double media = sum / n;
     cout << "a media é: "<<media<<endl;
     return 0;
}
