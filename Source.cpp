#include<fstream>
#include<iostream>
#include<string>
#include<exception>
using namespace std;

bool NameValidation(string);
bool BloodValidation(string);
bool IsChar(char);
bool IsDigit(char);
bool Validation(string);
bool GndrValidation(string );
bool Cvalidation(string);

fstream writer1("A+.txt",ios::app);
fstream writer2("A-.txt", ios::app);
fstream writer3("B+.txt", ios::app);
fstream writer4("B-.txt", ios::app);
fstream writer5("AB+.txt", ios::app);
fstream writer6("AB-.txt", ios::app);
fstream writer7("O+.txt", ios::app);
fstream writer8("O-.txt", ios::app);


fstream writer1a("A+.txt", ios::app);
fstream writer2a("A-.txt", ios::app);
fstream writer3a("B+.txt", ios::app);
fstream writer4a("B-.txt", ios::app);
fstream writer5a("AB+.txt", ios::app);
fstream writer6a("AB-.txt", ios::app);
fstream writer7a("O+.txt", ios::app);
fstream writer8a("O-.txt", ios::app);

ifstream reader1("A+.txt",ios::in);
ifstream reader2("A-.txt", ios::in);
ifstream reader3("B+.txt", ios::in);
ifstream reader4("B-.txt", ios::in);
ifstream reader5("AB+.txt", ios::in);
ifstream reader6("AB-.txt", ios::in);
ifstream reader7("O+.txt", ios::in);
ifstream reader8("O-.txt", ios::in);
 

ifstream reader1a("A+.txt", ios::in);
ifstream reader2a("A-.txt", ios::in);
ifstream reader3a("B+.txt", ios::in);
ifstream reader4a("B-.txt", ios::in);
ifstream reader5a("AB+.txt", ios::in);
ifstream reader6a("AB-.txt", ios::in);
ifstream reader7a("O+.txt", ios::in);
ifstream reader8a("O-.txt", ios::in);


ifstream reader1b("A+.txt", ios::in);
ifstream reader2b("A-.txt", ios::in);
ifstream reader3b("B+.txt", ios::in);
ifstream reader4b("B-.txt", ios::in);
ifstream reader5b("AB+.txt", ios::in);
ifstream reader6b("AB-.txt", ios::in);
ifstream reader7b("O+.txt", ios::in);
ifstream reader8b("O-.txt", ios::in);

ifstream reader1c("A+.txt", ios::in);
ifstream reader2c("A-.txt", ios::in);
ifstream reader3c("B+.txt", ios::in);
ifstream reader4c("B-.txt", ios::in);
ifstream reader5c("AB+.txt", ios::in);
ifstream reader6c("AB-.txt", ios::in);
ifstream reader7c("O+.txt", ios::in);
ifstream reader8c("O-.txt", ios::in);

double x,y,z;
static double  count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0;
double Tell1(string s )
{
	
	if (s == "A+" || s == "a+")
	{
		while (!reader1.eof())
		{
			reader1 >> x;
		}
		
		return x;
	}

	else if (s == "A-" || s == "a-")
	{
		while (! reader2.eof())
		{
			reader2 >> x;
		}
		return x;
	}

	else if (s == "B+" || s == "b+")
	{
		while (!reader3.eof())
		{
			reader3 >> x;
		}
		return x;
	}

	else if (s == "B-" || s == "b-")
	{
		while (!reader4.eof())
		{
			reader4 >> x;
		}
		return x;
	}

	else if (s == "AB+" || s == "ab+")
	{
		while (!reader5.eof())
		{
			reader5 >> x;
		}
		return x;
	}

	else if (s == "AB-" || s == "ab-")
	{
		while (!reader6.eof())
		{
			reader6 >> x;
		}
		return x;
	}

	else if (s == "O+" || s == "o+")
	{
		while (!reader7.eof())
		{
			reader7 >> x;
		}
		return x;
	}

	else 	if (s == "O-" || s == "o-")
	{
		while (!reader8.eof())
		{
			reader8 >> x;
		}
		return x;
	}
}

