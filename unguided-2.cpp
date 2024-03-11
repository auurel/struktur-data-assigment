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