#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin>>vec[i];
    }
    int X;
    cin>>X;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==X){
            vec.erase(vec.begin()+i);
            i--;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}