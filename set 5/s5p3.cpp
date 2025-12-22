#include<iostream>
using namespace std;
class Book{
    int bookId;
    string title;
    string author;
    float price;
    public:
    Book(){
          bookId=0;
          title="";
          author="";
          price=0;
    }
    Book(int id, string t, string a, float p){
          bookId=id;
          title=t;
          author=a;
          price=p;
    }
    void getData(){
          cout<<"Enter Book ID: ";
          cin>>bookId;
          cout<<"Enter Book Title: ";
          cin>>title;
          cout<<"Enter Book Author: ";
          cin>>author;
          cout<<"Enter Book Price: ";
          cin>>price;
    }
    void displayData(){
          cout<<"Book ID: "<<bookId<<endl;
          cout<<"Book Title: "<<title<<endl;
          cout<<"Book Author: "<<author<<endl;
          cout<<"Book Price: "<<price<<endl;
    }
};