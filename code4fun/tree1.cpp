#include <iostream>
#include <algorithm>

using namespace std;
struct ZM{
	char ch;
	int gs;
	int bm;	
};

struct HFM{
	int lx;
	struct ZM * zm;
	struct HFM * l;
	struct HFM * r;
	int gs;
};

bool cmp(ZM a, ZM b){
	return a.gs < b.gs;
}

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
		for(int i=0; i<26; i++){
			zms[i].ch = 'A' + i;
			zms[i].gs = 0;
			zms[i].bm = 1;
		}
		zms[26].ch = '_';
		zms[26].gs = 0;
		zms[26].bm = 1;
		for(int i=0; i<len; i++){
			if(str[i]=='_'){
				zms[26].gs++;
			} else {
				zms[str[i]-'A'].gs++;
			}
		}
		sort(zms, zms+27, cmp);
		int bi = 0;
		while(zms[bi].gs==0) bi ++;
		int zmlen = 27-bi;
		HFM * hfm[30];
		for(int i=0; i< zmlen; i++){
			hfm[i] = new HFM();
			hfm[i]->lx = 0;
			hfm[i]->zm = & zms[bi+i];
			hfm[i]->gs = zms[bi+i].gs;
			hfm[i]->r = nullptr;
			hfm[i]->l = nullptr;
		}
		
		for(int i=zmlen; i>2; i--){
			HFM * newNode = new HFM();
			newNode->lx = 1;
			newNode->l = hfm[0];
			newNode->r = hfm[1];
			newNode->gs = hfm[0]->gs + hfm[1]->gs ;
			bmAddOne(newNode);
			for(int j=0; j<i-2; j++){
				hfm[j] = hfm[j+2];
			}
			int p = i-2;
			while(p>0 && hfm[p-1]->gs > newNode->gs){
				hfm[p] = hfm[p-1];
				p--;
			}
			hfm[p] = newNode;
		}
		
		int count=0;
		for(int i=0; i<27; i++){
			count += zms[i].bm * zms[i].gs;
		}
        printf("%d %d %.1f\n",len*8, count , len*8.0f/count);
	}
	return 0;
}