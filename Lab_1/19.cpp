// 19:Create menu driven program for Pizza Shop.And display total amount,

#include<iostream>
using namespace std;

int main(){
    int ch,amt=0,totAmount=0;

    do{
        cout<<"\n1.Neapolitan Pizza:200rs\n2.Chicago Pizza:250rs\n3.New York Pizza:350rs\n4.Pizza Margherita:250rs\n5.Four Cheese Pizza:300rs\n6.Thin Crust Hawaiian Pizza:250rs\n7.Exit\n\n\nEnter your choice:";
        cin>>ch;

        switch(ch){
            case 1: amt=200;  break;
            case 2: amt=250;  break;
            case 3: amt=350;  break;
            case 4: amt=250;  break;
            case 5: amt=300;  break;
            case 6: amt=250;  break;
            case 7: break;
            default: cout<<"Invalid choice"<<endl;  break;
        }
        if(ch!=7){
            totAmount=totAmount+amt;
        }
    }while(ch!=7);

    cout<<"Your total amount as per your choices is: "<<totAmount<<endl;
    
    return 0;
}