double Tell2(string s)
{

	if (s == "A+" || s == "a+")
	{
		while (!reader1c.eof())
		{
			reader1c >> z;
		}

		return z;
	}

	else if (s == "A-" || s == "a-")
	{
		while (!reader2c.eof())
		{
			reader2c >> z;
		}
		return z;
	}

	else if (s == "B+" || s == "b+")
	{
		while (!reader3c.eof())
		{
			reader3c >> z;
		}
		return z;
	}

	else if (s == "B-" || s == "b-")
	{
		while (!reader4c.eof())
		{
			reader4c >> z;
		}
		return z;
	}

	else if (s == "AB+" || s == "ab+")
	{
		while (!reader5c.eof())
		{
			reader5c >> z;
		}
		return z;
	}

	else if (s == "AB-" || s == "ab-")
	{
		while (!reader6c.eof())
		{
			reader6c >> z;
		}
		return z;
	}

	else if (s == "O+" || s == "o+")
	{
		while (!reader7c.eof())
		{
			reader7c >> z;
		}
		return z;
	}

	else 	if (s == "O-" || s == "o-")
	{
		while (!reader8c.eof())
		{
			reader8c >> z;
		}
		return z;
	}
}

void MinusPackts( string s,double a)
{
	if (s == "A+" || s == "a+")
	{
	
		while (!reader1a.eof())
		{
			reader1a >> y ;
		}
		if (a <= y)
		{
			y = y - a;
			writer1a << y<<endl;
	   }
	}


	else if (s == "A-" || s == "a-")
	{
		while (!reader2a.eof())
			{
				reader2a >> y;
			}
			if (a <= y)
			{
				y = y - a;
				writer2a << y << endl;
			}
		

	}
	else if (s == "B+" || s == "b+")
	{
		while (!reader3a.eof())
		{
			reader3a >> y;
		}
		if (a <= y)
		{
			y = y - a;
			writer3a << y << endl;
		}
	}


	else if (s == "B-" || s == "B-")
	{
		while (!reader4a.eof())
		{
			reader4a >> y;
		}
		if (a <= y)
		{
			y = y - a;
			writer4a << y << endl;
		}
	}


	else if (s == "AB+" || s == "ab+")
	{
		while (!reader5a.eof())
		{
			reader5a >> y;
		}
		if (a <= y)
		{
			y = y - a;
			writer5a << y << endl;
		}
	}


	else if (s == "AB-" || s == "ab-")
	{
		while (!reader6a.eof())
		{
			reader6a >> y;
		}
		if (a <= y)
		{
			y = y - a;
			writer6a << y << endl;
		}
	}


	else if (s == "O+" || s == "o+")
	{
		while (!reader7a.eof())
		{
			reader7a >> y;
		}
		if (a <= y)
		{
			y = y - a;
			writer7a << y << endl;
		}
	}


	else if (s == "O-" || s == "o-")
	{
		while (!reader8a.eof())
		{
			reader8 >> y;
		}
		if (a <= y)
		{
			y = y - a;
			writer8a << y << endl;
		}
	}

}

