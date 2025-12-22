#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int lines=0;
    int words=0;
    int characters=0;
    string file;
    cout<<"Enter file name:";
    cin>>file;
    ifstream myFile(file);
    if(myFile.is_open()){
        string line;
        while(getline(myFile, line)){
            lines++;
        }
        myFile.close();
    }
    myFile.open(file);
    if(myFile.is_open()){
        string word;
        while(myFile>>word){
            words++;
        }
        myFile.close();
    }
    myFile.open(file);
    if(myFile.is_open()){
        char ch;
        while(myFile.get(ch)){
            characters++;
        }
        myFile.close();
    }
    cout<<"Number of lines: "<<lines<<endl;
    cout<<"Number of words: "<<words<<endl; 
    cout<<"Number of characters: "<<characters<<endl;
    return 0;
}
