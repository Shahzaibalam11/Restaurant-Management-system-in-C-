#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

bool Password(char* paw);
char check[9]="Shahzaib";
	struct DOB{
			int day;
			int month;
			int year;
		};
	struct Address{
		string houseno;
		string Area;
		string City;
	};	
	
class Person{
	private:
		string name;
		long long NIC;
		struct DOB d1;		
		int age;
		struct Address a1;
		protected:
			string Gender;
			string Gendermention;
	public:
	virtual void getData()
	{
	cout<<"Enter Name : \n";
				cin>>name;
				cout<<"Enter NIC: \n";
				cin>>NIC;
				cout<<"Enter Gender : \n";
				cin>>Gender;
				if(Gender=="male" ||Gender=="Male")
				{
					Gendermention="His";
				}
				else
				{
					Gendermention="Her";
				}
				cout<<"Enter Age : \n";
				cin>>age;
				cout<<"Enter Birthday(in Number): \n";
				cin>>d1.day;
					cout<<"Enter Birthmonth (In Number) : \n";
				cin>>d1.month;
					cout<<"Enter Birthyear : \n";
				cin>>d1.year;
				cout<<"Enter House No. : \n";
				cin>>a1.houseno;
				cout<<"Enter Area : \n";
				cin>>a1.Area;
				cout<<"Enter City : \n";
				cin>>a1.City;
				ofstream outfile("Restaurant.txt",ios::app);
			outfile<<name<<" "<<NIC<<" "<<age<<" "<<d1.day<<" "<<d1.month<<" "<<d1.year<<" "<<a1.Area<<" "<<a1.City<<" "<<a1.houseno<<" "<<Gender<<" ";
				outfile.close();
				 
		}
		virtual void getCustomerData(){
			fflush(stdin);
			cout<<"Enter Name : \n";
				cin>>name;
				cout<<"Enter House No. : \n";
				cin>>a1.houseno;
				cout<<"Enter Area : \n";
				cin>>a1.Area;
				cout<<"Enter City : \n";
				cin>>a1.City;
		}
		virtual void DisplayPersonalInformation()
		{
			cout<<"Name : "<<name<<endl<<"CNIC : "<<NIC<<endl<<"Age : "<<age<<endl<<"Gender : "<<Gender<<endl<<"Birthday : "<<d1.day<<":"<<d1.month<<":"<<d1.year<<endl<<"House No : "<<a1.houseno<<endl<<"Area : "<<a1.Area<<endl<<"City : "<<a1.City<<endl;
		}
		virtual void DisplayImportantInformation()=0;
		virtual void Menu(){
		}
		virtual void Bill()
		{
		}
		virtual void DisplayCustomerData()
		{
			cout<<endl<<"\t\t\t"<<name<<" your order will be delievered within 45 mins at "<<a1.houseno<<","<<a1.Area<<","<<a1.City<<"."<<endl;
		}
		virtual void read_file()
		{
		}
		virtual void Delete_file(){
		}
	
};

class Restaurant{
	private:
	int rating;
	struct Address a2;
	protected:
	string restaurantname;		
	public:
		virtual void read_management(){
		}	
	Restaurant()
	{
		restaurantname="The ALam Restaurant";
		rating=4;
		a2.City="Karachi";
		a2.Area="Clifton";
		a2.houseno="C-109";
	}
	virtual void getData()
	{
		
	}
	virtual void Display()
	{
	}
	string getrestaurantname()
	{
		return(restaurantname);
	}
	void displayAddress()
	{
		cout<<a2.houseno<<","<<a2.Area<<","<<a2.City;
	}
};


class Customer:public Person,public Restaurant{
	private:
		float totalamount;
		int order[100][2];
		int x,n,r;
		string foodname;
		string Phonenumber;
		
