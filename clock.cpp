#include<iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int h=0,m=0,s=0;
    cout<<"set today date dd/mm/yyyy"<<endl;
    int d=1,mm=1,y=2020;
    cin>>d;cout<<"/";cin>>mm;cout<<"/";cin>>y;

    cout<<" SET CURRENT TIME hh:mm:ss"<<endl;
        cin>>h;cout<<":";
        cin>>m;cout<<":";
        cin>>s;
        bool k=false;
        if(h<24&&m<60&&s<60&&d<=31&&mm<=12){
            k=true;
        }
        else{
                cout<<"INVALID INPUT  TRY AGAIN "<<endl;
           k=false;

        }

while(k){
        cout<<d<<"/"<<mm<<"/"<<y<<endl;
    for(h;h<24;h++){


        for(m;m<60;m++){

            for(s;s<60;s++){

                for(int i=0;i<400050000;i++){
                    i++;

                }
                    cout<<":"<<s;
                    system("cls");
                        cout<<d<<"/"<<mm<<"/"<<y<<endl;
                    cout<<h<<":"<<m;

            }


                s=0;




        }
        m=0;


    }
    h=0;
    ;
     if(mm==12&&d==31){
            y=y+1;

        cout<<endl<<"********************"<<endl<<"Wishing you very Happy new year "<<y<<endl<<"********************"<<endl;

            d=1;
        mm=1;

    }
    else if( d==29&& mm==2&&y%4==0){
        d=1;
        mm+=1;
    }
else  if(d==28&&mm==2&&y%4!=0){
        d=1;
        mm+=1;
    }
   else  if(d==30&&(mm==0||mm==4||mm==6||mm==9||mm==11)){
        d=1;
        mm+=1;
    }
    else  if(d==31&&(mm==1||mm==3||mm==5||mm==7||mm==8 ||mm==10||mm==12)){
        d=1;
        mm+=1;
    }
else{d+=1;
}

}
    return 0;
}
