#include <iostream>
using namespace std;

// Função recursiva para calcular o n-ésimo número da sequência de Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Função recursiva para verificar se o número pertence à sequência de Fibonacci
bool pertenceFibonacci(int num, int n = 0) {
    int fib = fibonacci(n);
    if (fib == num)
        return true;
    if (fib > num)
        return false;
    return pertenceFibonacci(num, n + 1);
}

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (pertenceFibonacci(num)) {
        cout << "O numero " << num << " pertence a sequencia de Fibonacci" << endl;
    } else {
        cout << "O numero " << num << " nao pertence a sequencia de Fibonacci" << endl;
    }

    return 0;
}
