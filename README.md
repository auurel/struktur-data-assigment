# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Indy Aurellia Az Zahra</p>

## Dasar Teori
Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan. Ada tiga jenis tipe data yang umummnya digunakan:

### 1. Tipe Data Primitif

Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, antara lain:
- Int: digunakan untuk menyimpan bilangan bulat seperti 12, 1, 4, dan sebagainya.
- Float: digunakan untuk menyimpan bilangan desimal seperti 1.5, 2.1, 3.14, dan sebagainya.
- Char: berfungsi untuk menyimpan data berupa sebuah huruf. Biasanya digunakan untuk simbol seperti A, B, C dan seterusnya
- Boolean: digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false.


### 2. Tipe Data Abstrak

Tipe data abstrak merupakan tipe data yang dibentuk oleh programer itu sendiri. tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Fitur Class adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe data di dalamnya sebagai anggota


### 3. Tipe Data Koleksi

Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Beberapa contoh dari tipe data koleksi antara lain:
- Array: struktur data statis yang menyimpan elemen-elemen dengan tipe data yang sama
- Vector: vector adalah Standard Template Library (STL) jika di dalam C/C++ memiliki bentuk std::vector. Vector memiliki kemampuan untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan.
- Map: mirip dengan array, tetapi indeksnya bisa berupa tipe data selain integer, disebut "key", dan menggunakan struktur pohon self-balancing seperti Red-Black Tree pada std::map.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    // It allow user to enter the operands
    cin >> num1 >> num2;
    // Switch statement begins
    switch (op)
    {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
    // If the operator is other than +, -, * or /,
    // error massage will display
    default:
        cout << "Error! operator is not correct";
    } // Switch statement ends
    return 0;
}
```

Kode tersebut adalah program sederhana yang melakukan operasi aritmetika dasar seperti penjumlahan, pengurangan, perkalian, dan pembagian.

Program ini dimulai dengan menginclude library `iostream`, yang memungkinkan program untuk melakukan operasi input dan output. Perintah `using namespace std;` digunakan untuk mengizinkan penggunaan fungsi library standar tanpa harus menentukan prefix std::.

Fungsi main dimulai dengan mendeklarasikan tiga variabel: op dari tipe char untuk menyimpan operator yang dimasukkan oleh pengguna, dan num1 dan num2 dari tipe float untuk menyimpan operand yang dimasukkan oleh pengguna.

Selanjutnya, program membaca operator yang dimasukkan oleh pengguna menggunakan fungsi cin dan menyimpannya dalam variabel op. Kemudian, program membaca operand yang dimasukkan oleh pengguna dan menyimpannya dalam variabel num1 dan num2.

Kemudian, pernyataan switch digunakan untuk melakukan operasi aritmetika yang tepat berdasarkan operator yang dimasukkan oleh pengguna. Jika operator adalah +, program melakukan penjumlahan dan mencetak hasil. Jika operator adalah -, program melakukan pengurangan dan mencetak hasil. Jika operator adalah *, program melakukan perkalian dan mencetak hasil. Jika operator adalah /, program melakukan pembagian dan mencetak hasil.

Jika operator yang dimasukkan oleh pengguna bukan salah satu operator yang diharapkan `+, -, *, atau /`, program akan mencetak pesan error "Error! operator is not correct"

Selanjutnya, fungsi `main` mengembalikan nilai 0 untuk menunjukkan bahwa program telah dieksekusi dengan sukses.

Dalam ringkasan, kode ini adalah sebuah kalkulator command-line sederhana yang melakukan operasi aritmetika dasar berdasarkan input pengguna.


### 2. Tipe Data Abstrak

```C++
#include <stdio.h>
//Struct
struct Mahasiswa
{
const char *name;
const char *address;
int age;
};
int main()
{
// menggunakan struct
struct Mahasiswa mhs1, mhs2;
// mengisi nilai ke struct
mhs1.name = "Dian";
mhs1.address = "Mataram";
mhs1.age = 22;
mhs2.name = "Bambang";
mhs2.address = "Surabaya";
mhs2.age = 23;
// mencetak isi struct
printf("## Mahasiswa 1 ##\n");
printf("Nama: %s\n", mhs1.name);
printf("Alamat: %s\n", mhs1.address);
printf("Umur: %d\n", mhs1.age);
printf("## Mahasiswa 2 ##\n");
printf("Nama: %s\n", mhs2.name);
printf("Alamat: %s\n", mhs2.address);
printf("Umur: %d\n", mhs2.age);
return 0;
}
```

Kode ini mendefinisikan sebuah struct Mahasiswa dengan tiga anggota: pointer ke string karakter name, pointer ke string karakter address, dan integer age.

Fungsi main dimulai dengan mendeklarasikan dua variabel mhs1 dan mhs2 dari tipe Mahasiswa. Variabel ini digunakan untuk menyimpan informasi tentang dua mahasiswa.

Selanjutnya, program menginisialisasi anggota dari struct mhs1 dan mhs2 dengan nama, alamat, dan umur dua mahasiswa.

Kemudian, program mencetak informasi dua mahasiswa menggunakan fungsi `printf`. Program pertama mencetak header `"## Mahasiswa 1 ##"` dan kemudian mencetak nama, alamat, dan umur mahasiswa pertama. Kemudian, program mencetak header `"## Mahasiswa 2 ##"` dan kemudian mencetak nama, alamat, dan umur mahasiswa kedua.


### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;
int main()
{
//deklarasi dan inisialisasi array
int nilai[5];
nilai[0] = 23;
nilai[1] = 50;
nilai[2] = 34;
nilai[3] = 78;
nilai[4] = 90;
//mencetak array
cout << "Isi array pertama :" << nilai[0] << endl;
cout << "Isi array kedua :" << nilai[1] << endl;
cout << "Isi array ketiga :" << nilai[2] << endl;
cout << "Isi array keempat :" << nilai[3] << endl;
cout << "Isi array kelima :" << nilai[4] << endl;
return 0;
}
```

