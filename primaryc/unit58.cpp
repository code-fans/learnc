#include <iostream>
using namespace std;
int unit58_main()
{
    int  gongji, mugi, xiaoji;
    cout<<"gongji=  mugi=   xiaoji= "<<endl;
    for( xiaoji=3; xiaoji<100; xiaoji+=3)
        for(gongji=1; gongji<=33 && gongji<100-xiaoji;gongji++)
        {
            mugi=100-(gongji+xiaoji);
            if(gongji*3+ xiaoji/3+mugi*2==100)// && gongji+ mugi+xiaoji==100)
                cout<<gongji<<"   "<<mugi<<"  "<<xiaoji<<endl;

        }
    return 0;
}
