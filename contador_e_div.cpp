#include <iostream>
using namespace std;
int num;
int main(){
//cria uma sequência de numeros de 0 a 100
    for (int num = 0; num < 101;num++) {
    cout << num<<" \n";
   //verifica se é multipo de 3
    if (num % 3 == 0){
      cout << " Foo\n" ;
    }
    //verifica se é multipo de 5
   if (num % 5 == 0){ 
       cout << " Baa\n";
    }
  }
  return 0;
}

