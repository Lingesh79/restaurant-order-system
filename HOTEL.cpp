#include<iostream>
using namespace std;

int w=0;
int c=0;
class hotel
{int code[30];int price[30];float amount;char name[100][100];
public:hotel()
{amount=0;}
void read();
void printbill();void remove(); void calculate();

 };
 void hotel::read()
 { int i;
 cout<<endl<<"MENU CONTAINS BOTH VEG AND NON VEG ITEMS "<<endl;
 cout<<"name with * mark indictes non veg items"<<endl;
 cout<<"1.PULIYOGERE-35"<<endl;
  cout<<"2.CHITRANNA-35"<<endl;
 cout<<"3.BISI BELE BATH-40"<<endl;
 cout<<"4.MYSORE MYLARI DOSA-50"<<endl;
 cout<<"5.DAVANGERE BENNE DOSA-45"<<endl;
 cout<<"6.MANGALURU NEER DOSA-45"<<endl;
 cout<<"7.BIDADI TATTE IDLI-30"<<endl;
 cout<<"8.SPECIAL MYSORE PAK(100GMS)-100"<<endl;
 cout<<"9.HOLIGE(1 piece)-20"<<endl;
 cout<<"10.RAGI BALLS(1 no)-15"<<endl;
 cout<<"11.**DONNE BIRYANI -100"<<endl;
 cout<<"12.**KORI SUKKA-110"<<endl;
 cout<<"13.**CHICKEN GHEE ROAST-120"<<endl;
 cout<<"14.**BENGALURU CHICKEN KEBAB-110"<<endl;
 cout<<"15.**FISH CURRY-70"<<endl;
 cout<<"16.**CHILLY CHICKEN-120"<<endl;
 cin>>i;


 switch(i)
 {case(1):code[c]=i;price[c]=35;c++;        break;
  case(2):code[c]=i;price[c]=35;

  c++;
  break;
   case(3):code[c]=i;price[c]=40;

  c++;
  break;
  case(4):code[c]=i;price[c]=50;
  c++;

  break;
  case(5):code[c]=i;price[c]=45;
  c++;
  break;
  case(6):code[c]=i;price[c]=45;
  c++;
  break;
  case(7):code[c]=i;price[c]=30;
  c++;
  break;
  case(8):code[c]=i;price[c]=100;
  c++;
  break;
  case(9):code[c]=i;price[c]=20;
  c++;
  break;
  case(10):code[c]=i;price[c]=15;
  c++;
  break;
  case(11):code[c]=i;price[c]=100;
  c++;
  break;
   case(12):code[c]=i;price[c]=110;
  c++;
  break;
  case(13):code[c]=i;price[c]=120;
  c++;
  break;
  case(14):code[c]=i;price[c]=110;
  c++;
  break;
  case(15):code[c]=i;price[c]=70;
  c++;
  break;
  case(16):code[c]=i;price[c]=120;
  c++;
  break;
  default :cout<<"enter valid choice";}}
 void hotel::calculate()
 {
   float tax;
  for(int i=0;i<c;i++)
  amount=amount+price[i];
    tax=(amount*18)/100;
  cout<<"TOTAL="<<amount<<endl;
  cout<<"CGST="<<tax/2<<"            "<<"SGST="<<tax/2<<endl;

  cout<<endl<<"AMOUNT TO BE PAID=="<<amount+tax<<endl;

  }


  void hotel::remove()
  {int a; if(c>0){
  cout<<"ENTER ITEM CODE";
  cin>>a;
  for(int i=0;i<c;i++)
  {if(code[i]==a)
  {price[i]=0; return;
  }}cout<<"enter proper code"<<endl;
  }cout<<"PLEASE ORDER FOOD THEN YOU REMOVE THE ORDERED FOOD"<<endl; }
  void hotel::printbill()
  {
 if(c>0){ cout<<"             HOTEL KARUNADU RUCHI               "<<endl;
   cout<<"                                    (authentic karnataka style)"<<endl;
   cout<<"                                     --with gauranteed taste "<<endl;
  cout<<"\n CODE  PRICE \n";
   for(int i=0;i<c;i++)
   {
   cout<<"\n "<<code[i]<<"    "<<price[i];

   }cout<<"\n";calculate();
   }else
   cout<<"please order the food first"<<endl; }
int main()
   {hotel o;int x=0;
   cout<<"             HOTEL KARUNADU RUCHI               "<<endl;
   cout<<"                                    (authentic karnataka style)"<<endl;
   cout<<"                                     --with gauranteed taste "<<endl;
   while(x!=4)
   {cout<<"1 ORDER   2 DISPLAY BILL    3 REMOVE ITEMS   4 EXIT"<<endl;
   cin>>x;
     switch(x)
     {case 1:o.read();w++;break;
     case 2:o.printbill();break;
     case 3:o.remove();break;
      default:cout<<"enter valid choice"<<endl;
     }}}
