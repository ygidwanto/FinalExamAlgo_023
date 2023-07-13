#include <iostream>
#include <string>
using namespace std;

class Program {
private:
	string stack_array[5];
	int top;

public:
	Program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return"";
		}
		top++;
		stack_array[top] = element;


		cout << endl;
		cout << element << "ditambahkan (pushed)." << endl;

		return;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
			return;
		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int top = top; top >= 0; top--) {
				cout << stack_array[top] << endl;
			}
		}
	}
};

const int MAX_MAHASISWA =100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa();
if (empty()) {
	cout << "\nMenambahkan mahasiswa baru" << endl;
	return;
}
void tampilkanSemuaMahasiswa();
if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int top = top; top >= 0; top--) {
				cout << stack_array[top] << endl;
			}
void algorithmacariMahasiswaByNIM();
int num;
cout << "Enter a number: ";
cin >> num;
cout << endl;
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			cariMahasiswaNIM();
			break;
		case 4:
			tampilkanMahasiswaSesuaiTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}// 2. algoritma stack using arraay dan queue// 3. algoritma stack menggunakan data yang dimasukan awal keluar di akhir// dan algoritma queue menggunakan sistem urutan yang sesuai yaitu data awal keluar di awal// 4. kita menggunakan algoritma stack pada saat ingin mengeluarkan tumpukan data terakhir yang dimana datanya akhir  ingin digunakan terlebih dahulu// 5// a. Kedalaman yang dimiliki tersebut yaitu 7// b. menggunakan metode membaca in order dengan memperoleh pembacaan dari data kiri ke kanan