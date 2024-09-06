#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;
 

class Animal{
public:
    virtual void speak (void){
        cout<<"动物在说话"<<endl;
    }
};

class Dog : public Animal{

};

class Duck : public Animal{
public:
    void speak (void){
        cout<<"鸭子嘎嘎"<<endl;
    }
};

int main(){
    vector<Animal *> arr(5, new Duck());

    int n=arr.size();
    for(int i=0; i<n; i++){
        arr[i]->speak();
    }
    cout<< endl;
    
    for(vector<Animal *>::iterator itr = arr.begin(); itr != arr.end(); itr++){
        (*itr)->speak();
    }
    cout<< endl;

    return 0;
}