void BloodGrpCont(string s)
{
	if (s == "A+" || s == "a+")
	{
		++count1;
		while (!reader1b.eof())
		{
			reader1b >> z;
		}
		writer1 << z+count1<<endl;
	}

	else if (s == "A-" || s == "a-")
	{
		++count2;
		while (!reader2b.eof())
		{
			reader2b >> z;
		}
		writer2 << z+count2 << endl;
	}

	else if (s == "B+" || s == "b+")
	{
		++count3;
		while (!reader3b.eof())
		{
			reader3b >> z;
		}
		writer3 << z+count3 << endl;
	}

	else if (s == "B-" || s == "b-")
	{
		++count4;
		while (!reader4b.eof())
		{
			reader4b >> z;
		}
		writer4 << z+count4 << endl;
	}

	else if (s == "AB+" || s == "ab+")
	{
		++count5;
		while (!reader5b.eof())
		{
			reader5b >> z;
		}
		writer5 << z+count5 << endl;
	}

	else if (s == "AB-" || s == "ab-")
	{
		++count6;
		while (!reader6b.eof())
		{
			reader6b >> z;
		}
		writer6 << z+count6 << endl;
	}

	else if (s == "O+" || s == "o+")
	{
		++count7;
		while (!reader7b.eof())
		{
			reader7b >> z;
		}
		writer7 << z+count7 << endl;
	}

	else if (s == "O-" || s == "o-")
	{
		++count8;
		while (!reader8b.eof())
		{
			reader8b >> z;
		}
		writer8 << z+count8 << endl;
	}

}
class  Person
{
private: string name;
private: int  age;
private: string gndr;
private: string address;
private: string email;
private: string dtails;
private: string contact;

public:  void  StName()
{
	string n;
	
x:	cout << " Kindly Enter Your First Name(only) - Sir/Mam  : ";
	getline(cin, n);
	try
	{
		if (NameValidation(n))
		{
			name = n;
			cout << "\n Valid Name "<<endl;

		}
		else 
		throw 'c';
	}
	catch (char c)
	{
		cout << "\n Invalid Name "<<endl;
		goto x;
	}
	
	
}
public:  string GtName()
{
	return name;
}

public: void  StAddress()
{
	string a;
	x:cout << "Enter your address : " << endl;
	getline(cin, a);
	if (a.empty())
	{
		cout << "Invalid Entry \n";
		goto x;
	}
	else
	address = a;
}

public:  void  StGndr()
{
	string g;
x:	cout << "Enter Your Gender : ";
	getline(cin, g);
	try
	{
		if (GndrValidation(g))
		{
			gndr = g;
			cout << "\n Valid Entry "<<endl;
		}
		else
			throw 'a';
	}
	catch (char c)
	{
		cout << " You Have Entered Invalid Entry "<<endl;
		goto x;
	}
	
}
public: void  StEmail()
{
	string e;
	l: cout << "Enter Your Email (Gmail,hotmail,outlook,yahoo etc): " ;
	getline(cin, e);
	try
	{
		if (Validation(e))
		{
			email = e;
			cout << "\n Valid Email ID "<<endl;
		}
		else
			throw 'c';
	}
	catch (char c)
	{
		cout << " Invalid Email \n";
		goto l;
	}

}
public: void  StJobDetails()
{
	string details;
x:	cout << "Enter Job Details :  ";
	getline(cin, details);
	if (details.empty())
	{
		cout << "Invalid Entry\n";
		goto x;
	}
	else 
	dtails = details;
}
public: void Stcontact()
{
	string c;
x:	cout <<"Enter Your Contact Number : " ;
	getline(cin , c);
	
		try
		{
			if (Cvalidation(c))
			{
				if (c.length() == 11)
				{
					contact = c;
					cout << "Valid Entry\n";
				}
			}
			else
				throw 'c';
		}
		
		catch (char c)
		{
			cout << "Invalid Entry \n";
			goto x;
		}
	}
	


public : string  GtAddress()
{
	return address;
}
public:  void  StAge()
{
	int a;
	cout << " Enter your Age : ";
	cin >> a;
	age = a;
	cout << endl;
}
public:  int   GtAge()
{
	return age;

}
public:  string  GtGndr()
{
	return gndr;
}
public: string  GtEmail()
{
	return email;
}
public: string   GtJobDetails()
{
	return dtails;
}
public: string Gtcontact() {
	return contact;
}
};


class Donor :public Person
{
private : double dnrId;
public: double StDnrId()
{
	double i;
	cout << " Enter Donor Id : ";
	cin >> i;
	dnrId = i;
	return dnrId;

}
private:string bloodGroup;
public:void  StBloodGroup()
{
	string b;
	b: cout << "Enter Your Blood Group : ";
	getline(cin,b);
	try
	{
		if (BloodValidation(b))
		{
			bloodGroup = b;
			cout << "\n Valid Entry \n"<<endl;
		}
		else
			throw 'c';
	}
	catch (char c)
	{
		cout << "\n Invalid Blood Group Entered \n";
		goto b;
	}
	
}
public: string GtBloodGroup()
{
	return bloodGroup;
}
private: bool isDisease = false;
private: double dateOfDonation;
		 public: bool IsDisease()
		 {
		 	char c = '0';
		 	cout << "Have you any Disease, Press Y for Yes and N for No  ";
		 	cin >> c;
		 	if (c == 'Y' || c == 'y') 
		 		isDisease = true;
		 
		 	if (isDisease == true)
		 	{
				cout << "You can't donate blood :("<<endl;
		 		return isDisease;
		 	}
		 	else {
		 		cout << "You can Donate Blood :)"<<endl;
		 		return isDisease;
		 	}
		 }	


};
class DonationProgram
{
public: string OrgName;
public: int EvntId;
public: string Venue;
public: double  Volunteers;
};


