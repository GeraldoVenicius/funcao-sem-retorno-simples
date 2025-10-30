#include <iostream>
using namespace std;
int somar(int a, int b) {
    return a + b; 
}
int main() {
    int resultado = somar(5, 3); 
    cout << "A soma é: " << resultado;
    
    return 0;
}
