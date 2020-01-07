#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

int main(void){

    /*variable declaration*/
    map<string, string> third;
    char *stt[] = {"ES", "MG", "RJ", "SP"};
    char *stt_long[] = {"São Paulo", "Rio de Janeiro", "Minas Gerais", "Espírito Santo"};
    int j=0;

    for (int i = 0; i<4; i++){
        while ((stt[i][0] != stt_long[j][0]) and j<4)
            j++;
        third[stt[i]] = stt_long[j];
        j=0;
    }
    /*The keys are the own state shortcut, hence..*/
    for (std::map<string,string>::iterator it=third.begin(); it!=third.end(); ++it){
       std::cout << it->first << "-" << it->second << '\n';
    }
    return 0;
}
