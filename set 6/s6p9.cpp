#include<iostream>
using namespace std;
class Vector2D{
    protected:
    int arr[2];
    public:
    Vector2D(int x=0, int y=0){
        arr[0]=x;
        arr[1]=y;
    }
    Vector2D operator+(Vector2D &v){
        Vector2D temp;
        temp.arr[0]=arr[0]+v.arr[0];
        temp.arr[1]=arr[1]+v.arr[1];
        return temp;
    }
    void display(){
        cout<<"("<<arr[0]<<", "<<arr[1]<<")"<<endl;
    }
};
class Vector3D: public Vector2D{
    public:
    int z;
    Vector3D(int x=0, int y=0, int z=0): Vector2D(x, y){
        this->z=z;
    }
    Vector3D operator+(Vector3D &v){
        Vector3D temp;
        temp.arr[0]=arr[0]+v.arr[0];
        temp.arr[1]=arr[1]+v.arr[1];
        temp.z=z+v.z;
        return temp;
    }
    void display(){
        cout<<"("<<arr[0]<<", "<<arr[1]<<", "<<z<<")"<<endl;
    }
};
int main(){
    Vector2D v2d1(2, 3), v2d2(4, 5);
    Vector2D v2d3=v2d1+v2d2;
    cout<<"Vector2D Addition: ";
    v2d3.display();
    Vector3D v3d1(1, 2, 3), v3d2(4, 5, 6);
    Vector3D v3d3=v3d1+v3d2;
    cout<<"Vector3D Addition: ";
    v3d3.display();
    return 0;
}