	public:
	     void DisplayPersonalInformation()
		{
			Person::DisplayPersonalInformation();
		}
		void DisplayImportantInformation()
		{
		}
		void DisplayCustomerData()
		{
			Person::DisplayCustomerData();
			cout<<"\t\t\tyou will be contacted on this number : "<<Phonenumber<<endl;
			cout<<"\t\t\tThank you!\n\t\t\tHave a yummy shummy day\n";
		}
		void getCustomerData()
		{
				cout<<"Enter your details:\n";
			Person::getCustomerData();
			cout<<"Enter your phone number:\n";
			cin>>Phonenumber;
		}
		void Bill()
		{
			system("cls");
				cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
            	displayAddress();
         	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
	        cout<<"\t\t\t\t\t Final Bill\n";
	        cout<<"\t\t\t\t\t--------------"<<endl;
	        r=0;
	        while(n!=0)
	        {
	        	if(order[r][0]==1)
	        	{
	        		if(order[r][1]==1)
	        		{
	        				cout<<endl<<"\t\t\tChicken Behari Boti \t\tRs.500"<<endl;
					}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tChicken Malai Boti \t\tRs.600"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tChicken Tikka \t\tRs.200"<<endl;
					}
					else if(order[r][1]==4)
	        		{
	        			cout<<endl<<"\t\t\tBeef Bihari Boti \t\tRs.490"<<endl;
					}
					else if(order[r][1]==5)
	        		{
	        			cout<<endl<<"\t\t\tAfghani Boti \t\tRs.450"<<endl;
					}
					else if(order[r][1]==6)
	        		{
	        			cout<<endl<<"\t\t\tMutton Chops \t\tRs.750"<<endl;
					}
	        		
				}
				else if(order[r][0]==2)
	        	{
	        		 if(order[r][1]==1)
	        		{
	        			cout<<endl<<"\t\t\tChicken Burger \t\t\tRs.170"<<endl;
					}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tChicken Cheese Burger \t\tRs.200"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tCrispy Zinger Burger \t\tRs.230"<<endl;
					}
					else if(order[r][1]==4)
	        		{
	        			cout<<endl<<"\t\t\tSmoky Beef Burger \t\t\tRs.180"<<endl;
					}
					else if(order[r][1]==5)
	        		{
	        			cout<<endl<<"\t\t\tBeef Cheese Burger \t\t\tRs.210"<<endl;
					}
					else if(order[r][1]==6)
	        		{
	        			cout<<endl<<"\t\t\tGrilled Chicken Sandwich \t\tRs.240"<<endl;
					}
					else if(order[r][1]==7)
	        		{
	        			cout<<endl<<"\t\t\tClub Sandwich \t\t\tRs.250"<<endl;
					}
					else if(order[r][1]==8)
	        		{
	        			cout<<endl<<"\t\t\tMexican Sandwich \t\t\tRs.300"<<endl;
					}
				}
				else if(order[r][0]==3)
	        	{
	        		 if(order[r][1]==1)
	        		{
	        			cout<<endl<<"\t\t\tChicken Roll \t\t\tRs.100"<<endl;
					}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tChicken Cheese Roll \t\t\tRs.120"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tChicken Mayo Roll \t\t\tRs.120"<<endl;
					}
					else if(order[r][1]==4)
	        		{
	        			cout<<endl<<"\t\t\tBeef Roll \t\t\tRs.100"<<endl;
					}
					else if(order[r][1]==5)
	        		{
	        			cout<<endl<<"\t\t\tBeef Mayo Roll \t\t\tRs.120"<<endl;
					}
					else if(order[r][1]==6)
	        		{
	        			cout<<endl<<"\t\t\tGyro \t\t\t\tRs.160"<<endl;
					}
				}
				else if(order[r][0]==4)
	        	{
	        		 if(order[r][1]==1)
	        		{
	        			cout<<endl<<"\t\t\tFinger Fish \t\t\tRs.450"<<endl;
					}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tGrilled Fish \t\tRs.550"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tFish Handi \t\t\tRs.1000"<<endl;
					}
				}
				else if(order[r][0]==5)
	        	{
	        		if(order[r][1]==1)
	        		{
	        			cout<<endl<<"\t\t\tPlain Naan \t\t\tRs.30"<<endl;
					}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tGarlic Naan \t\t\tRs.40"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tChapati \t\t\tRs.20"<<endl;
					}
					else if(order[r][1]==4)
	        		{
	        			cout<<endl<<"\t\t\tPuri Paratha \t\tRs.40"<<endl;
					}
				}
				else if(order[r][0]==6)
	        	{	
	        		 if(order[r][1]==1)
	        		{
	        			cout<<endl<<"\t\t\tMango \t\t\tRs.150"<<endl;
				}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tStrawberry \t\t\tRs.150"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tChocolate \t\t\tRs.150"<<endl;
					}
					else if(order[r][1]==4)
	        		{
	        			cout<<endl<<"\t\t\tBlueberry \t\t\tRs.150"<<endl;
					}
				}
				else if(order[r][0]==7)
	        	{
	        		if(order[r][1]==1)
	        		{
	        		cout<<endl<<"\t\t\tExtra Cheese Slice \t\tRs.40"<<endl;	
					}
					else if(order[r][1]==2)
	        		{
	        			cout<<endl<<"\t\t\tMayo Sauce \t\t\tRs.30"<<endl;
					}
					else if(order[r][1]==3)
	        		{
	        			cout<<endl<<"\t\t\tWater Bottle Large \t\tRs.70"<<endl;
					}
					else if(order[r][1]==4)
	        		{
	        			cout<<endl<<"\t\t\tWater Bottle Small \t\tRs.40"<<endl;
					}
					
				}
				r++;
				n--;
			}
			cout<<endl<<"\t\t\tTotal \t\t\t\t"<<totalamount<<endl;
		}
		void Menu()
		{
		  char choice='y';
		    n=0;
		    totalamount=0;
		   do
		   {
		   system("cls");
				cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
            	displayAddress();
         	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
			cout<<endl<<"\t\t\t\t           MENU CARD";
			cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
			cout<<endl<<endl<<endl<<"Choose the type of food you like to order:";
			cout<<endl<<endl<<"1) Bar.B.Q"<<endl<<"2) Fast Food"<<endl<<"3) Rolls";
			cout<<endl<<"4) Fish"<<endl<<"5) Tandoor"<<endl<<"6) Ice-creams";
			cout<<endl<<"7) Extras"<<endl;
//			int x,chk_bb,chk_mb,chk_t,beef_bb,afg_b,mut_c,chk_b,chk_cb,cri_zb,smo_bb,beef_cb,gri_cs,cs,ms;
//			int chk_r,chk_cr,chk_mr,beef_r,beef_mr,gyro,ff,gf,fh,pn,gn,ch,pp,ice_m,ice_s,ice_c,ice_b,ecs,MaS,wbl,wbs;
	    	cin>>x;
	    	order[n][0]=x;
			switch (x)
			{
				case 1:
					{
						cout<<endl<<"Which dish would you want to try?";
						cout<<endl<<"1) Chicken Behari Boti \t\tRs.500"<<endl<<"2) Chicken Malai Boti \t\tRs.600";
						cout<<endl<<"3) Chicken Tikka \t\tRs.200"<<endl<<"4) Beef Bihari Boti \t\tRs.490";
						cout<<endl<<"5) Afghani Boti \t\tRs.450"<<endl<<"6) Mutton Chops \t\tRs.750"<<endl;
						int a;
						cin>>a;
						order[n][1]=a;
						switch (a)
						{
							case 1:
								{
								
									totalamount+= 500;
									break;
								}
							case 2:
								{
									
									totalamount+= 600;
									break;
								}
							case 3:
								{
									totalamount+= 200;
									break;
								}
							case 4:
								{
	
									totalamount+= 490;
									break;
								}
							case 5:
								{
									totalamount+= 450;
									break;
								}
							case 6:
								{
									totalamount+= 750;
									break;
								}
						}
						break;
						
					}
				case 2:
					{
						cout<<endl<<"Which dish would you want to try?";
						cout<<endl<<"1) Chicken Burger \t\t\tRs.170"<<endl<<"2) Chicken Cheese Burger \t\tRs.200";
						cout<<endl<<"3) Crispy Zinger Burger \t\tRs.230"<<endl<<"4) Smoky Beef Burger \t\t\tRs.180";
						cout<<endl<<"5) Beef Cheese Burger \t\t\tRs.210"<<endl<<"6) Grilled Chicken Sandwich \t\tRs.240";
						cout<<endl<<"7) Club Sandwich \t\t\tRs.250"<<endl<<"8) Mexican Sandwich \t\t\tRs.300"<<endl;
						int b;
						cin>>b;
						order[n][1]=b;
						switch (b)
						{
							case 1:
								{
									totalamount+= 170;
									break;
								}
							case 2:
								{
									totalamount+= 200;
									break;
								}
							case 3:
								{
									totalamount+= 230;
									break;
								}
							case 4:
								{
									totalamount+= 180;
									break;
								}
							case 5:
								{
									totalamount+= 210;
									break;
								}
							case 6:
								{
									totalamount+= 240;
									break;
								}
							case 7:
								{
									totalamount+= 250;
									break;
								}
							case 8:
								{
									totalamount+= 300;
									break;
								}
						}break;
					}
				case 3:
					{
						cout<<endl<<"Which roll would you want to try?";
						cout<<endl<<"1) Chicken Roll \t\t\tRs.100"<<endl<<"2) Chicken Cheese Roll \t\t\tRs.120";
						cout<<endl<<"3) Chicken Mayo Roll \t\t\tRs.120"<<endl<<"4) Beef Roll \t\t\t\tRs.100";
						cout<<endl<<"5) Beef Mayo Roll \t\t\tRs.120"<<endl<<"6) Gyro \t\t\t\tRs.160"<<endl;
						int c;
						cin>>c;
						order[n][1]=c;
						switch (c)
						{
							case 1:
								{
									totalamount+= 100;
									break;
								}
							case 2:
								{
									totalamount+= 120;
									break;
								}
							case 3:
								{
									totalamount+= 120;
									break;
								}
							case 4:
								{
									totalamount+= 100;
									break;
								}
							case 5:
								{
									totalamount+= 120;
									break;
								}
							case 6:
								{
									totalamount+= 160;
									break;
								}
						}break;
					}
				case 4:
					{
						cout<<endl<<"Which dish would you want to try?";
						cout<<endl<<"1) Finger Fish \t\t\tRs.450"<<endl<<"2) Grilled Fish \t\tRs.550";
						cout<<endl<<"3) Fish Handi \t\t\tRs.1000"<<endl;
						int d;
						cin>>d;
						order[n][1]=d;
						switch (d)
						{
							case 1:
								{
									totalamount+= 450;
									break;
								}
							case 2:
								{
									totalamount+= 550;
									break;
								}
							case 3:
								{
									totalamount+= 1000;
									break;
								}
						}break;
					}
				case 5:
					{
						cout<<endl<<"Which naan would you prefer?";
						cout<<endl<<"1) Plain Naan \t\t\tRs.30"<<endl<<"2) Garlic Naan \t\t\tRs.40";
						cout<<endl<<"3) Chapati \t\t\tRs.20"<<endl<<"4) Puri Paratha \t\tRs.40"<<endl;
						int e;
						cin>>e;
						order[n][1]=e;
						switch (e)
						{
							case 1:
								{
									totalamount+= 30;
									break;
								}
							case 2:
								{
									totalamount+= 40;
									break;
								}
							case  3:
								{
									totalamount+= 20;
									break;
								}
							case 4:
								{
									totalamount+= 40;
									break;
								}
						}break;
					}
				case 6:
					{
						cout<<endl<<"Which flavor would you want to try?";
						cout<<endl<<"1) Mango \t\t\tRs.150"<<endl<<"2) Strawberry \t\t\tRs.150";
						cout<<endl<<"3) Chocolate \t\t\tRs.150"<<endl<<"4) Blueberry \t\t\tRs.150"<<endl;
						int f;
						cin>>f;
						order[n][1]=f;
						switch (f)
						{
							case 1:
								{
									totalamount+= 150;
									break;
								}
							case 2:
								{
									totalamount+= 150;
									break;
								}
							case 3:
								{
									totalamount+= 150;
									break;
								}
							case 4:
								{
									totalamount+= 150;
									break;
								}
						}break;
					}
				case 7:
					{
						cout<<endl<<"Want something extra?";
						cout<<endl<<"1) Extra Cheese Slice \t\tRs.40"<<endl<<"2) Mayo Sauce \t\t\tRs.30";
						cout<<endl<<"3) Water Bottle Large \t\tRs.70"<<endl<<"4) Water Bottle Small \t\tRs.40"<<endl;
						int g;
						cin>>g;
						order[n][1]=g;
						switch (g)
						{
							case 1:
								{
									totalamount+= 40;
									break;
								}
							case 2:
								{
									totalamount+= 30;
									break;
								}
							case 3:
								{
									totalamount+= 70;
									break;
								}
							case 4:
								{
									totalamount+= 40;
									break;
								}
						}break;
					}
			}
			
			cout<<"Want to order more y/n \n";
			cin>>choice;
			n++;
		}while(choice=='y');
		}

};
class Staff: public Person,public Restaurant{
	private:
		int dayofjoin;
		int monthofjoin;
		int yearofjoin;
		string Type;
		int levelofjob;
		int salary;
	
