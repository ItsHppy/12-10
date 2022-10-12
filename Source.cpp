#include <iostream>
using namespace std;
int main() {
	//for1
	/*int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i = i + 1) {
		cout << K << endl;
	 }*/
	//for2
	/*int A, B;
	int n = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i = i + 1) {
		cout << i << " ";
		n++;
	}
	cout << "qty = " << n << endl;*/
	//for3
	/*int A, B;
	int n = 0;
	cin >> A >> B;
	for (int i = B - 1; i > A; i = i - 1) {
		cout << i << " ";
		n++;
	}
	cout << "qty = " << n << endl;*/
	//for4
	/*double price;
	cin >> price;
	for (int weight = 1; weight <= 10; weight++) {
		cout << weight << " kg costs " << weight * price << " $" << endl;
	}*/
	//for5
	/*double price;
	cin >> price;
	for (double weight = 0.1; weight <= 1; weight = weight + 0.1) {
		cout << weight << " kg costs " << weight * price << " $" << endl;
	}*/
	//for6
	/*double price;
	cin >> price;
	for (double weight = 1; weight <= 2; weight = weight + 0.2) {
		cout << weight << " kg costs " << weight * price << " $" << endl;
	}*/
	//for7
	/*int A, B;
	int s = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		s += i;
	}
	cout << s << endl;*/
	//for8
	/*int A, B;
	int s = 1;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		s *= i;
	}
	cout << s << endl;*/
	//for9
	/*int A, B;
	int s = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		s += i * i;
	}
	cout << s << endl;*/
	//for10
	int N;
	int s = 0;
	cin >> N;
	for (double i = 1; i <= N; i++) {
		s += 1.0 / i;
	}
	cout << s << endl;
}