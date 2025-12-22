#include<iostream>
using namespace std;
class Item{
    public:
    int code;
    string name;
    int quantity;
    Item operator+(const Item &i){
            Item temp;
            temp.code=code;
            temp.name=name;
            temp.quantity=quantity + i.quantity;
            return temp;
    }
};
int main(){
    Item item1, item2, item3;
    cin>>item1.code>>item1.name>>item1.quantity;
    cin>>item2.code>>item2.name>>item2.quantity;
    if (item1.code==item2.code && item1.name==item2.name)
    {
        item3=item1+item2;
        cout<<item3.code<<" "<<item3.name<<" "<<item3.quantity<<endl;
    }
    else
    {
        cout<<"Items cannot be added"<<endl;
    }
    return 0;
}