	public:	
	Staff(int day=0,int month=0,int year=0,string type=" ",int level=0,int salary1=0)
	{
		 dayofjoin=day;
		 monthofjoin=month;
		 yearofjoin=year;
		 Type=type;
		 levelofjob=level;
		salary=salary1;
		
	}
	void getData()
	{
			Person::getData();
		cout<<"Enter the Day he/she will be joinning : \n";
		cin>>dayofjoin;
			cout<<"Enter the Month he/she will be joinning : \n";
		cin>>monthofjoin;
			cout<<"Enter the Year he/she will be joinning : \n";
		cin>>yearofjoin;
		cout<<"Enter the Type of job he/she will get : \n";
		cin>>Type;
		cout<<"Enter the level he/she will get (1-3)  : \n";
		cin>>levelofjob;
		cout<<"Enter the Salary he/she will get(Monthly) : \n";
		cin>>salary;
		ofstream outfile("Restaurant.txt",ios::app);
		outfile<<dayofjoin<<" "<<monthofjoin <<" "<<yearofjoin <<" "<<Type<<" "<<levelofjob<<" "<<salary<<endl;
		outfile.close();	
	}
	void DisplayPersonalInformation()
	{
		Person::DisplayPersonalInformation();
		}	
	void DisplayImportantInformation()
	{		cout<<Gendermention<<" Joinning Date is : "<<dayofjoin<<":"<<monthofjoin<<":"<<yearofjoin<<endl;
			cout<<"The type of "<<Gendermention<<" job will be : "<<Type<<" and level of job will be : "<<levelofjob<<endl;
			cout<<"And "<<Gendermention<<" Salary will be : "<<salary<<endl;
		}	
};

