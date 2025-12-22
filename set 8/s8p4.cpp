#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream myFile("bye.txt", ios::app);
        string line;
        cout<<"Enter text to write: "<<endl;
        while(true){
        getline(cin, line);
        if(line=="STOP"){
            break;
            }
            myFile<<line<<endl;
        }
        myFile.close();
        cout<<"Data appended successfully."<<endl;
    return 0;
}
