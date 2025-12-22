#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("check.txt");
    if (fin){
        cout<<"File already exists";
    } else {
        ofstream fout("check.txt");
        fout<<"This file was automatically created because it did not exist.";
        fout.close();
        cout<<"File created";
    }
    return 0;
}