#include <iostream>
#include <string>
using namespace std;

class bunga{
	public:
		void berduri(string duri);
		string warna, tumbuh, bau;
};

int main(){
	bunga mawar, anggrek, edelweis;
	
	mawar.warna = "Berwarna Putih dan Merah ";
	anggrek.warna = "Berwarna Ungu dan Putih ";
	edelweis.warna = "Berwarna Putih ";
	
	mawar.tumbuh = "Tumbuhnya Di Dataran Rendah ";
	anggrek.tumbuh = "Tumbuhnya Di Dataran Tinggi dan Rendah ";
	edelweis.tumbuh = "Tumbuhnya Di Pegunungan ";
	
	mawar.bau = "Baunya Sangat Harum ";
	anggrek.bau = "Baunya Harum ";
	edelweis.bau = "Baunya Harum ";
	
};
