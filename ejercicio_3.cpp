#include <iostream>
using namespace std;
int cal, num;
long long a;

int main(){
	cout << "Number: ";
	cin >> a;
	for(int i= 1; i <= 10000; i++){
		if (a%i == 0){
			cout << i << ' ';
			num = i;
    }
  }
  cout << "\nThe largest prime is: " << num;
}

