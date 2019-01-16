//
// Created by akash_karmokar on 1/16/19.
//  ID : 161 - 115-043 .
//
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string text;
    int j;
    while(cin>>text){
        j=text.length();
        int flag=1;
        for(int i =0;i<j;i++){
            if(i==0){
                if((text[i]>='A' && text[i]<='Z') ||(text[i]>='a' && text[i]<='z')    || (text[i]=='_') ){
                    continue;
                }
                else{
                    flag++;
                    break;
                }
            }
            else{
                if((text[i]>='A' && text[i]<='Z') ||(text[i]>='a' && text[i]<='z')    || (text[i]=='_')  || (text[i]>='0' && text[i]<='9')){

                    continue;
                }
                else {
                    flag++;

                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
