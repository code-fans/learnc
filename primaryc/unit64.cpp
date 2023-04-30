#include <iostream>
using namespace std;
int unit64_main()
{
    freopen("srotdata.txt", "r", stdin);

    int i, j, t, len;
    cin >> len;
    int a[len];

    for(i=0;i<len;i++)
        cin>>a[i];

    for(i=0;i< len-1;i++){
        bool sorted = true;
        for(j=0; j< len-i-1;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                sorted = false;
            }
        if(sorted)
            break;
    }

    for(i=0;i<len;i++)
        cout<<a[i]<< " ";
    return 0;
}


int unit64_main2()
{
    freopen("srotdata.txt", "r", stdin);

    int i, j, t, p, len;
    cin >> len;
    int a[len];

    for(i=0;i<len;i++)
        cin>>a[i];

    for(i=0;i<len-1;i++){
        t=i;
        for(j=i+1;j<len;j++){
            if(a[j] < a[t])
                t = j;
        }

        if(t!=i)
        {
            p = a[i];
            a[i]=a[t];
            a[t]=p;
        }
    }

    for(i=0;i<len;i++)
        cout<<a[i]<< " ";
    return 0;
}

