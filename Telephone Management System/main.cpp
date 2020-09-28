/* 
	Written BY:- Mohit Khedkar.
	Project Name:- Telephone Management System. 
	version:-5.1.2
*/	


#include<iostream>
#include<fstream>
#include<iomanip>
 
using namespace std;
 
 class telephone
{
	char name[20];
	int ph_no;

public:
	void get(void);
	void show(void);
	int getph_no();

};
 
 
 
void telephone::get(void)
{
	cout << "\nEnter Name: ";
	cin.ignore();
	cin.getline(name, 20);
	cout << "\nEnter Phone Number: ";
	cin >> ph_no;
}
 
 
void telephone::show()
{
	cout << "\nName: " << name;
	cout << "\nPhone Number: " << ph_no;
}
 
int  telephone::getph_no()
{
	return ph_no;
}
 
 
void write_telephone()
{
	telephone tel;
	ofstream outFile;
	outFile.open("telephone.dat", ios::binary | ios::app);
	tel.get();
	outFile.write(reinterpret_cast<char *> (&tel), sizeof(telephone));
	outFile.close();
	cout << "\n\nTelephone Directory Has Been Created...";
	cin.ignore();
	cin.get();
}
 
 
 
void display_all()
{
	telephone tel;
	ifstream inFile;
	inFile.open("telephone.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while (inFile.read(reinterpret_cast<char *> (&tel), sizeof(telephone)))
	{
		tel.show();
		cout << "\n\n====================================\n";
	}
	inFile.close();
	cin.ignore();
	cin.get();
}
 
 
 
void display_sp(int n)
{
	telephone tel;
	ifstream inFile;
	inFile.open("telephone.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char *> (&tel), sizeof(telephone)))
	{
		if (tel.getph_no() == n)
		{
			tel.show();
			flag = true;
		}
	}
	inFile.close();
	if (flag == false)
		cout << "\n\nrecord not exist";
	cin.ignore();
	cin.get();
}
 
 
void modify_telephone(int n)
{
	bool found = false;
	telephone tel;
	fstream File;
	File.open("telephone.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	while (!File.eof() && found == false)
	{
 
		File.read(reinterpret_cast<char *> (&tel), sizeof(telephone));
		if (tel.getph_no() == n)
		{
			tel.show();
			cout << "\n\nPlease Enter The New Details" << endl;
			tel.get();
			int pos = (-1)*static_cast<int>(sizeof(tel));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char *> (&tel), sizeof(telephone));
			cout << "\n\n\t Record Updated";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}
 
 
 
void delete_telephone(int n)
{
	telephone tel;
	ifstream inFile;
	inFile.open("telephone.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat", ios::out);
	inFile.seekg(0, ios::beg);
	while (inFile.read(reinterpret_cast<char *> (&tel), sizeof(telephone)))
	{
		if (tel.getph_no() != n)
		{
			outFile.write(reinterpret_cast<char *> (&tel), sizeof(telephone));
		}
	}
	outFile.close();
	inFile.close();
	remove("telephone.dat");
	rename("Temp.dat", "telephone.dat");
	cout << "\n\n\tRecord Deleted ..";
	cin.ignore();
	cin.get();
}
 
 
 
int main()
{
	char ch;
	int num;
	cout.setf(ios::fixed | ios::showpoint);
	cout << setprecision(2);
	do
	{
		system("cls");
		cout << "\n\n\n\n\n";
        cout << "\n\t\tWELCOME TO TELEPHONE DIARY";
        cout << "\n\n ";
		cout << "\n\t\t MENU ";
		cout << "\n\t\t1. Add Telephone Record";
		cout << "\n\t\t2. Show Records";
		cout << "\n\t\t3. Search Telephone Records";
		cout << "\n\t\t4. Modify Record";
		cout << "\n\t\t5. Delete Record";
		cout << "\n\t\t6. EXIT";
		cout << "\n\t\t";
		cout << "\n\t\tPlease Enter Your Choice (1-6): ";
		cin >> ch;
		system("cls");
		switch (ch)
		{
		case '1':	write_telephone(); 
					break;
		
		case '2':	display_all();
					 break;
		
		case '3':	cout << "\n\tPlease Enter Phone Number: "; 
					cin >> num;
					display_sp(num); 
					break;
		
		case '4':	cout << "\n\tPlease Enter Phone Number: ";
					cin >> num;
					modify_telephone(num); 
					break;
		
		case '5':	cout << "\n\tPlease Enter Phone Number: ";
					cin >> num;
					delete_telephone(num);
					 break;
		
		case '6':	exit(0);
		
		default:	cout << "\n Enter the Valid option... ";
 
		}
	} while (ch != '7');
 
	return 0;
}
