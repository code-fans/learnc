#include<iostream>
using namespace std;
int main()
{
    int tianjin[100],beijing[100],shanghai[100];
    int a,b,tianjinPostcode=0,beijingPostcode=0,shanghaiPostcode=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        switch (b/10000)
        {
        case 10:
            beijing[beijingPostcode++]=b;
            break;
        case 20:
            shanghai[shanghaiPostcode++]=b;
            break;
        case 30:
            tianjin[tianjinPostcode++]=b;
            break;
        default:
            break;
        }

    }

    cout<<"Beiling"<<endl;
    for (int i = 0; i < beilingPostcode; i++)
    {
        cout<<beiling[i]<<" "<<endl;
    }
    cout<<"Shanghai"<<endl;
    for (int i = 0; i < shanghaiPostcode; i++)
    {
        cout<<shanghai[i]<<" "<<endl;
    }
    cout<<"Tianjin"<<endl;
    for (int i = 0; i < tianjinPostcode; i++)
    {
        cout<<tianjin[i]<<" "<<endl;
    }
    return 0;   
}