#include <iostream>
using namespace std;


class BoothTol{
	private:
    	int car;
    	double money;

    public:
  		BoothTol(){
			car = 0;
			money = 0;
    	}
		void pay(){
        	car = car + 1;
        	money = money + 0.5;
    	}
		void nopay(){
        	car = car + 1;
    	}
		void displayMoney()
    	{
        	cout << "Banyak uang di BoothTol " << money << endl << endl;
    	}
		void displayCar()
    	{
        	cout << "Banyak mobil yang lewat BoothTol = " << car << endl;
    	}
};

int main()
{
    int a;
    BoothTol b;

	do{
		cout << "1. Yang Bayar " << endl;
		cout << "2. Yang Tidak Bayar" << endl;
		cout << "3. Exit\nPilih : "; cin >> a;
		switch (a){
   			case 1:
    			b.pay();
        		b.displayCar();
        		b.displayMoney();
        		break;
    		case 2:
    			b.nopay();
    		    b.displayCar();
    		    b.displayMoney();
    		    break;
    		case 3:
    			b.displayCar();
    			b.displayMoney();
    		};
	}while(a!=3);

	return 0;
}
