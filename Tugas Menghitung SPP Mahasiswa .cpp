#include <iostream>
#include <string>
using namespace std;

/* karena pada lembar tugas diperintahkan membuat data 5 array mahasiswa, dan 
saya menangkap perintahnya untuk membuat data 5 orang mahasiswa dengan isi 
nama,prodi, sks, spp tetap dan variabel yang berbeda. Maka tidak adanya 
inputan data dari user, inputan hanya saat percabangan saja. */

// Struktur data untuk menyimpan data mahasiswa
struct Mahasiswa {
  string nama;
  string prodi;
  int jumlah_sks;
  int harga_spp_tetap;
  int harga_spp_variabel;
  int total_spp;
};

// Fungsi untuk menampilkan rincian biaya SPP mahasiswa
void tampilRincianSPP(const Mahasiswa& mhs) {
  cout << " Nama mahasiswa     : " << mhs.nama << endl;
  cout << " Program studi      : " << mhs.prodi << endl;
  cout << " Jumlah SKS         : " << mhs.jumlah_sks << endl;
  cout << " Biaya SPP tetap    : Rp." << mhs.harga_spp_tetap << endl;
  cout << " Biaya SPP variabel : Rp." << mhs.harga_spp_variabel << " / Sks" << endl;
  cout <<" +------------------------------------------------------------+ \n";
};

// Fungsi untuk menghitung total biaya SPP mahasiswa
void hitungTotalSPP(Mahasiswa& mhs) {
  mhs.total_spp = mhs.harga_spp_tetap + (mhs.harga_spp_variabel * mhs.jumlah_sks);
  cout << " Jadi, Total Yang Harus Dibayarkan Sebesar Rp." << mhs.total_spp << endl;
};

int main() {
  // variabel bantu
  int choice;
  
  // Menentukan harga SPP tetap dan variabel untuk prodi a
  int harga_spp_tetap_prodi_a = 2075000;
  int harga_spp_variabel_prodi_a = 140000;

  // Menentukan harga SPP tetap dan variabel untuk prodi b
  int harga_spp_tetap_prodi_b = 2550000;
  int harga_spp_variabel_prodi_b = 180000; 

  // Membuat array untuk menyimpan data mahasiswa
  const int jumlah_mahasiswa = 5;
  Mahasiswa mhs[jumlah_mahasiswa] = {
  {"Andi Ahmad Nurillah", "Informatika", 24, harga_spp_tetap_prodi_a, harga_spp_variabel_prodi_a},
  {"Budi Sutanto", "Informatika", 20, harga_spp_tetap_prodi_a, harga_spp_variabel_prodi_a},
  {"Cindy Agustina Purwandini", "Bachelor Of Informatics", 22, harga_spp_tetap_prodi_b, harga_spp_variabel_prodi_b},
  {"Dedi Muhyadin Pratama", "Informatika", 18, harga_spp_tetap_prodi_a, harga_spp_variabel_prodi_a},
  {"Eka Sulistianti Uge", "Bachelor Of Informatics", 24, harga_spp_tetap_prodi_b, harga_spp_variabel_prodi_b},
  };

  // menu utama
  cout <<" +------------------------------------------------------------+ \n";
  cout <<" +                     Daftar Mahasiswa                       + \n";
  cout <<" +------------------------------------------------------------+ \n";
  
  for (int i = 0; i < jumlah_mahasiswa; i++) {
  cout << " " << (i+1) << ". " << mhs[i].nama << endl;
  };
  
  cout <<" +------------------------------------------------------------+ \n";
  cout <<" Masukan No Anda    : ";
  cin >> choice;
  cout <<" +------------------------------------------------------------+ \n";

  if (choice == 1){
  	tampilRincianSPP(mhs[0]);
  	hitungTotalSPP(mhs[0]);
  } else if (choice == 2){
  	tampilRincianSPP(mhs[1]);
  	hitungTotalSPP(mhs[1]);
  } else if (choice == 3){
  	tampilRincianSPP(mhs[2]);
  	hitungTotalSPP(mhs[2]);
  } else if (choice == 4){
  	tampilRincianSPP(mhs[3]);
  	hitungTotalSPP(mhs[3]);
  } else if (choice == 5){
  	tampilRincianSPP(mhs[4]);
  	hitungTotalSPP(mhs[4]);
  } else {
  	system("cls");
  	cout << " Mohon Maaf, Mahasiswa Tidak Terdaftar !!!" << endl;
	  };
};
