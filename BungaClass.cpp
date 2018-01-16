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
	
	cout<<"Bunga Mawar "<< (mawar.warna) << (mawar.tumbuh) << (mawar.bau);
	mawar.berduri("Batang Yang Berduri");
	cout<<"Bunga Anggrek "<< (anggrek.warna) << (anggrek.tumbuh) << (anggrek.bau);
	anggrek.berduri("Batang Yang Tidak Berduri");
	cout<<"Bunga Edelweis "<< (edelweis.warna) << (edelweis.tumbuh) << (edelweis.bau);
	edelweis.berduri("Batang Yang Tidak Berduri");
	
}
void bunga::berduri(string duri){
	cout<<"Memiliki "<<duri<<"\n";
}
