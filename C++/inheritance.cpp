#include<iostream>
using namespace std;
class inheritance
{
	private:
		int regno;  //this is variable declaration	
		string name;
	public:
		void getdata()     //fuction declaraion
		{
		   cout<<"enter the regno:";
		   cin>>regno;
		   cout<<"enter the name:";
		   cin>>name;
		   	 	
		}
        void putdata()
		{
			cout<<"regno is  "<<regno<<endl;
			cout<<"name is  "<<name<<endl;
			
			}	
	
	
};
class secondpart : public inheritance//derived class which is been inheritated from the base class.
{
	private:
	int	m1,m2,m3,total;
	public:
		void givedata()
		{
			cout<<"enter three subject marks:";
			cin>>m1>>m2>>m3;
			total=m2+m1+m3;
		}
	    void showdata()
	    {
	    	cout<<"marks1="<<m1<<endl;
	    	cout<<"marks2="<<m2<<endl;
	    	cout<<"marks3="<<m3<<endl;
	    	cout<<"total="<<total<<endl;
	    	
		}
};
int main(void)  //main funtion declararion. where the program execution start.
{
	secondpart obj;
	obj.getdata();
	obj.putdata();
	obj.givedata();
	obj.showdata();
	return 0;
	
}
	
	
	