class Administrative:public Staff
{
	private:
		string education;
		string communication_skills;
		string telephone_skills;
		string problem_solving_skills;
		string managing_skills;
		int input;
	public:
		void Delete_file()
		{
			system("cls");
				fstream file,file1;
				file.open("Restaurant.txt",ios::in);
				file1.open("Temp.txt",ios::out);
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want to delete: ";
				cin>>cnic;
				if (file.is_open() && file1.is_open())
				{
					file.seekg(0,ios::beg);
					while(file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type>>levelofjob>>salary)
					{
						
						if(CNIC == cnic)
						{
							continue;
						}
						else
						{
						file1<<name<<" "<<CNIC<<" "<<age<<" "<<d.day<<" "<<d.month<<" "<<d.year<<" "<<a.Area<<" "<<a.City<<" "<<a.houseno<<" "<<gender<<" "<<dayofjoin<<" "<<monthofjoin<<" "<<yearofjoin<<" "<<type<<" ";
						file1<<levelofjob<<" "<<salary<<endl;
						}
					}
				}
				file.close();
				file1.close();
				remove("Restaurant.txt");
				rename("Temp.txt","Restaurant.txt");
				cout<<endl<<"Data deleted succesfully\n";
		}
		void read_file()
			{
				fstream file;
				file.open("Restaurant.txt");
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want: ";
				cin>>cnic;
				if (file.is_open())
				{
					file.seekg(0,ios::beg);
					while(file)
					{
						file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type;
						file>>levelofjob>>salary;
						if(CNIC == cnic)
						{
							cout<<endl<<"Name: "<<name<<endl<<"CNIC: "<<CNIC<<endl<<"Age: "<<age<<endl<<"Day of Birth: "<<d.day;
							cout<<endl<<"Month of Birth: "<<-d.month<<endl<<"Year of Birth: "<<-d.year<<endl<<"House No: "<<a.houseno;
							cout<<endl<<"Area: "<<a.Area<<endl<<"City: "<<a.City<<endl<<"Gender: "<<gender<<endl<<"Day of Joining: "<<dayofjoin;
							cout<<endl<<"Month of Joining: "<<monthofjoin<<endl<<"Year of Joining: "<<yearofjoin<<endl<<"Job type: "<<type;
							cout<<endl<<"Level: "<<levelofjob<<endl<<"Salary: "<<salary<<endl;
							break;
						}
					}
				}
				file.close();
			}
		void getData()
		{
			Staff::getData();
			input=1;
			cout<<endl<<"press"<<endl<<"1) Receptionist"<<endl<<"2) Manager"<<endl<<"3) Other"<<endl<<"4) Exit\n";
			cin>>input;
			if(input==1)
			{
				cin.ignore();
				set_education();
				set_communication_skills();
				set_telephone_skills();
				set_managing_skills();
				set_problem_solving_skills();
			}
			else if(input==2)
			{
				cin.ignore();
				set_education();
				set_managing_skills();
				set_communication_skills();
				set_problem_solving_skills();
			}
		    else if(input==3)
			{
				cin.ignore();
				set_education();
				set_managing_skills();
				set_communication_skills();
				set_problem_solving_skills();
			}
			else
			{
				exit(1);
			}
	 }
	 void DisplayPersonalInformation()
	 {
	 		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
			Staff::DisplayPersonalInformation();
		
	 }
	 void DisplayImportantInformation()
	{		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
		Staff::DisplayImportantInformation();
		cout<<Gendermention<<" Education is : "<<education<<endl;
		cout<<Gendermention<<" Communication skills are : "<<communication_skills<<endl;
		cout<<Gendermention<<" Managing skills are : "<<managing_skills<<endl;
		cout<<Gendermention<<" Problem solving skills are : "<<problem_solving_skills<<endl;
		if(this->input==1)
		cout<<Gendermention<<" Telephone solving skills are : "<<telephone_skills<<endl;
		}	
		void set_education()
		{
			cout<<endl<<"Enter the education: (MBA,BBA,Other)"<<endl;
	        getline(cin,education);
		}
		string get_education()
		{
			return(education);
		} 
			void set_communication_skills()
		{
			int x;
		     cout<<endl<<"Enter the communication skills: ";
			cout<<endl<<"Enter"<<endl<<"1) good"<<endl<<"2)very good"<<endl<<"3) excellent"<<endl;
	         cin>>x;
	         if(x==1)
	         {
	         	communication_skills="good";
			 }
			 else if(x==2)
	         {
	         	communication_skills="very good";
			 }
			 else if(x==3)
	         {
	         	communication_skills="excellent";
			 }
			 else 
			 {
			 	cout<<"Wrong Input\n";
			 	set_communication_skills();
			 }
		}
		string get_communication_skills()
		{
			return(communication_skills);
		}
		void set_telephone_skills()
		{
			int x;
			cout<<endl<<"Enter the Telephone skills: ";
			cout<<endl<<"Enter"<<endl<<"1) good"<<endl<<"2)very good"<<endl<<"3) excellent"<<endl;
	        cin>>x;
	         if(x==1)
	         {
	         	telephone_skills="good";
			 }
			 else if(x==2)
	         {
	         	telephone_skills="very good";
			 }
			 else if(x==3)
	         {
	         	telephone_skills="excellent";
			 }
			 else 
			 {
			 	cout<<"Wrong Input\n";
			 	set_telephone_skills();
			 }
		}
		string get_telephone_skills()
		{
			return(telephone_skills);
		}
		void set_problem_solving_skills()
		{
			int x;
			cout<<endl<<"Enter the problem solving skills: ";
	        cout<<endl<<"Enter"<<endl<<"1) good"<<endl<<"2)very good"<<endl<<"3) excellent"<<endl;
	        cin>>x;
	         if(x==1)
	         {
	         	problem_solving_skills="good";
			 }
			 else if(x==2)
	         {
	         	problem_solving_skills="very good";
			 }
			 else if(x==3)
	         {
	         	problem_solving_skills="excellent";
			 }
			 else 
			 {
			 	cout<<"Wrong Input\n";
			 	set_problem_solving_skills();
			 }
		}
		string get_problem_solving_skills()
		{
			return(problem_solving_skills);
		}
			void set_managing_skills()
		{
			int x;
			cout<<endl<<"Enter the managing skills: ";
	        cout<<endl<<"Enter"<<endl<<"1) good"<<endl<<"2)very good"<<endl<<"3) excellent"<<endl;
	        cin>>x;
	         if(x==1)
	         {
	         	managing_skills="good";
			 }
			 else if(x==2)
	         {
	         	managing_skills="very good";
			 }
			 else if(x==3)
	         {
	         	managing_skills="excellent";
			 }
			 else 
			 {
			 	cout<<"Wrong Input\n";
			 	set_managing_skills();
			 }
		}
		string get_managing_skills()
		{
			return(managing_skills);
		}
			
	
		
};

