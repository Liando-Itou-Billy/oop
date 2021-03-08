#include <iostream>
using namespace std;
class Karyawan{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   cout << "Enter Karyawan\'s nomor ";
   cin >> emp_num;
   cout << "Enter Karyawan\'s gaji " ;
   cin >> emp_comp;
  }
  void display(){
   cout << "Karyawan\'s nomor " << emp_num << endl;
   cout << "Karyawan\'s gaji " << emp_comp << endl;
  }
};
int main(){
 Karyawan emp1, emp2, emp3;
 cout << "Masukkan Data Untuk Karyawan 1" << endl;
 emp1.entData();
 cout << "Masukkan Data Untuk Karyawan 2" << endl;
 emp2.entData();
 cout << "Masukkan Data Untuk Karyawan 3" << endl;
 emp3.entData();
 cout << "Total Data Entered Is" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
}
