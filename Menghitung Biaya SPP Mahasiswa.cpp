#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk menyimpan data mahasiswa
struct Mahasiswa {
  string nama;
  string prodi;
  int jumlah_sks;
  int harga_spp_tetap;
  int harga_spp_variabel;
};

void rincian_Total_SPP(const Mahasiswa& mhs) {
  // Membuat array untuk menyimpan data mahasiswa
  int jumlah_mahasiswa = 5;
  Mahasiswa mhs_array[jumlah_mahasiswa] = {
    {"Andi Ahmad Nurillah", "Informatika", 24, 2075000, 140000},
    {"Budi Sutanto", "Bachelor Of Informatics", 24, 2550000, 180000},
    {"Cindy Agustina Purwandini", "Hubungan Internasional", 24, 1475000, 140000},
    {"Dedi Muhyadin Pratama", "Informatika", 24, 2075000, 140000},
    {"Eka Sulistianti Uge", "Bachelor Of Informatics ", 24, 2550000, 180000},
	};
  
  // Percabangan rincian dan total SPP sesuia array diatas
  if (mhs.nama == "1"){
    cout << " Nama               : " << mhs_array[0].nama << endl;
    cout << " Prodi              : " << mhs_array[0].prodi << endl;
    cout << " SKS                : " << mhs_array[0].jumlah_sks << endl;
    cout << " Harga Sks Tetap    : " <<"Rp." << mhs_array[0].harga_spp_tetap << endl;
    cout << " Harga Sks Variabel : " <<"Rp." << mhs_array[0].harga_spp_variabel << " / Sks" << endl;
    cout <<" +------------------------------------------------------------+ \n";
    cout << " Jadi, Total Yang Harus Dibayarkan Sebesar Rp." 
	<< mhs_array[0].harga_spp_tetap + ( mhs_array[0].harga_spp_variabel* mhs_array[0].jumlah_sks) << endl;
	
  } else if (mhs.nama == "2") {
    cout << " Nama               : " << mhs_array[1].nama << endl;
    cout << " Prodi              : " << mhs_array[1].prodi << endl;
    cout << " SKS                : " << mhs_array[1].jumlah_sks << endl;
    cout << " Harga Sks Tetap    : " <<"Rp." << mhs_array[1].harga_spp_tetap << endl;
    cout << " Harga Sks Variabel : " <<"Rp." << mhs_array[1].harga_spp_variabel << " / Sks" << endl;
    cout <<" +------------------------------------------------------------+ \n";
    cout << " Jadi, Total Yang Harus Dibayarkan Sebesar Rp." 
	<< mhs_array[1].harga_spp_tetap + ( mhs_array[1].harga_spp_variabel* mhs_array[1].jumlah_sks) << endl;
	
  } else if (mhs.nama == "3") {
  	cout << " Nama               : " << mhs_array[2].nama << endl;
    cout << " Prodi              : " << mhs_array[2].prodi << endl;
    cout << " SKS                : " << mhs_array[2].jumlah_sks << endl;
    cout << " Harga Sks Tetap    : " <<"Rp." << mhs_array[2].harga_spp_tetap << endl;
    cout << " Harga Sks Variabel : " <<"Rp." << mhs_array[2].harga_spp_variabel << " / Sks" << endl;
    cout <<" +------------------------------------------------------------+ \n";
    cout << " Jadi, Total Yang Harus Dibayarkan Sebesar Rp." 
	<< mhs_array[2].harga_spp_tetap + ( mhs_array[2].harga_spp_variabel* mhs_array[2].jumlah_sks) << endl;
	
  } else if (mhs.nama == "4") {
  	cout << " Nama               : " << mhs_array[3].nama << endl;
    cout << " Prodi              : " << mhs_array[3].prodi << endl;
    cout << " SKS                : " << mhs_array[3].jumlah_sks << endl;
    cout << " Harga Sks Tetap    : " <<"Rp." << mhs_array[3].harga_spp_tetap << endl;
    cout << " Harga Sks Variabel : " <<"Rp." << mhs_array[3].harga_spp_variabel << " / Sks" << endl;
    cout <<" +------------------------------------------------------------+ \n";
    cout << " Jadi, Total Yang Harus Dibayarkan Sebesar Rp." 
	<< mhs_array[3].harga_spp_tetap + ( mhs_array[3].harga_spp_variabel* mhs_array[3].jumlah_sks) << endl;
	
  } else if (mhs.nama == "5"){
  	cout << " Nama               : " << mhs_array[4].nama << endl;
    cout << " Prodi              : " << mhs_array[4].prodi << endl;
    cout << " SKS                : " << mhs_array[4].jumlah_sks << endl;
    cout << " Harga Sks Tetap    : " <<"Rp." << mhs_array[4].harga_spp_tetap << endl;
    cout << " Harga Sks Variabel : " <<"Rp." << mhs_array[4].harga_spp_variabel << " / Sks" << endl;
    cout <<" +------------------------------------------------------------+ \n";
    cout << " Jadi, Total Yang Harus Dibayarkan Sebesar Rp." 
	<< mhs_array[4].harga_spp_tetap + ( mhs_array[4].harga_spp_variabel* mhs_array[4].jumlah_sks) << endl;
	
	}
}


int main() {
  Mahasiswa mhs;

  // Menu output
  menu:
  cout <<" +------------------------------------------------------------+ " << endl;
  cout <<" +                     Daftar Mahasiswa                      + " << endl;
  cout <<" +------------------------------------------------------------+ \n";
  cout <<" 1. Andi Ahmad Nurillah " << endl;
  cout <<" 2. Budi Sutanto " << endl;
  cout <<" 3. Cindy Agustina Purwandini " << endl;
  cout <<" 4. Dedi Muhyadin Pratama " << endl;
  cout <<" 5. Eka Sulistianti Uge " << endl;
  cout <<" +------------------------------------------------------------+ \n";
  cout <<" No Nama Anda    : ";	
  getline(cin, mhs.nama);;
  cout <<" +------------------------------------------------------------+ \n";
  rincian_Total_SPP(mhs);
  
}