Pada baris pertama, library `iostream` dimasukkan ke program untuk mengizinkan input dan output. Perintah `using namespace std;` digunakan untuk mengizinkan penggunaan fungsi-fungsi dari library standard tanpa harus menuliskan `std::` sebelumnya.

Pada baris ke-5, array nilai dideklarasikan dengan tipe data integer dan panjang array 5.

Pada baris ke-7 sampai ke-11, nilai-nilai dimasukkan ke dalam array nilai dengan menggunakan notasi indeks.

Pada baris ke-13 sampai ke-17, isi dari array nilai dicetak menggunakan perintah cout.

Jadi, dengan menggunakan kode di atas, program akan menampilkan isi dari array nilai yaitu 23, 50, 34, 78, dan 90.


## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```

#### Output:
![unguided-1](https://github.com/auurel/struktur-data-assigment/assets/152810893/b3328dd8-883c-4f19-a19e-0c44bc55f27a)

Kode diatas merupakan program sederhana yang digunakan untuk melakukan beberapa operasi aritmatika dasar pada tiga variabel integer `x, y, dan z`.

Pada baris ke-5, tiga variabel integer x, y, dan z dideklarasikan dan diinisialisasi dengan nilai 15, 27, dan 30, masing-masing.
Pada baris ke-7, perintah cout digunakan untuk mencetak hasil dari penjumlahan tiga variabel tersebut.
Pada baris ke-9, perintah cout digunakan untuk mencetak hasil dari pengurangan variabel x dari y.
Pada baris ke-11, perintah cout digunakan untuk mencetak hasil dari perkalian variabel x dan y.

Jadi, dengan menggunakan kode di atas, program akan menampilkan hasil dari beberapa operasi aritmatika dasar pada tiga variabel x, y, dan z.


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

#### Class

Class adalah salah satu dari konsep OOP yang digunakan untuk membungkus data abstraksi procedural sebagai deskripsi tergeneralisir atau rancangan dari sebuah object untuk mendefinisikan atau menggambarkan isi dan tingkah laku sebagai entitas dari object.


### Struct

Struct atau structure merupan tipe data yang menyimpanan beberapa data dengan default public, Struktur berfungsi untuk mengelompokan sejumlah data dengan tipe yang berlainan.

### Contoh Program

```C++
#include <iostream>

// Definisikan struct Point dengan dua anggota: a dan b
struct Point {
  int a;
  int b;
};

// Definisikan class Circle dengan tiga anggota: center dan radius
class Circle {
private:
  Point center;
  int radius;

public:
  // Konstruktor untuk Circle class
  Circle(int a, int b, int r) : center{a, b}, radius{r} {}

  // Fungsi untuk mencetak center dan radius lingkaran
  void print() {
    std::cout << "Center: (" << center.a << ", " << center.b << "), Radius: " << radius << std::endl;
  }
};

int main() {
  // Buat objek Point dan inisialisasi anggotanya secara langsung
  Point p = {1, 2};

  // Cetak objek Point
  std::cout << "Point: (" << p.a << ", " << p.b << ")" << std::endl;

  // Buat objek Circle dan inisialisasi anggotanya menggunakan konstruktor
  Circle c(3, 4, 5);

  // Cetak objek Circle
  c.print();

  return 0;
}
```

#### Output:

![unguided-2](https://github.com/auurel/struktur-data-assigment/assets/152810893/9e1da7a6-ce8c-4ee0-9429-5cdac4ccb53e)

Kode diatas merupakan program sederhana yang digunakan untuk mendefinisikan sebuah `struct Point` dan `sebuah class Circle`.

Pada baris ke-5 sampai ke-11, struct Point didefinisikan dengan dua anggota `a dan b`, yang bertipe integer.

Pada baris ke-14 sampai ke-24, class Circle didefinisikan dengan tiga anggota: center dan radius. center adalah sebuah struct Point, sedangkan radius adalah sebuah integer. Di sini juga didefinisikan konstruktor untuk class Circle yang digunakan untuk menginisialisasi anggota center dan radius dengan nilai yang diberikan. Juga didefinisikan sebuah fungsi print() yang digunakan untuk mencetak center dan radius dari lingkaran.

Pada baris ke-27, objek Point dibuat dan diinisialisasi dengan nilai 1 dan 2 untuk anggota a dan b, masing-masing.

Pada baris ke-30, perintah cout digunakan untuk mencetak isi dari objek Point.

Pada baris ke-33, objek Circle dibuat dan diinisialisasi dengan nilai 3, 4, dan 5 untuk anggota center.a, center.b, dan radius, masing-masing.

Pada baris ke-36, perintah c.print() digunakan untuk mencetak center dan radius dari objek Circle.

Jadi, dengan menggunakan kode di atas, program akan menampilkan center dan radius dari sebuah lingkaran yang dibuat menggunakan class Circle.


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```C++
#include <iostream>
#include <map>

int main() {
  std::map<int, std::string> map;

  map[1] = "satu";
  map[2] = "dua";
  map[3] = "tiga";

  for (auto it = map.begin(); it != map.end(); it++) {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
  }

  return 0;
}
```

#### Output:

![unguided-3](https://github.com/auurel/struktur-data-assigment/assets/152810893/8de42b4e-52e5-431d-8360-3970ab00828d)

Kode diatas adalah program sederhana yang digunakan untuk mendemonstrasikan penggunaan `std::map` dari library standard C++.

Pada baris ke-3, kontainer std::map didefinisikan dengan tipe data `int` sebagai kunci dan tipe data `std::string` sebagai nilai.

Pada baris ke-6 sampai ke-8, nilai-nilai diteruskan ke kontainer std::map dengan menggunakan notasi [ ]. Ini akan menambahkan pasangan kunci-nilai ke kontainer jika kunci belum ada, atau mengganti nilai lama jika kunci sudah ada.

Pada baris ke-11 sampai ke-13, perulangan dilakukan menggunakan iterator it yang diinisialisasi dengan `map.begin()` dan dihentikan saat it sama dengan `map.end()`. Di setiap iterasi, nilai dari kunci dan nilai dari pasangan kunci-nilai saat ini dicetak menggunakan `it->first` dan `it->second`, masing-masing.

Jadi, dengan menggunakan kode di atas, program akan menampilkan pasangan kunci-nilai yang telah disimpan di kontainer `std::map`.

#### Perbedaan Array dan Map
- Array sering digunakan untuk menyimpan data yang memiliki urutan dan akan diakses secara berulang. Sedangkan Map sering digunakan untuk menyimpan data yang tidak memiliki urutan dan akan diakses berdasarkan kunci
- Ukuran array harus ditentukan saat deklarasi dan tidak dapat diubah. Sedangkan ukuran map dapat berubah saat program berjalan. Elemen dapat ditambahkan atau dihapus menggunakan fungsi insert() atau erase().


## Kesimpulan
Tipe data dalam C++ adalah salah satu fitur terpenting yang diperlukan dalam pemrograman komputer karena membuat program menjadi lebih terorganisir dan lebih mudah untuk diinterpretasikan. Tipe data dasar yang disediakan oleh bahasa C++ meliputi: int, float, bool, double, char, dan const. Tipe data tersebut memiliki perbedaan dan kegunaan yang unik secara individual dan merupakan dasar dalam pemrograman komputer modern.


## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
