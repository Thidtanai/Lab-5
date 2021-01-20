#include <iostream>
#include <string>
using namespace std;

int main(){
	string text1, text2;
	int N;
	int count = 0;
	cout << "Enter first text: ";getline(cin,text1);
	cout << "Enter second text: ";getline(cin,text2);
	cout << "Enter N: ";cin >> N;
	while(count < N){
		if(count%2 == 0)cout << text1 << " ";
		else cout << text2 << " ";
		count++;
	}
	return 0;
}