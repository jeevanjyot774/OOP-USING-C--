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
    int X,P;
    cin>>X>>P;
    vec.insert(vec.begin()+P,X);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
}
    return 0;
}