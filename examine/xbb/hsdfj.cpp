#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Tree{
    char data;
    Tree* l;
    Tree* r;
};
void aaa(Tree* ans){
    cout<<ans->data;
    if(ans->l!=nullptr)
        aaa(ans->l);
    if(ans->r!=nullptr)
        aaa(ans->r);
}
Tree* mt(string str,string str1){
    Tree * t = new Tree();
    char root=str[str.size()-1];
    t->data = root;
    int w = str1.find(root);
    if(w<=0){
        t->l = nullptr;
    }else{
        string left= str.substr(0, w);
        string left2 = str1.substr(0,w);
        t->l =mt(left, left2);
    }
    if(w>=str.size()-1){
        t->r = nullptr;
    }else{
        string right= str.substr(w, str.size()-w-1);
        string right1 = str1.substr(w+1,str1.size()-w-1);
        t->r =mt(right, right1);
    }
    return t;
}
int main()
{
    string str,str1;
    cin>>str;
    cin>>str1;
    Tree* ans=mt(str,str1);
    aaa(ans);
    cout<<endl;
    return 0;
}  