class Security:public Staff
{
	private:
		string gun;
		string rank;
		int experience;
		string shifts;
		string Duty_Location;
	public:
			void Delete_file()
		{
			system("cls");
				fstream file,file1;
				file.open("Restaurant.txt",ios::in);
				file1.open("Temp.txt",ios::out);
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want to delete: ";
				cin>>cnic;
				if (file.is_open() && file1.is_open())
				{
					file.seekg(0,ios::beg);
					while(file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type>>levelofjob>>salary)
					{
						
						if(CNIC == cnic)
						{
							continue;
						}
						else
						{
						file1<<name<<" "<<CNIC<<" "<<age<<" "<<d.day<<" "<<d.month<<" "<<d.year<<" "<<a.Area<<" "<<a.City<<" "<<a.houseno<<" "<<gender<<" "<<dayofjoin<<" "<<monthofjoin<<" "<<yearofjoin<<" "<<type<<" ";
						file1<<levelofjob<<" "<<salary<<endl;
						}
					}
				}
				file.close();
				file1.close();
				remove("Restaurant.txt");
				rename("Temp.txt","Restaurant.txt");
				cout<<endl<<"Data deleted succesfully\n";
		}
		void read_file()
			{
				fstream file;
				file.open("Restaurant.txt");
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want: ";
				cin>>cnic;
				if (file.is_open())
				{
					file.seekg(0,ios::beg);
					while(file)
					{
						file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type;
						file>>levelofjob>>salary;
						if(CNIC == cnic)
						{
							cout<<endl<<"Name: "<<name<<endl<<"CNIC: "<<CNIC<<endl<<"Age: "<<age<<endl<<"Day of Birth: "<<d.day;
							cout<<endl<<"Month of Birth: "<<-d.month<<endl<<"Year of Birth: "<<-d.year<<endl<<"House No: "<<a.houseno;
							cout<<endl<<"Area: "<<a.Area<<endl<<"City: "<<a.City<<endl<<"Gender: "<<gender<<endl<<"Day of Joining: "<<dayofjoin;
							cout<<endl<<"Month of Joining: "<<monthofjoin<<endl<<"Year of Joining: "<<yearofjoin<<endl<<"Job type: "<<type;
							cout<<endl<<"Level: "<<levelofjob<<endl<<"Salary: "<<salary<<endl;
							break;
						}
					}
				}
				file.close();
			}
		void getData()
		{
			Staff::getData();
				set_experience();
				set_rank();
				set_shifts();
				set_gun();
				set_Duty_Location();
		}
		 void DisplayPersonalInformation()
	 	{
	 		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
			Staff::DisplayPersonalInformation();
		
	 }
	 void DisplayImportantInformation()
	{		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
		Staff::DisplayImportantInformation();
		cout<<Gendermention<<" Experience is of : "<<experience<<" years"<<endl;
		cout<<Gendermention<<" Rank is : "<<rank<<endl;
		cout<<Gendermention<<" Shift is : "<<shifts<<endl;
		cout<<Gendermention<<" Gun is : "<<gun<<endl;
		cout<<Gendermention<<" Duty will be at : "<<Duty_Location<<endl;
		}	
	 	 
		void set_experience()
		{
			cout<<endl<<"Enter the years of experience:\n ";
			cin>>experience;
		}
		int get_experience()
		{
			return(experience);
		}
		void set_gun()
		{
			int x;
			cout<<endl<<"Enter the type of gun he will get: "<<endl;
			cout<<endl<<"Enter: "<<endl<<"1) Glock G17 Gen 4"<<endl<<"2) Sig Sauer P229"<<endl<<"3) Smith & Wesson M&P 9"<<endl<<"4) CZ-75B"<<endl<<"5) Smith & Wesson M&P 9"<<endl;
			//cin.ignore();
			cin>>x;
		    if(x==1)
		    {
		    	gun="Glock G17 Gen 4";
			}
			else if(x==2)
		    {
		    	gun="Sig Sauer P229";
			}
			else if(x==3)
			{
				gun="Smith & Wesson M&P 9";
			}
			else if(x==4)
			{
				gun="CZ-75B";
			}
			else if(x==5)
			{
				gun="Smith & Wesson M&P 9";
			}
			else
			{
				cout<<"Wrong Input\n";
				set_gun();
			}
		}
			void set_Duty_Location()
		{
			int x;
			cout<<endl<<"Enter where "<<Gendermention<<" Duty will Be: "<<endl;
			cout<<endl<<"Enter: "<<endl<<"1) Main Gate"<<endl<<"2) Interior Area"<<endl<<"3) Other Areas"<<endl;
			cin>>x;
		    if(x==1)
		    {
		    	Duty_Location="Main Gate";
			}
			else if(x==2)
		    {
		       Duty_Location="Interior Area";
			}
			else if(x==3)
			{
				Duty_Location="Other Areas";
			}
			else
			{
				cout<<"Wrong Input\n";
				set_Duty_Location();
			}
		}
		void set_rank()
		{
			int x;
			cout<<endl<<"Enter the rank of security guard: ";
			cout<<endl<<"1) High"<<endl<<"2) Low"<<endl<<"3) Very low "<<endl;
			cin>>x;
		    if(x==1)
		    {
		    	rank="High";
			}
			else if(x==2)
			{
				rank="Low";
			}
			else if(x==3)
			{
				rank="Very Low";
			}
			else
			{
				cout<<"Wrong Input\n";
				set_rank();
		}
		}
		string get_Duty_Location()
		{
			return(Duty_Location);
		}
		string get_rank()
		{
			return(rank);
		}
		string get_gun()
		{
			return(gun);
		}
		void set_shifts()
		{
			int x;
			cout<<endl<<"Enter the shift of security guard: ";
			cout<<endl<<"Enter "<<endl<<"1) morning form (8a.m to 4p.m)"<<endl<<"2) night form (4 p.m to 8a.m)"<<endl;
			cin>>x;
		    if(x==1)
		    {
		    	shifts="morning";
			}
			else if(x==2)
			{
				shifts="night";
			}
			else
			{
				cout<<"Wrong Input\n";
				set_shifts();
			}
		}
		
};
class Operational:public Staff{
	private:
		int experience;
		string time_managing_skills;
		string education;
	public:
			void Delete_file()
		{
			system("cls");
				fstream file,file1;
				file.open("Restaurant.txt",ios::in);
				file1.open("Temp.txt",ios::out);
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want to delete: ";
				cin>>cnic;
				if (file.is_open() && file1.is_open())
				{
					file.seekg(0,ios::beg);
					while(file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type>>levelofjob>>salary)
					{
						
						if(CNIC == cnic)
						{
							continue;
						}
						else
						{
						file1<<name<<" "<<CNIC<<" "<<age<<" "<<d.day<<" "<<d.month<<" "<<d.year<<" "<<a.Area<<" "<<a.City<<" "<<a.houseno<<" "<<gender<<" "<<dayofjoin<<" "<<monthofjoin<<" "<<yearofjoin<<" "<<type<<" ";
						file1<<levelofjob<<" "<<salary<<endl;
						}
					}
				}
				file.close();
				file1.close();
				remove("Restaurant.txt");
				rename("Temp.txt","Restaurant.txt");
				cout<<endl<<"Data deleted succesfully\n";
		}
		void read_file()
			{
				fstream file;
				file.open("Restaurant.txt");
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want: ";
				cin>>cnic;
				if (file.is_open())
				{
					file.seekg(0,ios::beg);
					while(file)
					{
						file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type;
						file>>levelofjob>>salary;
						if(CNIC == cnic)
						{
							cout<<endl<<"Name: "<<name<<endl<<"CNIC: "<<CNIC<<endl<<"Age: "<<age<<endl<<"Day of Birth: "<<d.day;
							cout<<endl<<"Month of Birth: "<<-d.month<<endl<<"Year of Birth: "<<-d.year<<endl<<"House No: "<<a.houseno;
							cout<<endl<<"Area: "<<a.Area<<endl<<"City: "<<a.City<<endl<<"Gender: "<<gender<<endl<<"Day of Joining: "<<dayofjoin;
							cout<<endl<<"Month of Joining: "<<monthofjoin<<endl<<"Year of Joining: "<<yearofjoin<<endl<<"Job type: "<<type;
							cout<<endl<<"Level: "<<levelofjob<<endl<<"Salary: "<<salary<<endl;
							break;
						}
					}
				}
				file.close();
			}
		void getData()
		{
			    Staff::getData();
			    set_experience();
			    set_education();
			    set_time_managing_skills();
		}
		
