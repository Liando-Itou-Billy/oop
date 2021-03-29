#include <iostream>

using namespace std;

class Person{
	protected:
		string name;
		char gender;

	public:
		Person(){
		};

		void setName(string billy){
			name = billy;
		}

		void setGender(char jenis_kelamin){
			gender =  jenis_kelamin;
		}

		string getName(){
			return name;
		}

		char getGender(){
			return gender;
		}
};

class Teacher : public Person{
	private:
		int nik;
		string faculty;

	public:
		void setNik(int niksaya){
			nik = niksaya;
		}

		void setFaculty(string fakultassaya){
			faculty = fakultassaya;
		}

		int getNik(){
			return nik;
		}

		string getFaculty(){
			return faculty;
		}

		void setData(){
		}

		displayData(){
		}
};

class Student : public Person{
	private:
		int nim;
		string registration_number;
		string prodi;

	public:
		void setNim(int nimsaya){
			nim = nimsaya;
		}

		void setRegistraionNumber(string noregsaya){
			registration_number = noregsaya;
		}

		void setProdi(string prodisaya){
			prodi = prodisaya;
		}

		int getNim(){
			return nim;
		}

		string getRegistrationNumber(){
			return registration_number;
		}

		string getProdi(){
			return prodi;
		}
};

int main(){
	return 0;
}
