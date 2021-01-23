#include<iostream>
#include<cmath>

using namespace std;

    int main()
    {
       float
        A,V,VI,VF,PS,PST,PSW,BD,T,DSTR,DS,DP,HAR,LP,LS,LN,SP,SS,SL,SN,STSR,ERA,MND,HP,
       SDP,STP,SWP,NSP,DTH,DS1,DS2,DS3,DS4,DS1P,DS2P,DS3P,DS4P,D1,D2,D3,D4,TTD,FS,STTR,STONER,SANDR,VFF;
       int DN;



       //A=AREA,V=Voulme/m3forhole,Vi=leastspeed,Vf=Maxspeed
       //PS=Productivetyforsand,PST=ProductforStones
       //PSW=ProductivetyforSwampsand,BD=budget,T=time
       //DSTR=DistancetoDUMP,DN=DIGGERN.O,DS=DIGGERSPEED,
       //DP=DIGGERPRICE,LP=LoaderPrice,LS=LoaderSpeed
       //LN=LOADERNUM,SP=SANDTRUCKPRICE,SS=SANDTRUCKSPEED
       //SL=SANDTUCKLOAD,SN=SANDTRUCKNUK,ERA=ERRORANALYSIS
       //HAR=HOWISTHEROARD,STSR=SANDTOSTONESRATIO,MND=MAXNODIGGER
       //HP=HOWRSEPOWER,SDP=SANDPERSN,STP=STONEPERSN,SWP=DRYCLAYPERSN
       //NSP=NORMALSOILPERSN,DTH=DELTAINHIGHT,DS1P&DS2P&DS3P&DS4P=DIGSPEEDPERSNTGE
       //D1=DIGSPEED1,D2=DIGSPEED2,D3=DIGSPEED3,D4=DIGSPEED4


       cout<<"Hello to Excavation and Substitute Simulation Project"<<endl;
       cout<<" CREATED BY ZIAD SALAH MOHAMED GABALLA "<<endl;
       cout<<" "<<endl;
              cout<<"Under supervision of Dr.Ehab Shehata"<<endl;

                     cout<<" "<<endl;

        cout<<"Please Enter Area (in m^2)"<<endl;
        cin>>A;
        cout<<"Please Enter volume (in m^3)"<<endl;
        cin>>V;
        cout<<"Please Enter Digger Rent Rate per Day "<<endl;
        cin>>DP;
        cout<<"Please Enter Loader Rent Rate per Day"<<endl;
        cin>>LP;
        cout<<"Please Enter SandTruck Rent Rate per Day"<<endl;
        cin>>SP;
        cout<<"Please Enter SandTruck Load (in m^3)"<<endl;
        cin>>SL;
        cout<<"Please Enter SandTruck Avg Speed (in km/hr) "<<endl;
        cin>>SS;
        cout<<"Please Enter Horsepower of the Crawler bulldozer"<<endl;
        cin>>HP;
        cout<<"Please Enter Shallow Soil Percentage (According to the total volume)" <<endl;
        cin>>SDP;
        cout<<"Please Enter Dry clay soil Percentage(According to the total volume"<<endl;
        cin>>SWP;
        cout<<"Please Enter Normal Dry Soil Percentage (According to the total volume)"<<endl;
        cin>>NSP;
        cout<<"Please Enter Rocky soil Percentage(According to the total volume)"<<endl;
        cin>>STP;
        cout<<"Please Enter the Distance In Km to the nearest place to get rid of sand (in km)"<<endl;
        cin>>DSTR;
        cout<<"Please Rate from 1-10 how hard it is to use the road to the location (1 is the hardest , 10 is the easiest)"<<endl;
        cin>>HAR;
        cout<<"Please Enter Sand to Stone Ratio in case of Backfill (INTGER ONLY PLEASE!)"<<endl;
        cin>>STSR;cin>>STTR;

        //cout<<"Please Enter Period to Make project within"<<endl;
        //        cin>>T;

        //        cout<<"Please Enter The diffrance in Hights/m"<<endl;

        //        cin>>DTH;




































 //double A,V,VI,VF,PS,PST,PSW,BD,T,DSTR,DN,DS,DP,HAR,LP,LS,LN,SP,SS,SL,SN,STSR,ERA,MND,HP
       //SDP,STP,SWP,NSP,DS1,DS2,DS3,DS4;
       //A=AREA,V=Voulme/m3forhole,Vi=leastspeed,Vf=Maxspeed
       //PS=Productivetyforsand,PST=ProductforStones
       //PSW=ProductivetyforSwampsand,BD=budget,T=time
       //DSTR=DistancetoDUMP,DN=DIGGERN.O,DS=DIGGERSPEED,
       //DP=DIGGERPRICE,LP=LoaderPrice,LS=LoaderSpeed
       //LN=LOADERNUM,SP=SANDTRUCKPRICE,SS=SANDTRUCKSPEED
       //SL=SANDTUCKLOAD,SN=SANDTRUCKNUK,ERA=ERRORANALYSIS
       //HAR=HOWISTHEROARD,STSR=SANDTOSTONESRATIO,MND=MAXNODIGGER
       //HP=HOWRSEPOWER,SDP=SANDPERSN,STP=STONEPERSN,SWP=DRYCLAYPERSN
       //NSP=NORMALSOILPERSN,DS1=DIGSPEED1,DS2=DIGSPEED2,DS3=DIGSPEED3
       //DS4=DIGSPEED4
 if (NSP>0)
 {
     if(V<=30)
     {
         if (HP<=75)
         {
             DS1=450;
         }
         else if (HP<=105)
         {
              DS1=680;
         }
         else if (HP<=140)
         {
               DS1=840;
         }
         else if (HP>=180)
         {
             DS1=1270;

         }
     }
 };

 if (NSP>0)
 {
     if(V<=60)
     {
         if (HP<=75)
         {
             DS1=205;
         }
         else if (HP<=105)
         {
            DS1=315;
         }
         else if (HP<=140)
         {
             DS1=450;
         }
         else if (HP>=180)
         {
             DS1=680;

         }
     }
 };


 if (NSP>0)
 {
     if(V<=90)
     {
         if (HP<=75)
         {
             DS1=100;
         }
         else if (HP<=105)
         {
             DS1=180;
         }
         else if (HP<=140)
         {
             DS1=275;
         }
         else if (HP>=180)
         {
             DS1=450;

         }
     }
 };
 if (NSP>0)
 {
     if(V>=120)
     {
         if (HP<=75)
         {
             DS1=70;
         }
         else if (HP<=105)
         {
             DS1=135;
         }
         else if (HP<=140)
         {
             DS1=190;
         }
         else if (HP>=180)
         {
             DS1=315;

         }
     }
 };



 if (SWP>0)
 {
     if(V<=30)
     {
         if (HP<=75)
         {
             DS2=430;
         }
         else if (HP<=105)
         {
             DS2=640;
         }
         else if (HP<=140)
         {
             DS2=795;
         }
         else if (HP>=180)
         {
             DS2=1200;

         }
     }
 };

 if (SWP>0)
 {
     if(V<=60)
     {
         if (HP<=75)
         {
             DS2=190;
         }
         else if (HP<=105)
         {
             DS2=300;
         }
         else if (HP<=140)
         {
             DS2=430;
         }
         else if (HP>=180)
         {
             DS2=640;

         }
     }
 };
 if (SWP>0)
 {
     if(V<=90)
     {
         if (HP<=75)
         {
             DS2=100;
         }
         else if (HP<=105)
         {
             DS2=170;
         }
         else if (HP<=140)
         {
             DS2=260;
         }
         else if (HP>=180)
         {
             DS2=430;

         }
     }
 };
 if (SWP>0)
 {
     if(V<=120)
     {
         if (HP<=75)
         {
             DS2=60;
         }
         else if (HP<=105)
         {
             DS2=130;
         }
         else if (HP<=140)
         {
             DS2=185;
         }
         else if (HP>=180)
         {
             DS2=300;

         }
     }
 };
 if (STP>0)
 {
     if(V<=30)
     {
         if (HP<=75)
         {
             DS3=330;
         }
         else if (HP<=105)
         {
             DS3=495;
         }
         else if (HP<=140)
         {
             DS3=610;
         }
         else if (HP>=180)
         {
             DS3=925;

         }
     }
 };
 if (STP>0)
 {
     if(V<=60)
     {
         if (HP<=75)
         {
             DS3=145;
         }
         else if (HP<=105)
         {
             DS3=230;
         }
         else if (HP<=140)
         {
             DS3=330;
         }
         else if (HP>=180)
         {
             DS3=495;

         }
     }
 };
 if (STP>0)
 {
     if(V<=90)
     {
         if (HP<=75)
         {
             DS3=75;
         }
         else if (HP<=105)
         {
             DS3=130;
         }
         else if (HP<=140)
         {
             DS3=200;
         }
         else if (HP>=180)
         {
             DS3=330;

         }
     }
 };
 if (STP>0)
 {
     if(V>=120)
     {
         if (HP<=75)
         {
             DS3=45;
         }
         else if (HP<=105)
         {
             DS3=100;
         }
         else if (HP<=140)
         {
             DS3=135;
         }
         else if (HP>=180)
         {
             DS3=230;

         }
     }
 };
 if (SDP>0)
 {
     if(V<=30)
     {
         if (HP<=75)
         {
             DS4=505;
         }
         else if (HP<=105)
         {
             DS4=750;
         }
         else if (HP<=140)
         {
             DS4=925;
         }
         else if (HP>=180)
         {
             DS4=1405;

         }
     }
 };
 if (SDP>0)
 {
     if(V<=60)
     {
         if (HP<=75)
         {
             DS4=230;
         }
         else if (HP<=105)
         {
             DS4=350;
         }
         else if (HP<=140)
         {
             DS4=505;
         }
         else if (HP>=180)
         {
             DS4=750;

         }
     }
 };
  if (SDP>0)
 {
     if(V<=90)
     {
         if (HP<=75)
         {
             DS4=115;
         }
         else if (HP<=105)
         {
             DS4=200;
         }
         else if (HP<=140)
         {
             DS4=300;
         }
         else if (HP>=180)
         {
             DS4=505;

         }
     }
 };


if (SDP>0)
 {
     if(V>=120)
     {
         if (HP<=75)
         {
             DS4=75;
         }
         else if (HP<=105)
         {
             DS4=150;
         }
         else if (HP<=140)
         {
             DS4=215;
         }
         else if (HP>=180)
         {
             DS4=350;

         }
     }
 };


if (A>200)
{
    DN=A/200;
}
else DN=1;

 //double A,V,VI,VF,PS,PST,PSW,BD,T,DSTR,DN,DS,DP,HAR,LP,LS,LN,SP,SS,SL,SN,STSR,ERA,MND,HP
       //SDP,STP,SWP,NSP,DS1,DS2,DS3,DS4,DS1P,DS2P,DS3P,DSP4;
       //A=AREA,V=Voulme/m3forhole,Vi=leastspeed,Vf=Maxspeed
       //PS=Productivetyforsand,PST=ProductforStones
       //PSW=ProductivetyforSwampsand,BD=budget,T=time
       //DSTR=DistancetoDUMP,DN=DIGGERN.O,DS=DIGGERSPEED,
       //DP=DIGGERPRICE,LP=LoaderPrice,LS=LoaderSpeed
       //LN=LOADERNUM,SP=SANDTRUCKPRICE,SS=SANDTRUCKSPEED
       //SL=SANDTUCKLOAD,SN=SANDTRUCKNUK,ERA=ERRORANALYSIS
       //HAR=HOWISTHEROARD,STSR=SANDTOSTONESRATIO,MND=MAXNODIGGER
       //HP=HOWRSEPOWER,SDP=SANDPERSN,STP=STONEPERSN,SWP=DRYCLAYPERSN
       //NSP=NORMALSOILPERSN,DS1=DIGSPEED1,DS2=DIGSPEED2,DS3=DIGSPEED3
       //DS4=DIGSPEED4,FS=FINALSPEED,TTD=TIMEFORTHETRUCK,




       DS1P=SDP/100;

       D1=DS4*DS1P;

       DS2P=STP/100;

       D2=DS3*DS2P;

       DS3P=SWP/100;

       D3=DS3P*DS2;

       DS4P=NSP/100;

       D4=DS4P*DS1;

        if (DS1P+DS2P+DS3P+DS4P>1)
       {
       cout<<"Error in Inputs, Please Try Again"<<endl;
       };

       VI=(D1+D2+D3+D4);
       VF=V/VI;
       VFF=VF/DN;

       LS=VI/8;

       //assuming work for 8hr/day so we can think in smaller scale

       LN=LS/27.7;

       TTD=DSTR/SS;
       FS=(TTD)*(HAR/10);


       //SN=VI/SL;
       SN=LS/(FS*2);
       BD=(VF*LN*LP)+(VF*SN*SP)+(VF*DN*DP);
       SANDR=(STSR/100)*V;
       STONER=(STTR/100)*V;





       cout<<" Budget of the Project"<<endl;
        cout<<BD;
        cout<<"Egyptian Pounds"<<endl;
        cout<<"The Time till end "<<endl;
        cout<<VF;
        cout<<"Day"<<endl;
        cout<<"The Project will need ";
        cout<<LN;
        cout<<"Loader"<<endl;
        cout<<"The Project will need ";
        cout<<SN;
        cout<<"SandTruck"<<endl;
        cout<<"The Project Will need";
        cout<<DN;
        cout<<"Crawler bulldozer"<<endl;
        cout<<"The Project Would Need "<<endl;
        cout<<SANDR*1.2;
        cout<<"M^3 of Sand"<<endl;
        cout<<"The Project Would need "<<endl;
        cout<<STONER*1.2;
        cout<<"M^3 of stones"<<endl;
        cout<<"There is 20% Extra in Soil Substitute"<<endl;




















    return 0;

    }



// All rights reserved: Ziad Salah Mohamed


