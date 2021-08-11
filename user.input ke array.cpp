#include <iostream>

using namespace std;

int main(){
	int array[10];

	int length = sizeof(array) / sizeof(array[0]);

	
	for (int i = 0; i < array[length]; i++){
		cout<<"Masukkan Angka ke-"<<i+1<<": ";
		cin>>array[i];
	}

	cout<<"Tampilkan Data Pada array : \n";
	for (int j = 0; j < array[length]; j++){
		cout<<array[j]<<endl;
	}
}