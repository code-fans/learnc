#include <iostream>
using namespace std;
int unit24_main()
{
    float bml ,u,t;
    cout <<"请输入u,t值:";
    cin  >>u>>t;
    bml=u/(t*t);
    if (bml<18.5)
        cout <<"偏瘦"<< bml << "---" << 1;
    else if(bml<24)
        cout<<"正常"<< bml << "---" << 2;
    else if (bml<40)
        cout <<"偏肥"<< bml << "---" << 3;
    else
        cout<<"极度肥胖"<< bml << "---" << 10;
    return 0;
}