			void set_education()
		{
			cout<<endl<<"Enter the education: (Matric,Inter,Other)"<<endl;
			cin.ignore();
	        getline(cin,education);
		}
		string get_education()
		{
			return(education);
		} 
			void set_time_managing_skills()
		{
			int x;
			cout<<endl<<"Enter the Time managing skills: ";
	        cout<<endl<<"Enter"<<endl<<"1) good"<<endl<<"2)very good"<<endl<<"3) excellent"<<endl;
	        cin>>x;
	         if(x==1)
	         {
	         	time_managing_skills="good";
			 }
			 else if(x==2)
	         {
	         	time_managing_skills="very good";
			 }
			 else if(x==3)
	         {
	         	time_managing_skills="excellent";
			 }
			 else 
			 {
			 	cout<<"Wrong Input\n";
			 	set_time_managing_skills();
			 }
		}
		void set_experience()
		{
			cout<<endl<<"Enter the years of experience: ";
			cin>>experience;
			if(experience<=0)
			{
				cout<<endl<<"years of experince must be greater than zero: ";
				set_experience();
			}
		}
		int get_experience()
		{
			return(experience);
		}
		void DisplayPersonalInformation()
	 {
	 		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
			Staff::DisplayPersonalInformation();
		
	 }
	  void DisplayImportantInformation()
	{		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
		Staff::DisplayImportantInformation();
		cout<<Gendermention<<" Experience is of : "<<experience<<" years"<<endl;
			cout<<Gendermention<<" Education is : "<<education<<endl;
		cout<<Gendermention<<" Time Managing skills are : "<<time_managing_skills<<endl;}
};
class Chef:public Staff
{
	private:
		string type_of_chef;
		int experience;
	public:
			void Delete_file()
		{
			system("cls");
				fstream file,file1;
				file.open("Restaurant.txt",ios::in);
				file1.open("Temp.txt",ios::out);
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want to delete: ";
				cin>>cnic;
				if (file.is_open() && file1.is_open())
				{
					file.seekg(0,ios::beg);
					while(file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type>>levelofjob>>salary)
					{
						
						if(CNIC == cnic)
						{
							continue;
						}
						else
						{
						file1<<name<<" "<<CNIC<<" "<<age<<" "<<d.day<<" "<<d.month<<" "<<d.year<<" "<<a.Area<<" "<<a.City<<" "<<a.houseno<<" "<<gender<<" "<<dayofjoin<<" "<<monthofjoin<<" "<<yearofjoin<<" "<<type<<" ";
						file1<<levelofjob<<" "<<salary<<endl;
						}
					}
				}
				file.close();
				file1.close();
				remove("Restaurant.txt");
				rename("Temp.txt","Restaurant.txt");
				cout<<endl<<"Data deleted succesfully\n";
		}
		void read_file()
			{
				fstream file;
				file.open("Restaurant.txt");
				int cnic , CNIC , age , dayofjoin , monthofjoin , yearofjoin , levelofjob , salary;
				DOB d;
				Address a;
				string name , gender , type , edu , comskill , manageskill , prob_solve_skill;
				cout<<endl<<"Enter the CNIC of member whose information you want: ";
				cin>>cnic;
				if (file.is_open())
				{
					file.seekg(0,ios::beg);
					while(file)
					{
						file>>name>>CNIC>>age>>d.day>>d.month>>d.year>>a.Area>>a.City>>a.houseno>>gender>>dayofjoin>>monthofjoin>>yearofjoin>>type;
						file>>levelofjob>>salary;
						if(CNIC == cnic)
						{
							cout<<endl<<"Name: "<<name<<endl<<"CNIC: "<<CNIC<<endl<<"Age: "<<age<<endl<<"Day of Birth: "<<d.day;
							cout<<endl<<"Month of Birth: "<<-d.month<<endl<<"Year of Birth: "<<-d.year<<endl<<"House No: "<<a.houseno;
							cout<<endl<<"Area: "<<a.Area<<endl<<"City: "<<a.City<<endl<<"Gender: "<<gender<<endl<<"Day of Joining: "<<dayofjoin;
							cout<<endl<<"Month of Joining: "<<monthofjoin<<endl<<"Year of Joining: "<<yearofjoin<<endl<<"Job type: "<<type;
							cout<<endl<<"Level: "<<levelofjob<<endl<<"Salary: "<<salary<<endl;
							break;
						}
					}
				}
				file.close();
			}
		void getData()
		{
			    Staff::getData();
				set_experience();
				set_type();
		}
		
		void DisplayPersonalInformation()
	 {
	 		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
			Staff::DisplayPersonalInformation();
		
	 }
	  void DisplayImportantInformation()
	{		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
		Staff::DisplayImportantInformation();
		cout<<Gendermention<<" Experience is of : "<<experience<<" years"<<endl;
		cout<<Gendermention<<" Type is : "<<type_of_chef<<endl;
		}	
	 	
		void set_experience()
		{
			cout<<endl<<"Enter the years of experience: ";
			cin>>experience;
			if(experience<=0)
			{
				cout<<endl<<"years of experince must be greater than zero: ";
				set_experience();
			}
		}
		int get_experience()
		{
			return(experience);
		}
		void set_type()
		{
			int x;
			cout<<endl<<"Enter the type of chef: "<<endl<<"Enter"<<endl<<"1) Pastry Chef (Patissier)"<<endl<<"2) Station Chef (Chef de Partie)"<<endl<<"3) Saucier"<<endl<<"4) Fish Cook (Poissonier)"<<endl<<"5) Vegetable Cook (Entremetier)"<<endl<<"6) Dishwasher"<<endl<<"7) Executive Chef (Chef de Cuisine)"<<endl;
			cin>>x;
			if(x==1)
			{
				type_of_chef="Pastry Chef (Patissier)";
			}
			else if(x==2)
			{
				type_of_chef="Station Chef (Chef de Partie)";
			}
			else if(x==3)
			{
				type_of_chef="Saucier";
			}
			else if(x==4)
			{
				type_of_chef="Fish Cook (Poissonier)";
			}
			else if(x==5)
			{
				type_of_chef="Vegetable Cook";
			}
			else if(x==6)
			{
				type_of_chef="Dishwasher";
			}
			else if(x==7)
			{
				type_of_chef="Executive Chef (Chef de Cuisine)";
			}
			else
			{
				cout<<"Wrong Input\n";
				set_type();
			}
			
		}
		string get_type()
		{
			return(type_of_chef);
		}
}; 

