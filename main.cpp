#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main()
{
    string karti [13]={"Kec","Dvojka","Trojka","Cetvorka","Petka","Sestka","Sedumka","Osumka","Devetka","Desetka","Dzandar","Kokona","Kral"};
    string tipKarti [4]= {"Detelina","List","Srce","Lokum"};
    vector<string> spilKarti;
    for(int i=0;i<4;i++) {
        for(int j=0;j<13;j++) {
            spilKarti.push_back(karti[j]+" "+tipKarti[i]);
        }
    }
    srand(time(NULL));
    int rVrednost;
    string privremena;
    for(int i=0;i<52;i++) {
        rVrednost=rand()%52;
        privremena=spilKarti[i];
        spilKarti[i]=spilKarti[rVrednost];
        spilKarti[rVrednost]=privremena;
    }
    cout<<spilKarti[0]<<endl;
    return 0;
}
