#include <bits/stdc++.h>
using namespace std;

int max_int = 10000009;
struct item
	{
		int id;
		string item_name;
		float mrp;
		float dis;
		float gst;
		float tot_price;
	};
	struct item *item_arr = new struct item[max_int]; 
	struct cart
	{

		vector<int> cart_item;
		float tot_bill;
		
	};
	struct cart *cart_arr = new struct cart[max_int]; 

	struct user
	{
		string name;
		string add;
		string mob;
		string email;
		
	};
	struct user *user_arr = new struct user[max_int]; 
	//int item_cnt = 0;
	vector<int> item_cnt;
vector<string> user_vec(10000009);
bool is_login = false;
static int inc =0;
long long int hash_str(string str)
{   
	int l = 31;
	long long int m=1e7 + 9,hs=0,power=1;
	for(int i=0;i<=str.length();i++)
	{
		hs = (hs+ (str[i] - 'a' + 1) * power)%m ;
		power = (power *l) %m;
		
	}
	return (hs%m +m)%m;
}
void user_details(long long int hs_in)
{       
	    cout<<endl<<endl;
        cout<<setw(20)<<"\t"<<setw(40)<<std::left<<"Name : "<<user_arr[hs_in].name<<endl;
    	cout<<setw(20)<<"\t"<<setw(40)<<std::left<<"Address: "<<user_arr[hs_in].add<<endl;
    	cout<<setw(20)<<"\t"<<setw(40)<<std::left<<"Mobile No.: "<<user_arr[hs_in].mob<<endl;
    	cout<<setw(20)<<"\t"<<setw(40)<<std::left<<"Email Id: "<<user_arr[hs_in].email<<endl;
    	cout<<endl<<endl;
    	for(int i=1;i<=120;i++)
        cout<<"*";
}
void read_item_det()
{
	fstream item_d;
	string str_it;
	int id_it;
	item_d.open("item_det.txt",ios::in|ios::app);
	if(item_d)
	{ 
	while (getline(item_d,str_it))
    {
        if(str_it.size() > 0)	
        {
        id_it = stoi(str_it.substr(0,str_it.find('\t')));
        item_arr[id_it].id = id_it;
        str_it = str_it.substr(str_it.find('\t')+1,str_it.size()-1);
        item_arr[id_it].item_name = str_it.substr(0,str_it.find('\t'));
        str_it = str_it.substr(str_it.find('\t')+1,str_it.size()-1);
        item_arr[id_it].mrp = stof(str_it.substr(0,str_it.find('\t')));
        str_it = str_it.substr(str_it.find('\t')+1,str_it.size()-1);
        item_arr[id_it].dis = stof(str_it.substr(0,str_it.find('\t')));
        if(item_arr[id_it].mrp > 500)
        {
        	item_arr[id_it].gst = 18;
        	item_arr[id_it].tot_price = (item_arr[id_it].mrp) + (item_arr[id_it].mrp)*0.18;
        	item_arr[id_it].tot_price -= ((item_arr[id_it].tot_price)*(item_arr[id_it].dis/100));

        }
        else
        {
        	item_arr[id_it].gst = 0;
        	item_arr[id_it].tot_price = item_arr[id_it].mrp;
        	item_arr[id_it].tot_price -= ((item_arr[id_it].tot_price)*(item_arr[id_it].dis/100));
        }
        item_cnt.push_back(id_it);
        }

	}
	item_d.close();
    }

}
void read_user_file()
{
   fstream det;
   string us,pw,str,name,add,mob,email;
   long long int hs=0;
   det.open("sign_in.txt",ios::in|ios::app);
    if(det)
    {
    while (getline(det,str))
    {
        // Line contains string of length > 0 then save it in vector
        if(str.size() > 0)
        {
        	hs=0;
        	name = str.substr(0,str.find(';'));
        	str = str.substr(str.find(';')+1,str.size()-1);
        	add = str.substr(0,str.find(';'));
        	str = str.substr(str.find(';')+1,str.size()-1);
        	mob = str.substr(0,str.find(';'));
        	str = str.substr(str.find(';')+1,str.size()-1);
        	email = str.substr(0,str.find(';'));
        	str = str.substr(str.find(';')+1,str.size()-1);
        	us = str.substr(0,str.find(';'));
        	pw = str.substr(str.find(';')+1,str.size()-1); 
        	hs = hash_str(us);
        	user_arr[hs].name = name;
        	user_arr[hs].add = add;
        	user_arr[hs].mob = mob;
        	user_arr[hs].email = email;
            user_vec[hs] = pw;
        }
    }
    det.close();   
   }	
}
void main_menu();
void sign_in(long long int);
void dis_cart(long long int hs_in)
{
	char cr_ch,k1;
	int it_del;
	std::vector<int>::iterator it;
	cout<<std::left<<setw(20)<<"Item Id"
	<<std::left<<setw(20)<<"Item Name"<<std::left<<setw(20)
	<<"MRP"<<std::left<<setw(20)
	<<"Discount(%)"<<std::left<<setw(20)
	<<"GST(%)"<<std::left<<setw(20)<<"Buy Price"<<endl<<endl;
for(int i=0;i<cart_arr[hs_in].cart_item.size();i++)
{
	
		cout<<std::left<<setw(20)<<item_arr[cart_arr[hs_in].cart_item[i]].id;
	    cout<<std::left<<setw(20)<<item_arr[cart_arr[hs_in].cart_item[i]].item_name;
	    cout<<std::left<<setw(20)<<item_arr[cart_arr[hs_in].cart_item[i]].mrp;
	    cout<<std::left<<setw(20)<<item_arr[cart_arr[hs_in].cart_item[i]].dis;
	    cout<<std::left<<setw(20)<<item_arr[cart_arr[hs_in].cart_item[i]].gst;
	    cout<<std::left<<setw(20)<<item_arr[cart_arr[hs_in].cart_item[i]].tot_price<<endl;
	
}
cout<<endl<<endl;
cout<<"Total Bill:  Rs. "<<cart_arr[hs_in].tot_bill;
cout<<endl<<endl;
cout<<"\t 1. Place Order"<<endl;
cout<<"\t 2. Delete Item"<<endl;
cout<<"\t 3. Go Back"<<endl<<endl;
cout<<"\t Enter your choice: ";
cin>>cr_ch;
if(cr_ch == '1')
{
	cart_arr[hs_in].cart_item.clear();
	cout<<endl<<"Your Total Bill is:  Rs. "<<cart_arr[hs_in].tot_bill<<endl;
	cart_arr[hs_in].tot_bill = 0;
	cout<<endl<<"Press any key to Go Back to the Sign In Menu. ";
	cin>>k1;
	sign_in(hs_in);
}
else if(cr_ch == '2')
{
	cout<<endl<<"Enter the Item Id you want to delete: ";
	cin>>it_del;
	it = std::find(cart_arr[hs_in].cart_item.begin(),cart_arr[hs_in].cart_item.end(),it_del);
	if(it != cart_arr[hs_in].cart_item.end())
	{
	cart_arr[hs_in].tot_bill -= item_arr[it_del].tot_price;
	cart_arr[hs_in].cart_item.erase(it);
	cout<<endl<<"Item is deleted from the cart."<<endl;
    }
    else
    cout<<endl<<"Item is not present in the cart."<<endl;
    cout<<endl<<"Press any key to Go Back to the Sign In Menu.";
	cin>>k1;
	sign_in(hs_in);
}
else if(cr_ch == '3')
{
	sign_in(hs_in);
}
}
void display(long long int hs_in)
{
	char user_op,cart_y;
	int it_id;
	cout<<endl;
	cout<<"Below is the list of exclusive items that you can buy on this shopping site!!"<<endl<<endl;
	cout<<std::left<<setw(20)<<"Item Id"
	<<std::left<<setw(20)<<"Item Name"<<std::left<<setw(20)
	<<"MRP"<<std::left<<setw(20)
	<<"Discount(%)"<<std::left<<setw(20)
	<<"GST(%)"<<std::left<<setw(20)<<"Buy Price"<<endl<<endl;
	for(int i=0;i<item_cnt.size();i++)
	{
		cout<<std::left<<setw(20)<<item_arr[item_cnt[i]].id;
	    cout<<std::left<<setw(20)<<item_arr[item_cnt[i]].item_name;
	    cout<<std::left<<setw(20)<<item_arr[item_cnt[i]].mrp;
	    cout<<std::left<<setw(20)<<item_arr[item_cnt[i]].dis;
	    cout<<std::left<<setw(20)<<item_arr[item_cnt[i]].gst;
	    cout<<std::left<<setw(20)<<item_arr[item_cnt[i]].tot_price<<endl;
	}
	if(is_login == false)
	{
		cout<<endl<<endl;
		cout<<"Please Sign In to buy the above listed items!!. Thank you"<<endl<<endl;
		cout<<"Press (y|Y) to return to the Main Menu and any other key to Exit."<<endl;
		cin>>user_op;
		if(user_op == 'y' || user_op == 'Y')
		{
			system("cls");
		    main_menu();
	    }
	}
	else
	{
	std::vector<int>::iterator it;
	cout<<endl<<"Do you want to add item to your cart(y|Y): ";
	cin>>cart_y;
	do{
      if(cart_y == 'y' || cart_y == 'Y')
      {
      	cout<<endl;
      	cout<<"Please enter Item Id of the item you want to add: ";
      	cin>>it_id;
      	it = std::find(cart_arr[hs_in].cart_item.begin(),cart_arr[hs_in].cart_item.end(),it_id);
      	if(it == cart_arr[hs_in].cart_item.end())
      	{
      	cart_arr[hs_in].cart_item.push_back(it_id);
      	cart_arr[hs_in].tot_bill += item_arr[it_id].tot_price;
        }
        else
        {
        	cout<<endl<<"Item is already present in the cart.";
        }
      	cout<<endl<<"Press (y|Y) to continue shopping ";
      	cin>>cart_y;
      }
     }while(cart_y =='y' || cart_y =='Y');
     sign_in(hs_in);
	}
}
void sign_up()
{   
	long long int hs=0,hs_user=0;
	char ch_up;
	fstream details,det_up;
	string name,add,mob,email,user_name,pwd,str,us,pw;
	cout<<endl;
	cout<<"Please fill the below details to register yourself."<<endl<<endl;
	cout<<"Enter your Name: ";
	cin>>name;
	cout<<"\nEnter your Address: ";
	cin>>add;
	cout<<"\nEnter your mobile number: ";
	cin>>mob;
	cout<<"\nEnter your email address: ";
	cin>>email;
	cout<<"\nEnter your User Name: ";
	cin>>user_name;
	cout<<"\nEnter your password: ";
	cin>>pwd;
    //if(user_vec.empty())
    //{
    //read_user_file();
    //}
    hs_user = hash_str(user_name);
    if(user_vec[hs_user] != "")
    	cout<<endl<<"Username already exists."<<endl;
       
    else
    {
    cout<<endl<<"User is successfully registered. Please log in to buy the exclusive products on offer"<<endl<<endl;
    user_vec[hs_user] = pwd;
    user_arr[hs_user].name = name;
    user_arr[hs_user].add = add;
    user_arr[hs_user].mob = mob;
    user_arr[hs_user].email = email;
    details.open("Sign_in.txt",ios::app);
	if(details)
	{
	details<<name<<";"<<add<<";"<<mob<<";"<<email<<";"<<user_name<<";"<<pwd<<endl;
    details.close();
    }
    }
     cout<<endl<<"Press any key to return to the Main Menu"<<endl;
     cin>>ch_up;
     system("cls");
     main_menu();
}
void contact(long long int hs_in)
{
	fstream cont;
	string str_cont,shop_n,addr,mob,em;
	char ch;
	if(shop_n == "")
	{
	cont.open("contact_det.txt",ios::in|ios::app);
	if(cont)
	{ 
	while (getline(cont,str_cont))
    {
        if(str_cont.size() > 0)	
        {
        shop_n = str_cont.substr(0,str_cont.find(';'));
        str_cont = str_cont.substr(str_cont.find(';')+1,str_cont.size()-1);
        addr = str_cont.substr(0,str_cont.find(';'));
        str_cont = str_cont.substr(str_cont.find(';')+1,str_cont.size()-1);
        mob = str_cont.substr(0,str_cont.find(';'));
        str_cont = str_cont.substr(str_cont.find(';')+1,str_cont.size()-1);
        em = str_cont.substr(0,str_cont.find(';'));
        }
	}
	cont.close();
    }
   }
   cout<<endl<<endl<<endl;
   cout<<setw(35)<<"\t"<<setw(20)<<std::left<<shop_n<<endl<<endl<<endl;
   cout<<setw(20)<<"\t"<<setw(20)<<std::left<<"Address: "<<addr<<endl;
   cout<<setw(20)<<"\t"<<setw(20)<<std::left<<"Contact No.: "<<mob<<endl;
   cout<<setw(20)<<"\t"<<setw(20)<<std::left<<"Email Id: "<<em<<endl;
   cout<<endl<<endl;
   cout<<"Press any key to return to Main Menu."<<endl;
   cin>>ch;
   system("cls");
   if(is_login)
   	sign_in(hs_in);
   else
   main_menu();
}
void sign_in(long long int hs_in)
{
	//long long int hs_in = 0;
	int ch;
	char ch_main,ch_in;
	string user_in,pwd_in;
	if(!is_login)
	{
	cout<<endl<<"Please enter your Username and Password to Sign In."<<endl<<endl;
	cout<<"Enter Username: ";
	cin>>user_in;
	cout<<endl<<"Enter Password: ";
	cin>>pwd_in;
	/*if(user_vec.empty())
	{
		read_user_file();
	}*/
    hs_in = hash_str(user_in);
    if(user_vec[hs_in] == pwd_in)
    {
    	cout<<"Login successful";
    	is_login = true;
    }
   
    else
    {
    	cout<<endl<<"Invalid Username and Password."<<endl<<endl;
        cout<<"Press any key to return to main menu."<<endl;
	    cin>>ch_in;
		system("cls");
		main_menu();
	}
    }
     if(is_login)
     {
    	system("cls");
    	user_details(hs_in);
    	cout<<endl<<endl;
    	cout<<setw(40)<<"\t"<<setw(10)<<std::left<<"Sign In Menu"<<endl<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"1. Display Items"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"2. Sign Out"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"3. Cart"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"4. Contact Us"<<endl<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"Enter Choice: ";
		cin>>ch;

		switch(ch)
		{
			case 1: system("cls");
			        user_details(hs_in);
			        display(hs_in);
			        break;
			case 2: cout<<endl<<setw(20)<<"User is signed out....."<<endl<<endl;
			        is_login = false;
			        cout<<"Press any key to return to main menu."<<endl;
			        cin>>ch_main;
			        system("cls");
			        main_menu();
			        break;
			case 3: system("cls");
			        user_details(hs_in);
			        dis_cart(hs_in);
			        break;
			case 4: system("cls");
			        user_details(hs_in);
			        contact(hs_in);
			        break;
		}
    }
    

}
void main_menu()
{
	int choice;
	    for(int nw=1;nw<=3;nw++)
	    cout<<endl;
	    cout<<setw(40)<<"\t"<<setw(10)<<std::left<<"Main Menu"<<endl<<endl<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"1. Display"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"2. Sign Up"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"3. Sign In"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"4. Contact Us"<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"5. Exit"<<endl<<endl;
		cout<<setw(30)<<"\t"<<setw(10)<<std::left<<"Enter Choice: ";
		cin>>choice;
		cout<<endl;
		switch(choice)
		{
			case 1: system("cls");
			        display(0);
			        break;
			case 2: system("cls");
			        sign_up();
			        break;
			case 3: system("cls");
			        sign_in(0);
			        break;
			case 4: system("cls");
			        contact(0);
			        break;
			case 5: system("cls");
			        cout<<"Exiting...";
			        break;
            default: cout<<"Please enter a valid choice...";
		}

}
int main()
{
	user_vec.clear();
	read_user_file();
	read_item_det();
	main_menu();
	delete [] item_arr;
	delete [] cart_arr;
	delete [] user_arr;
	return 0;
}