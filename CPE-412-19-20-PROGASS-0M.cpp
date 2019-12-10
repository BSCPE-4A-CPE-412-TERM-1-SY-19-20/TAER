#include<iostream>
using namespace std;

int main() {
    int j=0, state=0;
    int table[9][2]={{2,1},{3,1},{2,4},{6,5},{5,7},{6,7},{6,8},{8,7},{8,8}};
    int input;
    int flag=0;
    char st[10];
    cin>>st;
    while(st[j]){
    
    switch (st[j]){
        case 'a': input=0;break; //collumn
        case 'b': input=1;break; //collumn
        
    }
    state=table[state][input];
    if (state ==8){flag =1; break;}
    j++;
    
}
if (flag==1){cout<<"accepted";}
else {cout<<"not accepted";}
return 0;
}