class BloodStorage : public Donor
{
public:  double BloodId;
public: void StId()
{
	BloodId = StDnrId();
	
}



};
class Acceptr : public Person
{
private: string BloodGrpRquire;
public : void StBloodGrpRquire()
{
	string a;
	cout << "Enter The Blood Group you want (A+, A-, O-, O+, AB+, AB-, B-, B+) ";
	getline(cin,a);
	BloodGrpRquire = a;
}
public: string GtBloodGrpRquire()
{
	return BloodGrpRquire;
}
public: double AmountOfBlood;

};
void main()
{
	int f;
	cout << "\t Blood Bank Management and Information System\t \n";
	cout << "\t-:Welcome :-\t"<<endl;
	menu: cin.ignore();
	cout << "\t\t-:Menu:-\n";
	cout << "Press-1 to create and Register an Event and Enter its Record\n";
	cout << "Press-2 for Showing all Donor's Record \n";
	cout << "Press-3 for Entering Acceptor's Record\n";
	cout << "Press-4 for showing Acceptor's Record\n";
	cout << "Press-5 to check Blood Storage\n";
	cout << "Press 0 to EXIT\n";
	cout << "Enter Your Choice {0,1,2,3,4,5}\n";
	cin >> f;


	if (f == 1)
	{
		int yr, m, d;
		ofstream donorwriter("donor.txt", ios::app);
		DonationProgram e;
		int cnt = 0;
		cout << "Enter the Event Id #  :  ";
		cin >> e.EvntId;
		cin.ignore();
		if (donorwriter.is_open())
			donorwriter << "Event Id : " << e.EvntId << endl;
		cout << "Enter The Organization Name that Sponsered the Event of Donation and Collection of Blood  :  ";
		getline(cin, e.OrgName);
		donorwriter << e.OrgName << endl;
		cout << "Enter the Place/Venue :   ";
		getline(cin, e.Venue);
		donorwriter << e.Venue << endl;
		cout << "Enter Date of Collection (yyyy-mm-dd):  ";
		cin >> yr >> m >> d;
		donorwriter <<" Date of Collection : "<< yr<<" " << m<<" " << d;

		cout << "\tOrganization Name : " << e.OrgName << endl;
		cout << " \tVenue : \t" << e.Venue << endl;
		cout<<  " Date of Expiry : It will Expire in nearly 42 Days\n " ;
		int i;
		char c = 'Y';
		int nOfvolunteer;
		cout << "Enter the No. of Donars : ";
		cin >> nOfvolunteer;
		//	donorwriter << nOfvolunteer;

		Donor *p;
		p = new Donor[nOfvolunteer];
		for (i = 0; i < nOfvolunteer; i++)
		{
           if(i!=0)
		 donorwriter << "____________________________________________________________________" << endl;
		l:	p[i].StAge();

			if (p[i].GtAge() >= 18 && p[i].IsDisease() != true)
			{
				cout << "Guidlines for Entering Data  : \n Don't press Spacebar or Enter Key before going to Enter your Data \n";
				cout << "It will occur in a Serious type of Error\n";
				cout << "If your Name is Mlaik ABC, then Enter ABC \n";
				cin.ignore();
				p[i].StName();
				donorwriter << "Name  : " << p[i].GtName() << endl;
				p[i].StGndr();
				donorwriter << "Gender  : " << p[i].GtGndr() << endl;
				p[i].Stcontact();
				donorwriter << "Contact  : " << p[i].Gtcontact() << endl;
				p[i].StJobDetails();
				donorwriter << "Job Details  : " << p[i].GtJobDetails() << endl;
				p[i].StAddress();
				donorwriter << "Address  : " << p[i].GtAddress() << endl;
				p[i].StEmail();
				donorwriter << "E-mail  : " << p[i].GtEmail() << endl;

				p[i].StBloodGroup();
				donorwriter << "Donor's Blood Group  :  " << p[i].GtBloodGroup();
				donorwriter << endl;
				BloodGrpCont(p[i].GtBloodGroup());


			}
			else if (p[i].GtAge() < 18)
			{
				cout << " You have Entered Age less than 18, so you can't donate Blood " << endl;
				cout << "Do you want to Enter Another Record or Not " << endl;
				cout << "Press Y for Yes and N for No : " << endl;
				cin >> c;
				if (c == 'N' || c == 'n')
				{
					break;
				}
				else
				{
					goto l;
				}
			}
			else if (p[i].IsDisease() == true)
			{
				cout << "Do you want to Enter another Record or Not  " << endl;
				cout << "Press Y for Yes and N for No : " << endl;
				cin >> c;
				if (c == 'N' || c == 'n')
				{
					break;
				}
				else
				{
					goto l;
				}
			}
			cout << "Do you want to Enter another Record or Not, Press N to Exit ";
			cin >> c;
			if (c == 'N' || c == 'n')
			{
				break;
			}

		}

		cout << endl;
		cout << endl;
		donorwriter << endl;
		donorwriter << endl;
		donorwriter << "-----------------------------------End Of Event---------------------------------------------" << endl;
	}

     else if(f==2)
	 { 
	ifstream readDonor("donor.txt", ios::in);
	
	
	
		cout << "  Here is the Complete Record of Donors :  ";
		string rdr1;
		while (! readDonor.eof())
		{

			readDonor >> rdr1;
			cout << rdr1<<"\t"<<endl;
			

		}
		cout << endl;
	}


	
	
	 else if (f == 3)
	 {
		 ofstream acceptorwriter("receiver.txt", ios::app);
		 char per;
		 cout << "Have you any Acceptor, Press Y for Entering Record or N to Exit :  ";
		 cin >> per;
		 char choice2;
		 if (per == 'Y' || per == 'y')
		 {
			 cout << " We are in Acceptor Form Filing Process\n and Kindly make sure that the Information you Entered Must be Correct :  \n ";
			 Acceptr a[200];
			 int k;

			 for (k = 0; k < 200; k++)
			 {
				 cin.ignore();
			 u: a[k].StName();
				 a[k].Stcontact();
				 a[k].StBloodGrpRquire();
				 cout << "Enter Amount of Packets, you want  : ";
				 cin >> a[k].AmountOfBlood;
				 acceptorwriter <<"Name : " <<a[k].GtName()<<endl;
				 acceptorwriter << "Contact : "<<a[k].Gtcontact()<<endl;
				 acceptorwriter <<"Blood Group :"<< a[k].GtBloodGrpRquire()<<endl;
				 acceptorwriter << "Number of packets wanted :"<<a[k].AmountOfBlood<<endl;


				 cout << "We have " << Tell1(a[k].GtBloodGrpRquire()) << "  Packets of " << a[k].GtBloodGrpRquire() << " Blood Group " << endl;

				 MinusPackts(a[k].GtBloodGrpRquire(), a[k].AmountOfBlood);
				 cout << " Do you want to Enter Another Acceptor ?" << endl;
				 cout << " Press Y for Yes and N for No ";
				 cin >> choice2;
				 if (choice2 == 'Y' || choice2 == 'y')
				 {
					 goto u;
				 }
				 else
				 {
					 break;
				 }
			 }

			
		 }

	 }

	 else if (f == 4)
	 {
		 ifstream readAcceptr("receiver.txt", ios::in);
		 cout << "  Here is the Complete Record of Acceptors :  \n";
		 string rdr2;
		 while (!(readAcceptr.eof()))
		 {

			 readAcceptr >> rdr2;
			 cout << rdr2  << endl;


		 }
		 cout << endl;

	 }
	 else if (f == 5)
	 {

		 cin.ignore();

		 cout << "Do You want to show, how many packet(s) of different Blood Groups have been Left : " << endl;
		 cout << "Kindly Enter the Name of Blood Group : ";
		 string s;
		 getline(cin, s);
		 cout << "We have left with " << Tell2(s) << " of packets of " << s << " Blood Group\n";

	 }
	if (f != 0)
	{
		char m;
		cout << "Want to go to Menu Again ? \n Press Y to confirm or 0 to Exit ";
		cin >> m;
		if (m == 'y' || m == 'Y')
			goto menu;
	}
	system("pause");

}