class Management:public Restaurant{
	private:
		double l_revenue;
		double electricitybill;
		double expenses;
		double loss;
		double profit;
		double salaries;
		double n_revenue;
		double earning;
		double l_earning;
	public:
	Managment()
	{
		l_revenue=0.0;
		electricitybill=0.0;
		expenses=0.0;
		loss=0.0;
		profit=0.0;
		n_revenue=0.0;
		salaries=0.0;
		earning=0.0;
		l_earning=0.0;
	}	
	void read_management()
	{
		ifstream file;
				file.open("Expense.txt");
				double l_revenue , elec_bill , expe , loss , profit , n_revenue , salaries , earn , l_earn;
						file>>l_revenue>>elec_bill>>expe>>loss>>profit>>n_revenue>>salaries>>earn>>l_earn;
						cout<<endl<<"Last Month Revenue: "<<l_revenue<<endl<<"Electricity: "<<elec_bill<<endl<<"Expenses: "<<expe<<endl<<"Loss: "<<loss;
							cout<<endl<<"Profit: "<<profit<<endl<<"New Revenue: "<<n_revenue<<endl<<"Salaries: "<<salaries;
							cout<<endl<<"Earnings: "<<earn<<endl<<"Last Month Earnings: "<<l_earn<<endl;
				file.close();
	}
	void getData()
	{
		
	 		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
			cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
		cout<<"Enter revenue of the Restaurant till last month : ";
		cin>>l_revenue;
		cout<<"Enter this month's total Expenses : ";
		cin>>expenses;
		cout<<"Enter the amount of this month's Electriricity Bill : ";
		cin>>electricitybill;
		cout<<"Enter the total amount that will bs given as salaries to Staff : ";
		cin>>salaries;
		cout<<"Enter last months total earning : ";
		cin>>l_earning;
		cout<<"Enter this months total earning : ";
		cin>>earning;
			profit=earning-electricitybill-expenses-salaries;
				n_revenue=l_revenue+earning;
				loss=l_earning-profit;
			ofstream outfile("Expense.txt",ios::app);
			outfile<<l_revenue<<" "<<electricitybill<<" "<<expenses<<" "<<salaries<<" "<<l_earning<<" "<<earning<<" "<<profit<<" "<<loss<<" "<<n_revenue<<endl;
	}
	void Display()
	{
		system("cls");
		
	 		cout<<"\t\t\t\t\t"<<restaurantname<<endl;
				cout<<"\t\t\t\t\t";
	displayAddress();
	cout<<endl;
	        cout<<"\t\t\t\t\t--------------"<<endl;
		cout<<"Restaurant's Revenue till last month was "<<l_revenue<<endl<<"Electricity Bill of this Month = "<<electricitybill<<endl;
		cout<<"Expenses of this month = "<<expenses<<endl<<"Salaries given this month = "<<salaries<<endl;
		profit=earning-electricitybill-expenses-salaries;
		n_revenue=l_revenue+earning;
		cout<<endl<<"Restaurant Revenue now = "<<l_revenue+earning<<endl<<"this month's Profit = "<<earning-electricitybill-expenses-salaries<<endl;
		cout<<"This Month's loss = "<<l_earning-profit<<endl;
		
	}
		
		
};

bool Password(char* paw)
{
	int i=0;
	char ch;
	do
	{
		ch=getch();
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || ch==' ' || ch=='/' || ch=='-')
		{
			paw[i]=ch;
			i++;
			cout<<"*";
		}
		else if(ch==8 && i>0)
		{
			cout<<"\b\b";
			i--;
		}
	}while(i!=8);
	paw[9]='\0';
	int j,k=0;
	for(j=0;j<8;j++)
	{
		if(paw[j]==check[j])
		k++;
	}
	if(k==8)
	return(true);
	else
	return(false);
	
	
}

