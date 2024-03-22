// UCPSorting_0112.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Tipe soal A

// 1. Mengurutkan dari yang terkecil dengan cara pemberian nilai. 
// Mengambil nilai di depan minimum index untuk ditempatkan pada variable temporary, 
// dan kemudian akan dibandingkan dengan nilai minimum index, 
// jika lebih kecil maka nilai kolom minimum index akan maju pada kolom kosong yang isinya sudah dipindahkan di variabel temporary 
// dan isi nilai pada variabel temporary akan diberikan pada kolom minimum index. 
// dan akan berlanjut terus ke nilai di depannya hingga semua nilai terurut. 

// 2. Mengurutkan dari terkecil ke terbesar, dengan menempatkan dari yang terkecil ke terbesar 
  // Membandingkan nilai pada setiap kolom dengan tidak urut list, 
  // tetapi membandingkan hingga memilih list paling kecil dan kemudian ditempatkan di tempatnya sehingga membentuk urutan dari kecil ke besar.

// 3. Dengan mengetahui order of growth
// atau dengan menghitung jumlah pass dengan (n-1) dan akan mulai dihitung jumlah langkah setiap pass dengan menjumlahkan (n-1) hingga (n-(n-1)).
      
// 4. 
#include <iostream>
using namespace std;
int nasywa[22];
int n;
int min_index;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 22)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }
    }

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "====================" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> nasywa[i];

    }
}


void ucpAlgoritma() {
    int i, j, temp;

    for (j = 0; j <= n - 2; j++) {
        temp = min_index;
        min_index = j;
        for (i = j + 1; i = n - 1; i++) {
            if (nasywa[i] < nasywa[min_index]) {
                temp = min_index;
                min_index = i;
            }
        }
        temp = nasywa[j];
        nasywa[j] = nasywa[min_index];
        nasywa[min_index] = temp;
    }
    
}

void display() {
    cout << endl;
    cout << "====================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "====================" << endl;

    for (int j = 0; j < n; j++) {
        cout << nasywa[j] << endl;

    }
    cout << "Jumlah pass =" << n - 1 << endl;
    cout << endl;

}

int main() {

    input();
    ucpAlgoritma();
    display();
    
}