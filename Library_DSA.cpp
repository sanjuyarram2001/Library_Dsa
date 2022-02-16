#include <bits/stdc++.h>
using namespace std;
class Book
{
	public:
		string name, publication, ISBN;
	string takenby;
	vector<string> author;
	double price, uses, numofsales;
	bool availability;



	
};
int Substr(string s1, string s2)
{
    int counter = 0; 
  int i=0;
    for(i=0;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?-1:i-counter;
}
void change(string &s)
{
	int n = s.length();
   for(int i=0;i<n;i++){
       // checking for uppercase alphabets
       if(int(s[i]) >= 65 && int(s[i]) <= 90){
           s[i]=s[i] + 32;
       }
   }	
}
vector <string> print(vector<Book> v,string s)
{
	vector<string> substr;
change(s);


   
   
	for(int i=0;i<v.size();i++)
	{
		change(v[i].name);
		if(v[i].name.size()>=s.size()&&v[i].availability)
		if(Substr(v[i].name,s)!=-1)
		{
			substr.push_back(v[i].name);
		}
	}
	return substr;
}
void 	strt(map<string,int> &book_num,	vector<Book> &v,	set<pair<int, string> > &topuses,	set<pair<int, string> > &topcost,	set<pair<int, string> > &topselling, 	set<pair<int, string> > &cheapcost )
{
 Book b;
            b.name="happy";
            change(b.name);
			b.publication="hello";
			b.ISBN="1000000000000";
			b.takenby="";	
			b.price=100;			
		    b.numofsales=123;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("Mahender");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
			b.author.pop_back()
			
			;b.name="erased"
			
            ;
			change(b.name);
			b.publication="pencil";
			b.ISBN="1000000000001";
			b.takenby="";	
			b.price=1001;			
		    b.numofsales=134;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("suchendra");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back()
			
		    ;;b.name="thomas_calculus"
		    
            ;
			change(b.name);
			b.publication="Finding";
			b.ISBN="1000000000002";
			b.takenby="";	
			b.price=1007;			
		    b.numofsales=1340;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("thomas");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back()
			
			;
			b.name="harry_potter"
            ;
			change(b.name);
			b.publication="Nodding";
			b.ISBN="1000000000003";
			b.takenby="";	
			b.price=107;			
		    b.numofsales=13400;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("Rowling");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="3_mistkaes_of_my_life"
            ;
			change(b.name);
			b.publication="Howling";
			b.ISBN="1000000000004";
			b.takenby="";	
			b.price=1017;			
		    b.numofsales=1400;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("Rowling");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
				
			b.name="advd"
            ;
			change(b.name);
			b.publication="dan";
			b.ISBN="1000000000005";
			b.takenby="";	
			b.price=10107;			
		    b.numofsales=1500;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("sumit");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="engineering_mathematics"
            ;
			change(b.name);
			b.publication="kvr";
			b.ISBN="1000000000006";
			b.takenby="";	
			b.price=10107;			
		    b.numofsales=1500;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("sharan_gopal");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="sneking"
            ;
			change(b.name);
			b.publication="pulluri";
			b.ISBN="1000000000007";
			b.takenby="";	
			b.price=10107;			
		    b.numofsales=15009;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("saketh");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="bits_catalogue"
            ;
			change(b.name);
			b.publication="swd";
			b.ISBN="1000000000008";
			b.takenby="";	
			b.price=10107;			
		    b.numofsales=15009;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("swd_nucleus");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="chess";
			change(b.name);
			b.publication="fide";
			b.ISBN="1000000000009";
			b.takenby="";	
			b.price=101087;			
		    b.numofsales=17009;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("vishy_anand");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
		    b.name="comparch";
		    change(b.name);
			b.publication="bits_phoenix";
			b.ISBN="1000000000010";
			b.takenby="";	
			b.price=101087;			
		    b.numofsales=17009;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("chetan");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="social_network";
			change(b.name);
			b.publication="hbo";
			b.ISBN="1000000000011";
			b.takenby="";	
			b.price=101187;			
		    b.numofsales=170089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("david_finch");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
		    b.name="placing";
		    change(b.name);
			b.publication="volleyball";
			b.ISBN="1000000000012";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("varun_Sai");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="toppr";
			change(b.name);
			b.publication="squad";
			b.ISBN="1000000000013";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("ssm");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="ghot";
			change(b.name);
			b.publication="squad_bphc";
			b.ISBN="1000000000014";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("pulluri");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
				b.name="physics";
				change(b.name);
			b.publication="dept_physics";
			b.ISBN="1000000000015";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("kannan");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();

            b.name="fpga";
            change(b.name);
			b.publication="dept_phoenix";
			b.ISBN="1000000000016";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("chetan");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="electrical_machines";
			change(b.name);
			b.publication="dept_phoenix";
			b.ISBN="1000000000017";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("mondal");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name }); 
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="control_systems";
			change(b.name);
			b.publication="dept_phoenix";
			b.ISBN="1000000000018";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("alivelu");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name }); 
				cheapcost.insert({ b.price, b.name });  
				b.author.pop_back();
			
			b.name="math-2";
			change(b.name);
			b.publication="dept_maths";
			b.ISBN="1000000000019";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("pksahoo");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
			
			b.name="biology";
			change(b.name);
			b.publication="dept_bio";
			b.ISBN="1000000000020";
			b.takenby="";	
			b.price=101067;			
		    b.numofsales=17089;
			b.availability = 1;
			b.uses = 0;	
			b.author.push_back("mahapatra");										
			book_num[b.name] = v.size() + 1;
			v.push_back(b);
			topuses.insert({ b.uses, b.name });
			topcost.insert({ b.price, b.name });
			topselling.insert({ b.numofsales, b.name });
				cheapcost.insert({ b.price, b.name });
				b.author.pop_back();
}
void studentacc(	map<string, string> &s_user_pwd)
{
	string user,pwd;
	       user="f20190485";
	       pwd="bits789";
		  s_user_pwd[user]=pwd;
		  
		    user="f20170300";
	       pwd="idk";
		  s_user_pwd[user]=pwd;
		  
		  user="f20180001";
	       pwd="wish";
		  s_user_pwd[user]=pwd;
		  
		  user="f20010001";
	       pwd="0001";
		  s_user_pwd[user]=pwd;
		  
		  user="f20020002";
	       pwd="0002";
		  s_user_pwd[user]=pwd;
		  
		  user="admin";
	       pwd="admin";
		  s_user_pwd[user]=pwd;
}
int main()
{
	cout << "WELCOME" << endl;
	string pwd = "dsa";
	map<string, string> s_user_pwd;
	map<string, int> book_num;
	set<pair<int, string> > topuses, topcost, topselling,cheapcost;
	vector<Book> v;
	//1 admin 2 student

	;
	strt(book_num,	v,	 topuses, topcost, topselling,cheapcost );
	studentacc(s_user_pwd);
//	cout<<v.size();
		string num;

	back_student_admin:
		cout << "if you are admin press 1 else press 2" << endl;
	cin >> num;

	if (num == "1")
	{
		string password;
		enter_password:
			cout << "enter password"<< endl;
		cin >> password;

		if (password == pwd)
		{
			selecting_option: cout << "admin menu:" << endl << "please choose the  option" << endl << "1: add new book " << endl << "2: add new student account" << endl << "3: book avaibility status" << endl << "4: log out" <<endl<< "5: get information on book" << endl<<"6: substring checker"<<endl<<"7: end programme"<<endl;;
			int num;
			cin >> num;
			if (num == 1)
			{
				addnewbook: Book b;
			
				cout << "enter book name"<< endl;
			cin >> b.name;
			change(b.name);
			if(book_num[ b.name]!=0)
			{
				cout<<"this book already exists please enter a valid book"<<endl;
				wrongenter_bookadd:
				cout<<"if you want to add another book press 0 , if you want to  go to admin menu press 1, if you want to log out press 2"<<endl
				;int num;
				cin>>num;
				if(num==0)
				{
					goto addnewbook;
				}
				else if(num==1)
				{
					goto selecting_option;
				}
				else if(num==2)
				{
					goto back_student_admin;
				}
				else 
				{
					cout<<"please enter a valid option"<<endl;
					goto wrongenter_bookadd;
				}
			}
				cout << "enter book publication"<< endl;
			cin >>  b.publication;
				cout << "enter book ISBN"<< endl;
			cin >>  b.ISBN;
				cout << "enter book price"<< endl;
			cin >>  b.price;
				cout << "enter number of book sales"<< endl;
			cin >>  b.numofsales;
			b.availability = 1;
			b.uses = 0;
			
				cout << "enter number of book author"<< endl;
			int  NumberOfAuthors;
			cin >>  NumberOfAuthors;
			while ( NumberOfAuthors)
			{
				cout << "enter book author name"<< endl;
				string author_name;
				cin >> author_name;
				 b.author.push_back(author_name);
				 NumberOfAuthors--;
			}
			//*///b.create(book_num);
				
				book_num[b.name] = v.size() + 1;
				v.push_back(b);
				topuses.insert({ b.uses, b.name });
				topcost.insert({ b.price, b.name });
				topselling.insert({ b.numofsales, b.name });
					cheapcost.insert({ b.price, b.name });
				cout << "succesfull addition" << endl;
				bookaddsucces: cout << "if you want to log out press 1,  if you want to go to admin menu press 2, if you want add another book press 3 " << endl;
				int num;
				cin >> num;
				if (num == 1)
				{
					cout << "Succesfully logged out" << endl;
					goto back_student_admin;
				}
				else if (num == 2)
				{
					cout << endl;
					goto selecting_option;
				}
				else if (num == 3)
				{
					cout << endl;
					goto addnewbook;
				}
				else
				{
					cout << endl;
					cout << "please enter valid option" << endl;
					goto bookaddsucces;
				}
			}
			else if(num==7)
			{
				return 0;
			}
			else if (num == 2)
			{
				create_sid: cout << "please tell your institute user id" << endl;
				string uname, s_password;
				cin >> uname;
					if(s_user_pwd[uname]!="")
		{
			cout<<"this account already exists"<<endl;
				againerror:
				cout<<"if you want to add another account press 0 , if you want to  go to student menu press 1, if you want to log out press 2"<<endl;
				int num;
				cin>>num;
				if(num==0)
				{
					goto create_sid;
				}
				else if(num==1)
				{
					goto selecting_option;
				}
				else if(num==2)
				{
					goto back_student_admin;
				}
				else 
				goto againerror;
		}
				cout << "please enter your password" << endl;
				cin >> s_password;
				s_user_pwd[uname] = s_password;
				cout << "Succesfully Created" << endl;
				id_success: cout << "if you want to create another student account press 1, if you want to go to admin menu press 2, if you want to logout press 3" << endl;
				int num;
				cin >> num;
				if (num == 3)
				{
					cout << "Succesfully logged out"<< endl;
					goto back_student_admin;
				}
				else if (num == 2)
				{
					cout << endl;
					goto selecting_option;
				}
				else if (num == 1)
				{
					cout << endl;
					goto create_sid;
				}
				else
				{
					cout << endl;
					cout << "please enter valid option" << endl;
					goto id_success;
				}
			}
			else if (num == 3)
			{
				enter_name: cout << "Enter book name" << endl;
				string b_name;
				cin >> b_name;
				change(b_name);
				if (book_num[b_name] == 0)
				{
					wrongentry: cout << "the book name which you have entered is not matching with the data in data base ,if you want to renter press 0, if you want to go to admin page press 1, if you want to go to log put press 2" << endl;
					int num;
					cin >> num;
					if (num == 0)
					{
						goto enter_name;
					}
					else if (num == 1)
					{
						goto selecting_option;
					}
					else if (num == 2)
					{
						goto back_student_admin;
					}
					else
					{
						cout << "invalid option please choose again" << endl;
						goto wrongentry;

					}
				}
				else
				{
					if (v[book_num[b_name] - 1].takenby == "")
					{
						cout << "currently available" << endl;
						cout << "if you want to check another book status press 0 ,if you want to go to admin menu press 1, if you want to logout press 3"<< endl;
						cout << endl;
						int num;
						cin >> num;
						if (num == 0)
						{
							goto enter_name;
						}
						else if (num == 1)
						{
							goto selecting_option;
						}
						else
						{
							goto back_student_admin;
						}
					}
					else
					{
						cout << "taken by " << v[book_num[b_name] - 1].takenby << endl;
						cout << "if you want to check another book status press 0 ,if you want to go to admin menu press 1, if you want to logout press 3 "<< endl;
						cout << endl;
						int num;
						cin >> num;
						if (num == 0)
						{
							goto enter_name;
						}
						else if (num == 1)
						{
							goto selecting_option;
						}
						else
						{
							goto back_student_admin;
						}
					}
				}
			}
			else if (num == 4)
			{
				goto back_student_admin;
			}
			else if (num == 5)

			{
				admin_booktype: cout << "please enter the book name" << endl << "some general guidelines:" << endl << "please use '_'insted of space and ensure all characters are in lowercase" << endl;
				string bname;
				cin >> bname;
				change(bname);
				if (book_num[bname] == 0)
				{
					admin_invalidbookname: cout << "BOOK IS NOT AVAILABLE IN LIBRARY PLEASE either check the book name and type again if there is any spell error, if uwant to try again press 0, if you want to go to admin menu press 2 ,if you want to log out press 3 "<< endl;int num;
					cin >> num;
					if (num == 0)
					{
						goto admin_booktype;
					}
					
					else if (num == 2)
					{
						goto selecting_option;
					}
					else if (num == 3)
					{
						cout << "succesfully logged out" << endl;
						goto back_student_admin;
					}
					else
					{
						cout << "please enter valid option" << endl;

						goto admin_invalidbookname;
					}
				}
				else
				{
					int ind = book_num[bname] - 1;
					cout << "name: " << v[ind].name << endl;;
					cout << "publication: " << v[ind].publication << endl;
					cout << "ISBN: " << v[ind].ISBN << endl;
					cout << "price: " << v[ind].price << endl;
					if(v[ind].author.size()==1)
					cout<<"author is:"<<endl;
					else
					cout<<"authors are"<<endl;
					for (int i = 0; i < v[ind].author.size(); i++)
					{
					
						cout << v[ind].author[i] << endl;
					}

					cout << "number of uses:" <<endl<<v[ind].uses << endl;
					cout << "curretly it is "<< endl;
					if (v[ind].availability)
					{
						cout << "available"<< endl;
					}
					else
						cout << "unavailable"<< endl;

					admin_searchotherbook:
						cout << "If you wish to search another book press 0 or if you want to goto admin menu page press 1"<< endl;
					int num;
					cin >> num;
					if (num == 0)
					{
						goto admin_booktype;
					}
					else if (num == 1)
					{
						goto selecting_option;
					}
					else
					{
						cout << "INVALID please select again" << endl;
						goto admin_searchotherbook;
					}
				}
			}else if(num==6)
			{
				checking_sub:
				cout<<"enter the string you want to check"<<endl;
				string s;
				cin>>s; 
				change(s);
				vector<string> sub =print(v,s);
				if(sub.size()==0)
				{
					cout<<"there are no matching substrings";
				}
				else
				cout<<"there are "<<sub.size()<<" matching substrings"<<endl;
				
				for(int i=0;i<sub.size();i++)
				{
					cout<<sub[i]<<endl;
				}
				cout<<"successfully printed"<<endl;
				enter_Sub:
				cout<<"if you want to check another substring press 0, if you want to go to admin menu press 1, if you want to log out press 2"<<endl;
				int num;
				cin>>num;
				if(num==0)
				{
					goto checking_sub;
				}
				else if( num==1)
				{
					goto selecting_option;
				}
				else if(num==2)
				{
					goto back_student_admin;
				}
				else
				{
					cout<<"please enter a valid option "<<endl;
					goto enter_Sub;
				}
			}
			else
			{
				cout << "enter valid option"<< endl;
				goto selecting_option;
			}
		}
		else
		{
			cout << " password is incorrect" << endl << "if you want to go back enter 1 else enter 0"<< endl;

			int num;
			cin >> num;
			if (num == 1)
			{
				goto back_student_admin;
			}
			else
			{
				goto enter_password;
			}
		}
	}
	else if (num == "2")
	{
		student_login: string suname;
		cout << "please enter your user id" << endl;
		cin >> suname;
		
		cout << "please enter your password" << endl;
		string pwd;
		cin >> pwd;
		
		if (s_user_pwd[suname] == pwd)
		{
			cout << "welcome" << endl;
		}
		else
		{
			cout << "please check your user id and password and enter again" << endl;
			renter:
				cout << "if you want to reneter your credetials press 0 or if you want to goto start page press 1" << endl;
			int num = 0;
			cin >> num;
			if (num == 0)
			{
				goto student_login;
			}
			else if (num == 1)
			{
				goto back_student_admin;
			}
			else
			{
				cout << "invalid option please select again" << endl;
				goto renter;
			}
		}

		selecting_option_student:

			cout << "student menu" << endl << "please choose the  option" << endl << "1:  get information on a book" << endl << "2: withdraw book " << endl << "3: deposit" << endl << "4: top n" << endl << "5: log out" << endl<<"6 : substring matcher"<<endl;
		int num;
		cin >> num;
		if (num == 1)
		{
			booktype: cout << "please enter the book name" << endl << "some general guidelines:" << endl << "please use '_'insted of space and ensure all characters are in lowercase" << endl;
			string bname;
			cin >> bname;
			change(bname);
			if (book_num[bname] == 0)
			{
				invalidbookname: cout << "BOOK IS NOT AVAILABLE IN LIBRARY PLEASE either check the book name and type again if there is any spell error  if uwant to try again press 0 ,if you want to go to student menu press 2, if you want to log out press 3"<< endl
				;
				int num;
				cin >> num;
				if (num == 0)
				{
					goto booktype;
				}
				
				else if (num == 2)
				{
					goto selecting_option_student;
				}
				else if (num == 3)
				{
					cout << "succesfully logged out" << endl;
					goto back_student_admin;
				}
				else
				{
					cout << "please enter valid option" << endl;
					goto invalidbookname;
				}
			}
			else
			{
				int ind = book_num[bname] - 1;
				
				cout << "name: " << v[ind].name << endl;;
				cout << "publication: " << v[ind].publication << endl;
				cout << "ISBN: " << v[ind].ISBN << endl;
				cout << "price: " << v[ind].price << endl;
				for (int i = 0; i < v[ind].author.size(); i++)
				{
					cout << v[ind].author[i] << endl;
				}

				cout << "number of uses" << v[ind].uses << endl;
				cout << "curretly it is ";
				if (v[ind].availability)
				{
					cout << "available"<< endl;
				}
				else
					cout << "unavailable"<< endl;

				searchotherbook:

					cout << "If you wish to search another book press 0 or if you want to goto student option page press 1 or if you want to log out press 2"<< endl;
				int num;
				cin >> num;
				if (num == 0)
				{
					goto booktype;
				}
				else if (num == 1)
				{
					goto selecting_option_student;
				}
				else if (num == 2)
				{
					cout << "succesfully logged out"<< endl;
					goto back_student_admin;
				}
				else
				{
					cout << "INVALID please select again" << endl;
					goto searchotherbook;
				}
			}
		}
		else if (num == 2)
		{
			//withdraw
			withdraw: 
			cout << "enter book name" << endl;
			string wbook;
			cin >> wbook;
				change(wbook);
			if (book_num[wbook] == 0)
			{
				cout << "the book name you entered is either spelled wrong or not in list of books provide by library, you can either request for book or retype the correct book name" << endl;
				withdraw_boook:
					cout << " if you want to withdraw other book you can press 0, if you want go to student menu press 2,if you want to logout press 3"<< endl;
				int numwithdraw;
				cin >> numwithdraw;
				if (numwithdraw == 0)
				{
					goto withdraw;
				}
			
				else if (numwithdraw == 2)
				{
					goto selecting_option_student;
				}
				else if (numwithdraw == 3)
				{
					goto back_student_admin;
				}
				else
				{
					cout << "invalid option please select valid option " << endl;
					goto withdraw_boook;
				}
			}
			else
			{
			if(v[book_num[wbook] - 1].takenby!="")
			{
				cout<<"book is already withdrawn by others"<<endl;
				withdraw_boook_mistake:
				cout << "if you want to withdraw another book  press 0, if you want go to student menu press 2,if you want to logout press 3"<< endl;
				int numwithdraw;
				cin >> numwithdraw;
				if (numwithdraw == 0)
				{
					goto withdraw;
				}
			
				else if (numwithdraw == 2)
				{
					goto selecting_option_student;
				}
				else if (numwithdraw == 3)
				{
					goto back_student_admin;
				}
				else
				{
					cout << "invalid option please select valid option " << endl;
					goto withdraw_boook_mistake;
				}
			}
				
				v[book_num[wbook] - 1].availability = 0;
				topuses.erase({ v[book_num[wbook] - 1].uses, wbook });
				topcost.erase({ v[book_num[wbook] - 1].price, wbook });
				topselling.erase({ v[book_num[wbook] - 1].numofsales, wbook });
				v[book_num[wbook] - 1].uses++;
				v[book_num[wbook] - 1].takenby = suname;
				cout << "successfully withdrawn"<< endl;
				withdrainvalid:
					cout << "if you want to withdraw another book press 0, if you want to go to student menu press1, if you want to log out press 2"<< endl;
				int num;
				
				cin >> num;
				if (num == 0)
				{
					goto withdraw;
				}
				else if (num == 1)
				{
					goto selecting_option_student;
				}
				else if (num == 2)
				{
					cout << "succesfully logged out"<< endl;
					goto back_student_admin;
				}
				else
				{
					goto withdrainvalid;
				}

			}
		}
		else if (num == 3)
		{
			deposit: cout << "enter book name" << endl;
			string wbook;
			cin >> wbook;
				change(wbook);
			if (book_num[wbook] == 0)
			{
				wrongdepobook: cout << "the book name you entered is either spelled wrong please retype the correct book name" << endl;
				cout << "if you want to renter  press 0 else student menu you can press 1, logout press 2"<< endl;
				string numdeposit;
				cin >> numdeposit;
				if (numdeposit == "0")
				{
					goto deposit;
				}
				else if (numdeposit == "1")
				{
					goto selecting_option_student;
				}
				else if (numdeposit == "2")
				{
					goto back_student_admin;
				}
				else
				{
					cout << "invalid option please select valid option " << endl;
					goto wrongdepobook;
				}
			}
			else
			{
				if(v[book_num[wbook] - 1].takenby!=suname)
				{
					cout<<"you have not taken this book"<<endl;
					wrongdepowrong:
					cout << "if you want to renter  press 0 else student menu you can press 1, logout press 2"<< endl;
				string numdeposit;
				cin >> numdeposit;
				if (numdeposit == "0")
				{
					goto deposit;
				}
				else if (numdeposit == "1")
				{
					goto selecting_option_student;
				}
				else if (numdeposit == "2")
				{
					goto back_student_admin;
				}
				else
				{
					cout << "invalid option please select valid option " << endl;
					goto wrongdepowrong;
				}
					
				}
				v[book_num[wbook] - 1].availability = 1;
				topuses.insert({ v[book_num[wbook] - 1].uses, wbook });
				topcost.insert({ v[book_num[wbook] - 1].price, wbook });
				topselling.insert({ v[book_num[wbook] - 1].numofsales, wbook });
				v[book_num[wbook] - 1].takenby = "";
				cout << "successfully deposited" << endl;
				depositinvalid:
					cout << "if you want to deposit another book press 0, if you want to go to student menu press1, if you want to log out press 3"<< endl;
				int num;
				cin >> num;
				if (num == 0)
				{
					goto deposit;
				}
				else if (num == 1)
				{
					goto selecting_option_student;
				}
				else if (num == 2)
				{
					cout << "succesfully looged out"<< endl;
					goto back_student_admin;
				}
				else
				{
					goto depositinvalid;
				}
			}
		}
		else if(num==6)
			{
				checking_sub_student:
				cout<<"enter the string you want to check"<<endl;
				string s;
				cin>>s; 
					change(s);
				vector<string> sub =print(v,s);
				if(sub.size()==0)
				{
					cout<<"there are no matching substrings";
				}
				else
				cout<<"there are "<<sub.size()<<" matching substrings"<<endl;
				
				for(int i=0;i<sub.size();i++)
				{
					cout<<sub[i]<<endl;
				}
				cout<<"successfully printed"<<endl;
				enter_Sub_student:
				cout<<"if you want to check another substring press 0, if you want to go to student menu press 1, if you want to log out press 2"<<endl;
				int num;
				cin>>num;
				if(num==0)
				{
					goto checking_sub_student;
				}
				else if( num==1)
				{
					goto selecting_option_student;
				}
				else if(num==2)
				{
					goto back_student_admin;
				}
				else
				{
					cout<<"please enter a valid option "<<endl;
					goto enter_Sub_student;
				}
			}
		else if (num == 4)
		{
			top: cout << "Welcome to top n available books, if you want top used book press 1 ,topcostbooks press 2, topselling press 3,cheapcost press 4"<< endl

			;int n;

			cin >> n;
			if (n == 1)
			{
				topnuse: cout << "please enter the number of books you want to see " << "there are currently " << topuses.size() << "books"<< endl;
				int n;
				cin >> n;
				if (n > topuses.size())
				{
					topuseoption: cout << "please enter valid number if you want to type again please press 0 ,if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3 " << endl;
					int depowrong;
					cin >> depowrong;
					if (depowrong == 0)
					{
						goto topnuse;
					}
					else if (depowrong == 1)
					{
						goto top;
					}
					else if (depowrong == 2)
					{
						cout << "successfully logged out"<< endl;
						goto back_student_admin;
					}
					else if (depowrong == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "please enter valid option" << endl;
						goto topuseoption;
					}
				}
				else
				{
					cout << "top" << n << " used books are" << endl;
					int emp = n;
					stack<pair<int, string> > s;
					while (emp)
					{
						emp--;
					//	cout<<"here1";
						cout << ((*(topuses.rbegin()))).second << " number of uses:" << ((*(topuses.rbegin()))).first << endl;
					//	cout<<"here2";
							s.push({ ((*(topuses.rbegin()))).first, ((*(topuses.rbegin()))).second });
						topuses.erase(*topuses.rbegin());
					//	cout<<"here";
					
					//	cout<<"here3";
					}
//cout<<1;
					while (s.size())
					{
						topuses.insert(s.top());
						s.pop();
					}
//cout<<2;
					topinv:
//		cout<<3;
						cout << "if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3"<< endl;
					int num;
					cin >> num;
					if (num == 1)
					{
						goto top;
					}
					else if (num == 2)
					{
						cout << "succesfully logged out" << endl;
						goto back_student_admin;

					}
					else if (num == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "invalid option please choose again" << endl;
						goto topinv;
					}
				}
			}
			else if (n == 2)
			{
				topncost: cout << "please enter the number of books you want to see " << "there are currently " << topcost.size() << "books";
				int n;
				cin >> n;
				if (n > topcost.size())
				{
					cout << "please enter valid number if you want to type again please press 0 else press 1 if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3" << endl;
					int depowrong;
					cin >> depowrong;
					if (depowrong == 0)
					{
						goto topncost;
					}
					else if (depowrong == 1)
					{
						goto top;
					}
					else if (depowrong == 2)
					{
						cout << "successfully logged out"<< endl;
						goto back_student_admin;
					}
					else if (depowrong == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "please enter valid option" << endl;
						goto topuseoption;
					}
				}
				else
				{
					cout << "top" << n << " cost books are" << endl;
					int emp = n;
					stack<pair<int, string> > s;
					while (emp--)
					{
						cout << ((*(topcost.rbegin()))).second << " costly:" << ((*(topcost.rbegin()))).first << endl;
						s.push({ ((*(topcost.rbegin()))).first, ((*(topcost.rbegin()))).second });
						topcost.erase(*topcost.rbegin());
					}

					while (s.size())
					{
						topcost.insert(s.top());
						s.pop();
					}

					topinvi:
						cout << "if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3"<< endl;
					int num;
					cin >> num;
					if (num == 1)
					{
						goto top;
					}
					else if (num == 2)
					{
						cout << "succesfully logged out" << endl;
						goto back_student_admin;

					}
					else if (num == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "invalid option please choose again" << endl;
						goto topinvi;
					}
				}
			}
			else if (n == 3)
			{
				topnsell: cout << "please enter the number of books you want to see " << "there are currently " << topcost.size() << "books"<< endl;
				int n;
				cin >> n;
				if (n > topselling.size())
				{
					topselloption: cout << "please enter valid number if you want to type again please press 0 else press 1 if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3" << endl;
					int depowrong;
					cin >> depowrong;
					if (depowrong == 0)
					{
						goto topnsell;
					}
					else if (depowrong == 1)
					{
						goto top;
					}
					else if (depowrong == 2)
					{
						cout << "successfully logged out"<< endl;
						goto back_student_admin;
					}
					else if (depowrong == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "please enter valid option" << endl;
						goto topselloption;
					}
				}
				else
				{
					cout << "top" << n << " selling books are" << endl;
					int emp = n;
					stack<pair<int, string> > s;
					while (emp--)
					{
						cout << ((*(topselling.rbegin()))).second << " costly:" << ((*(topselling.rbegin()))).first << endl;
						s.push({ ((*(topselling.rbegin()))).first, ((*(topselling.rbegin()))).second });
						topselling.erase(*topselling.rbegin());
					}

					while (s.size())
					{
						topselling.insert(s.top());
						s.pop();
					}

					topinvii:
						cout << "if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3"<< endl;
					int num;
					cin >> num;
					if (num == 1)
					{
						goto top;
					}
					else if (num == 2)
					{
						cout << "succesfully logged out" << endl;
						goto back_student_admin;

					}
					else if (num == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "invalid option please choose again" << endl;
						goto topinvii;
					}
				}
				
				
				
				
				
			}
			else if(num==4)
			{
					cheapnsell: cout << "please enter the number of books you want to see " << "there are currently " << topcost.size() << "books"<< endl;
				int n;
				cin >> n;
				if (n > cheapcost.size())
				{
					cheapcostoption: cout << "please enter valid number if you want to type again please press 0 else press 1 if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3" << endl;
					int depowrong;
					cin >> depowrong;
					if (depowrong == 0)
					{
						goto cheapnsell;
					}
					else if (depowrong == 1)
					{
						goto top;
					}
					else if (depowrong == 2)
					{
						cout << "successfully logged out"<< endl;
						goto back_student_admin;
					}
					else if (depowrong == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "please enter valid option" << endl;
						goto cheapcostoption;
					}
				}
				else
				{
					cout << "top" << n << " selling books are" << endl;
					int emp = n;
					stack<pair<int, string> > s;
					while (emp--)
					{
						cout << ((*(cheapcost.begin()))).second << " costly:" << ((*(cheapcost.begin()))).first << endl;
						s.push({ ((*(cheapcost.begin()))).first, ((*(cheapcost.begin()))).second });
						cheapcost.erase(*cheapcost.begin());
					}

					while (s.size())
					{
						cheapcost.insert(s.top());
						s.pop();
					}

					cheapinvii:
						cout << "if you want go to top preferences menu press 1, if you want to log out press 2,if you want go to student menu press 3"<< endl;
					int num;
					cin >> num;
					if (num == 1)
					{
						goto top;
					}
					else if (num == 2)
					{
						cout << "succesfully logged out" << endl;
						goto back_student_admin;

					}
					else if (num == 3)
					{
						goto selecting_option_student;
					}
					else
					{
						cout << "invalid option please choose again" << endl;
						goto cheapinvii;
					}
				}
				
				
			}
			else {
				validente:
				cout<<"please enter valid option"<<endl;
				cout<<"if you want to go to preferences menu press 1 if you want to goto student menu press 2 , if you want log out press 3";
				int num;
				cin>>num;
				if(num==1)
				{
				goto top;	
				}
				else if( num==2)
				{
					goto selecting_option_student;
				}
				else if( num==3)
				{
					goto back_student_admin;
				}
				else
				{
				goto validente;
				}
			}
		}
		else if(num==5)
		{
			goto back_student_admin;
		}
		else
		{
			cout << "enter valid option"<< endl;
			goto selecting_option_student;
		}
	}
	else
	{
		cout << "Please enter  valid option" << endl;
		goto back_student_admin;
	}
}

//logout
