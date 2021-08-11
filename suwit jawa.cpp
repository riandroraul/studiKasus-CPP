#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


	void pilKomp(){
		string pilihan;
		int random;
		srand(time(0));
		random = rand()%3;
		if (random == 0){
			pilihan = "Gajah";
			cout<<pilihan;
		}else if (random == 1){
			pilihan = "Semut";
			cout<<pilihan;
		}else{
			pilihan = "Orang";
			cout<<pilihan;
		}
	}

	void pilPlayer(string pilihanPlayer){
		if (pilihanPlayer == "1"){
			pilihanPlayer = "Gajah";
			cout<<pilihanPlayer;
		}else if (pilihanPlayer == "2"){
			pilihanPlayer = "Semut";
			cout<<pilihanPlayer;
		}else{
			pilihanPlayer = "Orang";
			cout<<pilihanPlayer;
		}
	}

int main(){
	// int i = 0;
	// cout<<random;
	// while(i <10){
	// 	random = rand()%3;
 // 		printf("%i : %i \n", i, random);
 // 		i++;
	// }

	cout<<"\n==========================================================\n";
	cout<<"==================GAME SUWIT JAWA VESI 1==================\n";
	cout<<"==========================================================\n";
	string pil;
	cout<<"\n1. Gajah\n";
	cout<<"\n2. Semut\n";
	cout<<"\n3. Orang\n";
	cout<<"Pilih (1-3) : ";
	cin>>pil;
	pilPlayer(pil);

	// bandingkan pilihan player dengan pilihan komputer
	if (pilPlayer(pil) == pilKomp){
		cout<<"Hasil Seri";
		if (pilKomp() == "Gajah" || pilPlayer(pil) == "Semut"){
			cout<<"Anda Menang";
		}
	}

	// pilKomp();

}
