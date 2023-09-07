#include "Ejercicio02.h"

using namespace std;

bool Palindromo(string& s, int inicio, int final, int contador) {
    if (s.size() == 1 or s.size() == 0) return true;
    if(s[inicio] != s[final]) return false;
    if (contador >= s.size()) return true;
    else if (s[inicio] == s[final]) return Palindromo(s, inicio + 1, final - 1, contador+=2);
}
bool Ejercicio02::isPalindrome(string& s)
{
    int contador = 0;
    return Palindromo(s, 0, s.size()-1, contador);
}
