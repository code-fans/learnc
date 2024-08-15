#include <iostream>
using namespace std;
char a[30][3];
void printtree(char v)
{
    if(v=='*') return ;
    cout<<v;
    printtree(a[int(v-'a')][1]);
    printtree(a[int(v-'a')][2]);
}
int main()
{
    int n;
    char root, t;
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>t;
        if(i==1) root = t;
        int p= t-'a';
        cin >>a[p][1]>>a[p][2];
        a[p][0] = 't';
    }
    printtree(root);
    cout<<endl;
    return 0;
}