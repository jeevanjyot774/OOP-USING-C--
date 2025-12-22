#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string source,destination;
    cout<<"Enter source file name: ";
    cin>>source;
    cout<<"Enter destination file name: ";
    cin>>destination;
    ifstream inFile(source);
    ofstream outFile(destination);
    if(inFile.is_open() && outFile.is_open()){
        string line;
        while(getline(inFile, line)){
            outFile<<line<<endl;
        }
        inFile.close();
        outFile.close();
        cout<<"File copied successfully."<<endl;
    }
    return 0;
}