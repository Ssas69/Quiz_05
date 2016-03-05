#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

string is_palindrome(string palabra){
  string ans, alreves;
  cout << "Dame la palabra " << endl;
  cin >> palabra;
  int tamano = palabra.length();
  for(int i = tamano-1; i>=0; i--){
    alreves = alreves + palabra[i];
  }
    cout << alreves << endl;
    if(palabra == alreves)
    {
      ans = "Es palindromo ";
    }
    else
    {
      ans = "No es palindromo ";
    }
    return ans;
}
int main(){
  string ans;
  cout << is_palindrome(ans) << endl;
}
