#include<iostream>
using namespace std;
class Cricketer{
    string playerName;
    int matches, runs;
    float average;
    public:
    void input(){
         cout<<"Enter name, matches, runs: ";
        cin>>playerName>>matches>>runs;
        average=runs/matches;
    }
    void display(){
        cout<<"Player Name: "<<playerName<<endl;
        cout<<"Matches: "<<matches<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<average<<endl;
    }
    float getAverage(){
        return average;
    }
};
int main(){
    int n;
    cout<<"Enter number of cricketers: ";
    cin>>n;
    Cricketer players[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details of cricketer "<<i+1<<":"<<endl;
        players[i].input();
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(players[j].getAverage()<players[j+1].getAverage()) {
                swap(players[j], players[j+1]);
            }
        }
    }
    cout<<"Cricketers sorted by average runs:"<<endl;
    for(int i=0;i<n;i++){
        players[i].display();
    }
    return 0;
}