int main()
{
char Passwordcheck[9];
Restaurant r1;
int x,n=0,choice;
char loop='y';
Person *p1[200];
do
{
    system("cls");
	cout<<"\t\t\t\t\t"<<r1.getrestaurantname()<<endl;
	cout<<"\t\t\t\t\t";	
	r1.displayAddress();
	cout<<endl;
	cout<<"\t\t\t\t\t--------------"<<endl;
	cout<<"Enter 1 To Make an Order\nEnter 2 if you are the Admin\n";
	cin>>x;
	if(x==1)
	{
		p1[n]=new Customer;
		system("cls");
		p1[n]->Menu();
		char Ask='y';
		system("cls");
		while(Ask=='y' || Ask=='Y')
		{
		cout<<"Do you want to change the desired items what you have selected?\nEnter Yes Or No y/n\n";
		cin>>Ask;
		if(Ask=='y')
		{
		p1[n]->Menu();}
		}
		 system("cls");
			p1[n]->getCustomerData();
			p1[n]->Bill();
			p1[n]->DisplayCustomerData();
		n++;
	}
	else if(x==2)
	{
		system("cls");
		cout<<"\t\t\t\t\t"<<r1.getrestaurantname()<<endl;
	cout<<"\t\t\t\t\t";	
	r1.displayAddress();
	cout<<endl;
	cout<<"\t\t\t\t\t--------------"<<endl;
		cout<<"\n\n\n\n\t\t\t\t\tEnter The Password\n";
		cout<<"\t\t\t\t\tPassword : ";
		if(Password(Passwordcheck))
		{
			system("cls");
		int departmentchoice;
		cout<<endl<<"Enter 1 for Administrative Department staff\n";
		cout<<"Enter 2 for Security Department staff\n";
		cout<<"Enter 3 for Operational Department staff\n";
		cout<<"Enter 4 for Chef Department\n";
		cout<<"Enter 5 to Manage Hotel Expenses and profit\n";
		cin>>departmentchoice;
		switch(departmentchoice)
		{
			case 1:
				{
					system("cls");
					cout<<"\t\t\t\tWelcome to the administrative section \n\n";
					int choice1,choice2;
					p1[n]=new Administrative;
					cout<<"Enter 1 if you are hiring a new Employee\nEnter 2 if you want to display details of Administrative Staff member\n";
					cin>>choice1;
					if(choice1==1)
					{
					p1[n]->getData();
					system("cls");
				cout<<"Enter 1 for Displaying Personal Information\nEnter 2 for Displaying only important Information\nEnter 3 for displaying both personal and important information\nEnter 4 to Exit the system\n";
					cin>>choice2;
					if(choice2==1)
					{
						p1[n]->DisplayPersonalInformation();
					}
					else if(choice2==2)
					{
						p1[n]->DisplayImportantInformation();
					}
					else if(choice2==3)
				{
				p1[n]->DisplayPersonalInformation();
				p1[n]->DisplayImportantInformation();}
				else if(choice2==4)
				{
					exit(1);
				}
				else
				{
				cout<<"Wrong Input\n";
					break;
				}
				n++;
				    }
				    else if(choice1==2)
				    {
				    		int choice3 , choice4;
				    		cout<<endl<<"1) Display Information.\n2) To delete any Employee\n"<<endl;
				    		cin>>choice3;
				    	
				    		if (choice3==1)
				    		{
				    			p1[n]->read_file();
				    		}
				    		else if(choice3==2)
				    		{
				    			p1[n]->Delete_file();
							}
							else
							{
								cout<<"Wrong Option\n";
							}
							n++;
							break;
					}
					else
					{
						cout<<"Wrong Option\n";
						
					}
		         break;
				}
				case 2:
				{
					system("cls");
					cout<<"\t\t\t\tWelcome to the Security section \n\n";
					int choice1,choice2;
					p1[n]=new Security;
					cout<<"Enter 1 if you are hiring a new Employee\nEnter 2 if you want to display details of any Security Staff member\n";
					cin>>choice1;
					if(choice1==1)
					{
					p1[n]->getData();
					system("cls");
				cout<<"Enter 1 for Displaying Personal Information\nEnter 2 for Displaying only important Information\nEnter 3 for displaying both personal and important information\nEnter 4 to Exit the system\n";
					cin>>choice2;
					if(choice2==1)
					{
						p1[n]->DisplayPersonalInformation();
					}
					else if(choice2==2)
					{
						p1[n]->DisplayImportantInformation();
					}
					else if(choice2==3)
				{
				p1[n]->DisplayPersonalInformation();
				p1[n]->DisplayImportantInformation();}
				else if(choice2==4)
				{
					exit(1);
				}
				else
				{
				cout<<"Wrong Input\n";
					break;
				}
				n++;
				    }
				    else if(choice1==2)
				    {
				    		int choice3 , choice4;
				    		cout<<endl<<"1) Display Information.\n2) To delete any Employee\n"<<endl;
				    		cin>>choice3;
				    	
				    		if (choice3==1)
				    		{
				    			p1[n]->read_file();
				    		}
				    		else if(choice3==2)
				    		{
				    			p1[n]->Delete_file();
							}
							else
							{
								cout<<"Wrong Option\n";
							}
							n++;
						    break;
					}
					else
					{
						cout<<"Wrong Option\n";
					
					}
		         break;
				}
				case 3:
				{
					system("cls");
					cout<<"\t\t\t\tWelcome to the Operational section \n\n";
					int choice1,choice2;
					p1[n]=new Operational;
					cout<<"Enter 1 if you are hiring a new Employee\nEnter 2 if you want to display details of any Operational Staff member\n";
					cin>>choice1;
					if(choice1==1)
					{
					p1[n]->getData();
					system("cls");
				cout<<"Enter 1 for Displaying Personal Information\nEnter 2 for Displaying only important Information\nEnter 3 for displaying both personal and important information\nEnter 4 to Exit the system\n";
					cin>>choice2;
					if(choice2==1)
					{
						p1[n]->DisplayPersonalInformation();
					}
					else if(choice2==2)
					{
						p1[n]->DisplayImportantInformation();
					}
					else if(choice2==3)
				{
				p1[n]->DisplayPersonalInformation();
				p1[n]->DisplayImportantInformation();}
				else if(choice2==4)
				{
					exit(1);
				}
				else
				{
				cout<<"Wrong Input\n";
					break;
				}
				n++;
				    }
				    else if(choice1==2)
				    {
				    		int choice3 , choice4;
				    		cout<<endl<<"1) Display Information.\n2) To delete any Employee\n"<<endl;
				    		cin>>choice3;
				    	
				    		if (choice3==1)
				    		{
				    			p1[n]->read_file();
				    		}
				    		else if(choice3==2)
				    		{
				    			p1[n]->Delete_file();
							}
							else
							{
								cout<<"Wrong Option\n";
							}
							n++;
							break;
					}
					else
					{
						cout<<"Wrong Option\n";
					}
		         break;
				}
					case 4:
				{
					system("cls");
					cout<<"\t\t\t\tWelcome to the Chef section \n\n";
					int choice1,choice2;
					p1[n]=new Chef;
					cout<<"Enter 1 if you are hiring a new Chef\nEnter 2 if you want to display details of any Chef\n";
					cin>>choice1;
					if(choice1==1)
					{
					p1[n]->getData();
					system("cls");
				cout<<"Enter 1 for Displaying Personal Information\nEnter 2 for Displaying only important Information\nEnter 3 for displaying both personal and important information\nEnter 4 to Exit the system\n";
					cin>>choice2;
					if(choice2==1)
					{
						p1[n]->DisplayPersonalInformation();
					}
					else if(choice2==2)
					{
						p1[n]->DisplayImportantInformation();
					}
					else if(choice2==3)
				{
				p1[n]->DisplayPersonalInformation();
				p1[n]->DisplayImportantInformation();}
				else if(choice2==4)
				{
					exit(1);
				}
				else
				{
				cout<<"Wrong Input\n";
					break;
				}
				n++;
				    }
				     else if(choice1==2)
				    {
				    		int choice3 , choice4;
				    		cout<<endl<<"1) Display Information.\n2) To delete any Employee\n"<<endl;
				    		cin>>choice3;
				    	
				    		if (choice3==1)
				    		{
				    			p1[n]->read_file();
				    		}
				    		else if(choice3==2)
				    		{
				    			p1[n]->Delete_file();
							}
							else
							{
								cout<<"Wrong Option\n";
							}
							n++;
							break;
					}
					else
					{
						cout<<"Wrong Option\n";
					}
		         break;
				}
				case 5:
				{
					system("cls");
					cout<<"\t\t\t\tWelcome to the Management section \n\n";
					int choice1,choice2;
					Restaurant *r;
					r=new Management;
					cout<<"Enter 1 if you want to calculate profit and loss\nEnter 2 if you want to display previos data\n";
					cin>>choice1;
					if(choice1==1)
					{
					r->getData();
					system("cls");
                    r->Display();
				    }
				    else if(choice1==2)
				    {
				    		r->read_management();
					}
					else
					{
						cout<<"Wrong Option\n";
					}
		         break;
				}
	}
}


else
{
	cout<<endl<<"Wrong Password\n";
}
}
	else
	{
		cout<<"Wrong Input\n";
	}
   	cout<<endl<<"Want to go main menu Again? y/n \n";
	cin>>loop;	
}while(loop=='y');	

return(0);	
}
