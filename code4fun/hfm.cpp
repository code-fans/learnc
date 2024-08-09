#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
struct ZM{
	int gs;
	int bm;	
    ZM();
};
ZM::ZM(){
    gs=0;
    bm=1;
}

struct HFM{
	int lx;
	struct ZM * zm;
	struct HFM * l;
	struct HFM * r;
	int gs;
};


struct cmp{
	bool operator()(const HFM * a, HFM * b){
		return a->gs > b->gs;
	}
};

void bmAddOne(HFM * hf){
	if(hf == nullptr) return;
	if(hf->lx == 0){
		hf->zm->bm++;
	}
	bmAddOne(hf->r);
	bmAddOne(hf->l);
}

int main(){
	string str;
	while(true){
		cin >> str;
		if(str == "END") break;
		ZM zms[30];
		int len = str.size();
		for(int i=0; i<len; i++){
			if(str[i]=='_'){
				zms[26].gs++;
			} else {
				zms[str[i]-'A'].gs++;
			}
		}
		
		priority_queue<HFM *, vector<HFM *>, cmp> hfm; 
		
		for(int i=0; i< 27; i++){
			if(zms[i].gs>0){
				HFM * f = new HFM();
			    f->lx = 0;
			    f->zm = & zms[i];
			    f->gs = zms[i].gs;
				f->r = nullptr;
				f->l = nullptr;
				hfm.push(f);
			}
		}
		
		while(hfm.size()>2){
			HFM * l = hfm.top();
			hfm.pop();
			HFM * r = hfm.top();
			hfm.pop();
			HFM * newNode = new HFM();
			newNode->lx = 1;
			newNode->l = l;
			newNode->r = r;
			newNode->gs = l->gs + r->gs ;
			bmAddOne(newNode);
			hfm.push(newNode);
		}
		
		int count=0;
		for(int i=0; i<27; i++){
			count += zms[i].bm * zms[i].gs;
		}
        printf("%d %d %.1f\n",len*8, count , len*8.0f/count);
	}
	return 0;
}