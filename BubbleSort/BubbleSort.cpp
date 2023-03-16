#include <iostream>
using namespace std;

int a[20];   // Deklarasi array a dengan ukuran 20
int n;       // Deklarasi variabel n untuk menyimpan banyaknya elemen pasa array


void input() {         // Method untuk looping
	while (true) {     // Looping
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)   // Jika n kurang dari atau sama dengan 20
			break;     // Keluar Loop
		else {         // Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=====================" << endl;


	for (int i = 0; i < n; i++) {      // Lopping dengan i dimulai dari 0 hingga n-1
		cout << "Data Ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
}


void display() {       // Mrthod menampilkan hasil
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang trlah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {     // Looping dengan j dimulai dari 0 hingga n-1
		cout << a[j] << endl;
	}
	cout << endl;
}

void bubbleSortArray() {      // Method untuk mengurutkan Array dengan metode buble sort
	for (int i = 1; i < n; i++) {           // Looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j < n - 1; j++) {   // Looping dengan j dimulai dari 0 hingga n-i-1
			if (a[j] > a[j + 1]) {          // Jika nilai pada a[j] lebih besar dari a[j + 1]
				int temp = a[j];            // Simpan nilai a[j] ke variabel sementara temp
				a[j] = a[j + 1];            // Assign nilai a[j + 1] ke a[j]
				a[j + 1] = temp;            // Assign nilai temp ke a[j + 1]
			}
		}
	}
}

int main() {
	// Membuat objek obj dari class BubbleSort
	input();   // Memanggil read() dari class BubbleSort
	bubbleSortArray();  // Memanggil BubbleSortArray() dari class BubbleSort
	display();   // Memanggil display() dari class BubbleSort
	return 0;
}