bool IsChar(char c)
{
	return(c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z');
}
bool IsDigit(char c)
{
	return(c >= '0' && c <= '9');
}
bool isDigit(char c)
{
	return(c >= '0' && c <= '9');
}
bool Validation(string e)
{
	if (e.empty())
		return 0;
	int atSt = -1, dotSt = -1;

	if (!(IsChar(e[0])))
		return 0;
	if ((IsDigit(e[0])))
		return 0;

	unsigned i;
	for (i = 0; i < e.length(); i++)
	{
		if (e[i] == '@')
			atSt = (int)i;
		else if (e[i] == '.')
			dotSt = (int)i;
	}
	if (atSt == -1 || dotSt == -1)
		return 0;

}
bool BloodValidation(string b) 
{
	if (b == "A+" || b == "A-" || b == "B+" || b == "B-" || b == "AB+" || b == "AB-" || b == "O-" || b == "O+")
		return 1;
	else if (b.empty())
		return 0;
	else
		return 0;
}
bool NameValidation(string n)
{
	if (n.empty())
		return 0;
	else
	{
		for (int i = 0; i < n.length(); i++)
		{
			if (!(IsChar(n[i])))
				return 0;

			else if (IsDigit(n[i]))
				return 0;
		}

	}

}
bool GndrValidation(string g)
{
	if (g.empty() )
		return 0;
	else
	{
		for (int i = 0; i < g.length(); i++)
		{
			if (!(IsChar(g[i])))
				return 0;

			else if ((IsDigit(g[i])))
				return 0;

		}
	}
}
bool Cvalidation(string n)
{
	if (n.empty())
		return 0;
	else

	{
		for (int i = 0; i < n.length(); i++)
		{
			if (!(IsDigit(n[i])))
				return 0;

		}


	}
}