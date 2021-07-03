#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<unistd.h>
using namespace std;
int main(){
string fname,lname,smart_card;
char pu;
int bill, menu, biscuit=1000,pepsodent=100,powder=200,munch=1000, shoes=200, tide=500, soap=1000, titan=50, oil=1000, perfume = 1000;
int arr[10], price[10]={10,36,110,10,110,90,1199,17,110,1499},sum=0,total=0;
long long int phone;
ifstream read("passcode.txt");
string a,b;
read>>b;
cout<<"Admin Login: \n";
do{
    cout<<"Password :";
    cin>>a;
}while(a!=b);
cout<<endl;
system("cls");
cout<<"\t\t\t\t\t\t\t\t\t\t\t Welcome TO GUPTA CANTEEN\n";
start:;
cout<<"Consumer Information"<<endl;
cout<<"Enter your First Name"<<endl;
cin>>fname;
cout<<"Enter your Last Name"<<endl;
cin>>lname;
cout<<"Enter Phone Number"<<endl;
cin>>phone;
cout<<"Enter Bill No."<<endl;
cin>>bill;
system("cls");
again:
cout<<"\n\n\n\n\1.MENU & PURCHASE";
cout<<"\n\n\n\2.DETAILS";
cout<<"\n\n\n\3.NEW CUSTOMER";
cout<<"\n\n\n\4.QUANTITY AVAILABLE";
cout<<"\n\n\n\5.EXIT";
cout<<"\n\n\nENTER YOUR CHOICE:";
cin>>menu;
system("cls");
switch (menu)
{
case 1:
    cout<<"\nITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\nBISCUTE\t\t\t\t\t\t\t\t10  ";
      cout<<"\n\nPEPSODENT\t\t\t\t\t\t\t36";
      cout<<"\n\nDENIM POWDER\t\t\t\t\t\t\t110   ";
      cout<<"\n\nMUNCH\t\t\t\t\t\t\t\t10  ";
      cout<<"\n\nPARK AVENUE PERFUME\t\t\t\t\t\t110   ";
      cout<<"\n\nCOCONUT HAIR OIL\t\t\t\t\t\t90  ";
      cout<<"\n\nTITAN WATCH\t\t\t\t\t\t\t1199   ";
      cout<<"\n\nLUX SOAP\t\t\t\t\t\t\t17   ";
      cout<<"\n\nTIDE\t\t\t\t\t\t\t\t110   ";
      cout<<"\n\nREEBOK SHOES\t\t\t\t\t\t\t1499   ";
      cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>pu;
    if(pu=='Y'||pu=='y')
    {
    cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
	  bis:;
	  cout<<"\nBISCUTE(MAX 30): ";
	  cin>>arr[0];
      if(arr[0]>30)
	  {
	   cout<<"Enter Quantity Smaller than 30";
	  getch();
	  goto bis;
	  }
	  else
        biscuit-=arr[0];
    pep:;
	  cout<<"\nPEPSODENT(MAX 2): ";
	  cin>>arr[1];
	   if(arr[1]>2)
	  {
	   cout<<"Enter Quantity Smaller than 2";
	  getch();
	  goto pep;
	  }
	  else
	  pepsodent-=arr[1];
      den:;
	  cout<<"\nDENIM POWDER(MAX 2): ";
	  cin>>arr[2];
	  if(arr[2]>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto den;
	  }
	  else
	  powder-=arr[2];
	  mun:;
	  cout<<"\nMUNCH(MAX 50): ";
	  cin>>arr[3];
 
	  if(arr[3]>50)
	  {
	   cout<<"Enter Quantity Smaller then 50";
	  getch();
	  goto mun;
	  }
	  else
	  munch-=arr[3];
	  park:;
	  cout<<"\nPARK AVENUE PERFUME(MAX 2): ";
	  cin>>arr[4];
 
	  if(arr[4]>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto park;
	  }
	  else
	  perfume-=arr[4];
	  coco:;
	  cout<<"\nCOCONUT HAIR OIL(MAX 2): ";
	  cin>>arr[5];
 
	  if(arr[5]>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto coco;
	  }
	  else
	  oil-=arr[5];
	  titan:;
	  cout<<"\nTITAN WATCH(MAX 2): ";
	  cin>>arr[6];
 
	  if(arr[6]>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
 
	  goto titan;
	  }
	  else
	  titan-=arr[6];
	  lux:;
	  cout<<"\nLUX SOAP(MAX 10): ";
	  cin>>arr[7];
 
	  if(arr[7]>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto lux;
	  }
	  else
	  soap-=arr[7];
	  tid:;
	  cout<<"\nTIDE(MAX 2): ";
	  cin>>arr[8];
 
	  if(arr[8]>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto tid;
	  }
	  else
	  tide-=arr[8];
	  ree:;
	  cout<<"\nREEBOK SHOES(MAX 4): ";
	  cin>>arr[9];
 
	  if(arr[9]>4)
	  {
	   cout<<"Enter Quantity Smaller then 4";
	  getch();
	  goto ree;
	  }
	  else
	  shoes-=arr[9];
	  card:;
	
	cout<<"\n Enter 12 Digit Smart Card Details\n";
	cin>>smart_card;
	system("cls");
	  cout<<"\n";
      cout<<"\n\n\t\t\t\t  CASH MEMO\n";
	  cout<<"\n\nBILL NO.: "<<bill;
	  cout<<"\n\nNAME: ";
	  cout<<fname<<" "<<lname;
	  cout<<"\n\nPHONE NO.: "<<phone;
	  cout<<"\n\nSMART CARD.: xxxx-xxxx-xxxx-"<<smart_card[8]<<smart_card[9]<<smart_card[10]<<smart_card[11];
	  cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)"<<endl;
	  cout<<"===============================================================================";
	  if(arr[0]>0)
	    cout<<"\n\nBISCUTE"        <<setw(38)<<arr[0]<<setw(28)<<"Rs."<<arr[0]*price[0];
	  if(arr[1]>0)
	    cout<<"\n\nPEPSODENT"        <<setw(36)<<arr[1]<<setw(28)<<"Rs."<<arr[1]*price[1];
	  if(arr[2]>0)
	    cout<<"\n\nDENIM POWDER"     <<setw(33)<<arr[2]<<setw(28)<<"Rs."<<arr[2]*price[2];
	  if(arr[3]>0)
	    cout<<"\n\nMUNCH"            <<setw(40)<<arr[3]<<setw(28)<<"Rs."<<arr[3]*price[3];
	  if(arr[4]>0)
	    cout<<"\n\nPARK AVENUE PERFUME"<<setw(26)<<arr[4]<<setw(28)<<"Rs."<<arr[4]*price[4];
	  if(arr[5]>0)
	    cout<<"\n\nCOCONUT HAIR OIL" <<setw(29)<<arr[5]<<setw(28)<<"Rs."<<arr[5]*price[5];
	  if(arr[6]>0)
	    cout<<"\n\nTITAN WATCH"      <<setw(34)<<arr[6]<<setw(28)<<"Rs."<<arr[6]*price[6];
	  if(arr[7]>0)
	    cout<<"\n\nLUX SOAP"         <<setw(37)<<arr[7]<<setw(28)<<"Rs."<<arr[7]*price[7];
	  if(arr[8]>0)
	    cout<<"\n\nTIDE"             <<setw(41)<<arr[8]<<setw(28)<<"Rs."<<arr[8]*price[8];
	  if(arr[9]>0)
	    cout<<"\n\nREEBOK SHOES"     <<setw(33)<<arr[9]<<setw(28)<<"Rs."<<arr[9]*price[9];
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
        total+=(arr[i]*price[i]);
    }
    cout<<"\n===============================================================================";
	    cout<<"\nTOTAL:"<<setw(40)<<sum<<setw(27)<<"Rs."<<total;
	    cout<<"\n\nTHANK YOU .\t\t\t     VISIT US AGAIN\n";
	getch();
	goto again;
	}
