#include <iostream>
#include <string>

using namespace std;


void menu(){

	string pin;
	int saldo = 500000;
	int transfer;
	int tarik;

	cout<<"saat menggunakan atm harus urut dari 1-5,karena projek ini masih dalam pengerjaan"<<endl<<endl;
	cout<<"\tMenu\n";
	cout<<"===========================================================================\n";
	cout<<"1.lihat saldo\n";
	cout<<"2.transfer\n";
	cout<<"3.tarik tunai\n";
	cout<<"4.nabung\n";
	cout<<"5.selesai\n";


}

int main()
{
	// functionalities check balance, deposit, withdraw, show menu
	int option;
	double balance = 0;
	int saldoo = 90000;
	do
	{
		menu();
		cout << "Pilihan: ";
		cin >> option;
		system("close"); //we can delete the menu after the user makes their choice.
		switch (option)
		{
		case 1:
			cout << "Saldo kamu adalah: " << saldoo << " $"<< endl<<endl;
			break;
		case 2: 
			double transfer;
			double tujuan;
			cout << "Transfer: ";
			cin >> transfer;
			cout<< "No rekening tujuan: ";
			cin>>tujuan;

			if (transfer > 0) {
				balance = saldoo - transfer;
				tujuan = tujuan;
				cout << "transfer sebesar " << transfer <<" ke " << tujuan << " berhasil" << endl << endl;
				break;
			}
			else {
				cout << "gagal mentransfer" << endl<<endl;
			}
			
		case 3:
			double withdrawAmount;
			cout << "tarik tunai: ";
			cin >> withdrawAmount;

			if (withdrawAmount > 0) {
				if (withdrawAmount <= balance) {
					//withdrawAmount = withdrawAmount;
					balance = saldoo - withdrawAmount;
					cout <<"tarik tunai sebesar: "<<withdrawAmount<<" berhasil, sisa saldo anda: " << balance << " $ " << endl;
				}
				else {
					cout << "Saldomu tidak cukup."<<endl<<endl;
				}
				
				break;
			}
			else {
				cout << "Gagal menarik tunai!" << endl<<endl;
			}

			break;

		case 4: 
			double Nabung;
			cout << "Nabung: ";
			cin >> Nabung;

			if (Nabung > 0) {
				balance = (saldoo - transfer - withdrawAmount) + Nabung;
				cout << "saldo anda sekarang " << balance << " $ " << endl << endl;
				break;
			}


		case 5:
			cout << "Thank you for using our bank." << endl << endl;
			break;

		default:
			cout << "Invalid input" << endl;
			break;
		}

	} while (option!=5);
	
	
	system("pause>0");

}