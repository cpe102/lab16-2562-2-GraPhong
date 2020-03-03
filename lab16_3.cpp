#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int N);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int N){
	vector<int>A(N);
	for(int i = 0; i< N; i++){
		A[i] = rand()%10;
	}
	return A;
}

void showVector(vector<int>A){
	cout << "[ ";
	for(int i = 0; i<5 ; i++){
		cout << A[i]<<" ";
	}
	cout << " ]";
}

int dotProduct(vector<int>x,vector<int>y){
	int sum=0;
	for(int i = 0; i<5; i++){
		sum += x[i]*y[i];
	}
	return sum;
}