else
{
    goto again;
}
case 2:
system("cls");
	cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
	cout<<"\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
	cout<<"\n\n#CANTEEN WILL CLOSED ON TUESDAY";
	cout<<"\n\n#GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n#TAKE YOUR SMART CARD WITH YOU";
	cout<<"\n\n#COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
	cout<<"\n\n#DO NOT BREAK ANY CANTEEN ITEMS";
	getch();
    goto again;
case 3:
system("cls");
	goto start;
case 4:
system("cls"); 
cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUTE"        <<setw(38)<<biscuit;
	  cout<<"\n\n\nPEPSODENT"        <<setw(36)<<pepsodent;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<powder;
	  cout<<"\n\n\nMUNCH"            <<setw(40)<<munch;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<perfume;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<oil;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<titan;
	  cout<<"\n\n\nLUX SOAP"         <<setw(37)<<soap;
	  cout<<"\n\n\nTIDE"             <<setw(41)<<tide;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(33)<<shoes;
	  cout<<"\n\n*******************************************************************************";
	  getch();
	  goto again;
case 5:
cout<<"\n\n\n\n\t   THANKS";
	sleep(1);
	system("cls");
	cout<<"\n\n\n\n\n\t\t   THANKS";
	sleep(1);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\t\t\t   THANKS";
	sleep(1);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t   THANKS";
	sleep(1);
	system("cls");
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  THANKS\n\n\n\t\t\t\tPress any key to Exit......."; 
    exit(0);
	getch();
default:
    cout<<"Your Choice is Wrong";
    goto again;
    getch();
}
return 0;
}
