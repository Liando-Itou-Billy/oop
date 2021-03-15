#include <iostream>
using namespace std;

class Penilaian{
	private:
		string kategori;
		int tugas, kuis, kehadiran, ujian_mid, ujian_final, nilai_akhir;

	public:
		void olahNilai(int p_tugas, int p_kuis, int p_kehadiran, int p_ujian_mid, int p_ujian_final);
		void olahKategori();
		void printNilai(int a);
};

void Penilaian::olahKategori(){
	nilai_akhir = tugas + ujian_mid + ujian_final + kehadiran + kuis;

	if (nilai_akhir>=91 && nilai_akhir<=100){
		kategori ="A";
	}
	else if (nilai_akhir>=85 && nilai_akhir<=90){
		kategori ="A-";
	}
	else if (nilai_akhir>=82 && nilai_akhir<=84){
		kategori ="B+";
	}
	else if (nilai_akhir>=78 && nilai_akhir<=81){
		kategori ="B";
	}
	else if (nilai_akhir>=75 && nilai_akhir<=77){
		kategori ="B-";
	}
	else if (nilai_akhir>=70 && nilai_akhir<=74){
		kategori ="C+";
	}
	else if (nilai_akhir>= 67 && nilai_akhir<=69){
		kategori ="C";
	}
	else if (nilai_akhir>=60 && nilai_akhir<=66){
		kategori ="C-";
	}
	else if (nilai_akhir>=40 && nilai_akhir<=59){
		kategori ="D";
	}
	else if (nilai_akhir>=0 && nilai_akhir<=39){
		kategori ="F";
	}
}

void Penilaian::olahNilai(int p_tugas, int p_kuis, int p_kehadiran, int p_ujian_mid, int p_ujian_final){
	tugas =(p_tugas * 20) /100;
	kuis =(p_kuis * 10) /100;
	kehadiran =(p_kehadiran * 10) /100;
	ujian_mid =(p_ujian_mid * 30) /100;
	ujian_final =(p_ujian_final * 30) /100;
}

void Penilaian::printNilai(int a){
	cout <<"::   " <<a <<"\t\t" <<nilai_akhir <<"{" <<kategori <<"}\t::" <<endl;
	cout << "::......................::" <<endl;
}

int main()
{
	int i,k,banyak_mhs;
	int tugas_user,kuis_user,kehadiran_user,mid_user,final_user;

	cout <<"-WELCOME TO GRADING SYSTEM v1.0-"<< endl;
	cout <<"---------------------------"<< endl;
	cout <<"Berapa Student : "; cin >> banyak_mhs;

	Penilaian student[banyak_mhs];
	for(i=0; i<banyak_mhs; i++){
		cout <<endl;
		cout <<"INPUT SKOR STUDENT " << i+1 << endl;
		cout <<"Assignment:";
		cin  >>tugas_user;
		cout <<"Quiz      :";
		cin  >>kuis_user;
		cout <<"Attendance:";
		cin  >>kehadiran_user;
		cout <<"Mid Exam  :";
		cin  >>mid_user;
		cout <<"Final Exam:";
		cin  >>final_user;
		cout <<endl;

		student[i].olahNilai(tugas_user, kuis_user, kehadiran_user, mid_user, final_user);

		student[i].olahKategori();
	}

	cout <<"::::::::::::::::::::::::::" <<endl;
	cout <<"::  -Nilai Mahasiswa-   ::" <<endl;
	cout <<"::::::::::::::::::::::::::" <<endl;
	cout <<"::Mahasiswa     Nilai   ::" <<endl;
	cout <<"::......................::" <<endl;

	for(k=0; k<banyak_mhs; k++){
		student[k].printNilai(k+1);
	}

	return 0;
}
