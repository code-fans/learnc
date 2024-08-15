#include <iostream>
using namespace std;
struct tree
{
    struct tree* l;
    char d;
    struct tree* r;

};

void ptree(tree*a, int f)
{
    if(a==nullptr) return ;
    ptree(a->l, f);
    if(f==2) cout<<a->d;
    ptree(a->r, f);
    if(f==3) cout<<a->d;
}


tree * ltree()
{
    char c;
    cin >> c;
    if(c == '.')
        return nullptr;
    tree * node = new tree;
    node->d = c;
    
    node->l = ltree();
    node->r = ltree();
    return node;
}

int main()
{
    tree * a = ltree();
    ptree(a,2);
    cout<<endl;
    ptree(a,3);
    cout<<endl;
    return 0;
}