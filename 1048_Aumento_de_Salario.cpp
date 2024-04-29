#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float salario, percentual;
    cin >> salario;

    if (salario >= 0 && salario <= 400) {
        
        percentual = salario * 0.15;
        salario = salario + percentual;
        cout << fixed << setprecision(2) << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << percentual << endl;
        cout << "Em percentual: 15 %" << endl;
        
    } else if (salario > 400 && salario <= 800) {
        
        percentual = salario * 0.12;
        salario = salario + percentual;
        cout << fixed << setprecision(2) << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << percentual << endl;
        cout << "Em percentual: 12 %" << endl;
        
    } else if  (salario > 800 && salario <= 1200) {

        percentual = salario * 0.10;
        salario = salario + percentual;
        cout << fixed << setprecision(2) << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << percentual << endl;
        cout << "Em percentual: 10 %" << endl;
        
    } else if (salario > 800 && salario <= 2000) {

        percentual = salario * 0.07;
        salario = salario + percentual;
        cout << fixed << setprecision(2) << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << percentual << endl;
        cout << "Em percentual: 7 %" << endl;
        
    } else if (salario > 2000) {

        percentual = salario * 0.04;
        salario = salario + percentual;
        cout << fixed << setprecision(2) << "Novo salario: " << salario << endl;
        cout << "Reajuste ganho: " << percentual << endl;
        cout << "Em percentual: 4 %" << endl;
        
    }
    return 0;
}