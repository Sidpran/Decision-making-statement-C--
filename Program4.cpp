#include<iostream>
using namespace std;
int main()
{
 int choice;
 cout<<"1) paneer"<<endl<<"2) bread butter"<<endl<<"3) khichdi"<<endl<<"4) tikka"<<endl<<"5) noodles"<<endl;
 cout<<endl<<"enter your choice of lunch:"<<endl;
 cin>>choice;
 switch(choice)
 {
     case 1:
     cout<<"Enjoy your paneer :)";
     break;
     case 2:
     cout<<"Enjoy your bread butter :)";
     break;
     case 3:
     cout<<"Enjoy your khichdi :)";
     break;
     case 4:
     cout<<"Enjoy your tikka :)";
     break;
     case 5:
     cout<<"Enjoy your noodles :)";
     break;
     default:
     cout<<"pls order :) ";
     break;
 }
}
