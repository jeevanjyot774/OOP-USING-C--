#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string file;
    cout<<"Enter file name:";
    cin>>file;
    ifstream myfile(file);
    if(myfile.is_open()){
        string line;
        while(getline(myfile, line)){
            cout<<line<<endl;
        }
        myfile.close();
    }
    else{
        cout<<"Unable to open file"<<endl;
    }
    return 0;
}