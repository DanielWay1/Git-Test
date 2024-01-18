
#include <iostream>

using namespace std;


int sum(int n);

int product(int n);

int main() {

  // wasn't sure if I was supposed to leave this or not. So I kept it in
  cout << "Hello World!" << endl;


  int n;

  cout << "Please enter a number ";
  cin >> n;

  int sumAnswer = sum(n);
  int prodAnswer = product(n);
  cout << "the sum is: " << sumAnswer << " and the product is: " << prodAnswer << endl;
  
  return 0;
}



int sum(int n) {
  int result = 0;
  
  for (int i = 1; i <= n; i++) {
    result += i;
  }

  return result;
}




int product(int n) {
  int result = 1;

  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}
