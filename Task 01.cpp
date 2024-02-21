#include<iostream>
using namespace std;
class Animal{
  int age;
  string color, name;
  bool  isWild;
  public:
  	Animal(int a, string c, string n, bool wild): age(a), color(c), name(n), isWild(wild){}
  	void getter(){
  		cout<<"Enter name of Animal. "<<endl;
  		cin>>name;
  		cout<<"Enter color of Animal."<<endl;
	    cin>>color;
	    cout<<"Enter age of Animal."<<endl;
	    cin>>age;
	    cout<<"Is animal is Wild or not.(1 for Yes 0 for No) "<<endl;
	    cin>>isWild;
	  }
	   void run(){
	   	cout<<name<<" is running. "<<endl;
	   }
	   void eat(){
	   	cout<<name<<" is eating."<<endl;
	   }
	   void walk(){
	   	cout<<name<<" is walking. "<<endl;
	   }
	   void Wild(){
	   	if(isWild==1){
	   	cout<<name<<" is  Wild"<<endl;
	   }
	   else{
	   	cout<<name<<" is not Wild"<<endl;
	   }
     }
};
  	int main(){
  		Animal obj(0, "", "", true);
         obj.getter();
		  obj.run();	
		  obj.eat();
		  obj.walk();
		  obj.Wild();
	  }
