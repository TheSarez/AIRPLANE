#include<iostream>
#include<fstream>


using namespace std;

void mainMenu();

class Management
{
	public:	
		Management()
		{
			mainMenu();
		}
};


class Details
{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information()
		{
			cout<<"\nEnter the government ID:";
			cin>>cId;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age :";
			cin>>age;
			cout<<"\n Address :";
			cin>>add;
			cout<<"\n Gender :";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Germany"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".Flight to "<<flightN[a]<<endl;
				
			}
			
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press ther number of the country of which you want to book the flight:";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"_______________________Welcome to Dubai Emirates____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. DUB - 498"<<endl;
						cout<<"\t16-08-2023 8:00AM 10hrs Rs. 14000"<<endl;
						cout<<"2. DUB - 658"<<endl;
						cout<<"\t17-08-2023 4:00AM 12hrs Rs. 10000"<<endl;
						cout<<"3. DUB - 508"<<endl;
						cout<<"\t18-08-2023 11:00AM 11hrs Rs. 9000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=14000;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=10000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=9000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
			}
			
			case 2:
				{
					cout<<"_______________________Welcome to Canadian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. CA - 198"<<endl;
						cout<<"\t16-08-2023 2:00PM 20hrs Rs. 34000"<<endl;
						cout<<"2. CA - 158"<<endl;
						cout<<"\t17-08-2023 6:00AM 23hrs Rs. 29000"<<endl;
						cout<<"3. CA - 208"<<endl;
						cout<<"\t17-08-2023 12:00AM 21hrs Rs. 40000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=29000;
							cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=40000;
							cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						
				}
				
				case 3:
				{
					
					cout<<"_______________________Welcome to UK Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. UK - 798"<<endl;
						cout<<"\t17-08-2023 10:00AM 14hrs Rs. 44000"<<endl;
						
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					
				}
				case 4:
					{
						cout<<"_______________________Welcome to US Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. US - 567"<<endl;
						cout<<"\t16-08-2023 9:00AM 22hrs Rs. 37000"<<endl;
						cout<<"2. US - 658"<<endl;
						cout<<"\t17-08-2023 6:00AM 22hrs Rs. 39000"<<endl;
						cout<<"3. US - 508"<<endl;
						cout<<"\t18-08-2023 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight US - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=39000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
				case 5:
					{
						cout<<"_______________________Welcome to Australian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. As - 698"<<endl;
						cout<<"\t15-08-2023 9:00AM 20hrs Rs. 44000"<<endl;
						cout<<"2. AS - 158"<<endl;
						cout<<"\t16-08-2023 4:00AM 22hrs Rs. 34000"<<endl;
						cout<<"3. AS - 708"<<endl;
						cout<<"\t17-08-2023 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=34000;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=42000;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
					case 6:
						{
							cout<<"_______________________Welcome to German Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. GE - 898"<<endl;
						cout<<"\t16-08-2023 2:00AM 18hrs Rs. 36000"<<endl;
						cout<<"2. GE - 958"<<endl;
						cout<<"\t17-08-2023 6:00AM 19hrs Rs. 37000"<<endl;
						cout<<"3. GE - 608"<<endl;
						cout<<"\t18-08-2023 10:00AM 20hrs Rs. 31000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=36000;
							cout<<"\nYou have successfully booked the flight GE - 898"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=37000;
							cout<<"\nYou have successfully booked the flight GE - 958"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=31000;
							cout<<"\nYou have successfully booked the flight GE - 608"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						}
						default :
							{
								cout<<"Invalid input, Shifting you to the main menu !"<<endl;
								mainMenu();
								break;
							}
		}
	}
};
float registration::charges;
int registration::choice;


class ticket : public registration, Details
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"_____________Advanced Airlines____________"<<endl;
				outf<<"__________________Ticket__________________"<<endl;
				outf<<"___________________________________________________"<<endl;
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				else if(registration::choice==6)
				{
					destination="Germany";
				}
				
				outf<<"Destination :\t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
				
			}
			outf.close();
			
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};




void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t               Advanced Airlines \n"<<endl;
	cout<<"\t_________________________Main Menu_______________________"<<endl;
	
	cout<<"\t_________________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t        |" <<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration        \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges         \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t        |" <<endl;
	cout<<"\t_________________________________________________________"<<endl;
	
	cout<<"Enter the choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		
		case 1:
			{
			   cout<<"__________Customers__________\n"<<endl;
			   	d.information();
			   	cout<<"Press any key to go back to Main menu ";
			   	cin>>back;
			   	
			   	if(back==1)
			   	{
			   		mainMenu();
				   }
				   else
				   {
				   	mainMenu();
				   }
				   break;
			}
			
			case 2:
				{
					cout<<"________Book a flight using this system ____________\n"<<endl;
					r.flights();
					break;
				}
				
				case 3:
					{
					
				cout<<"_____GET YOUR TICKET____\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				cin>>back;
				
				
					if(back==1)
					{
						t.dispBill();
						cout<<"Press any key to go back to main menu:";
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					else
					{
						mainMenu();
					}
					break;
				}
		
		case 4:
			{
				cout<<"\n\n\t_________Thank-you_______"<<endl;
				break;
			}
						default :
				{
					cout<<"Invalid input, Please try again!\n"<<endl;
					mainMenu(); 
					break;
				}
	}	
}
int main()
{
	Management Mobj;
	return 0;
}
