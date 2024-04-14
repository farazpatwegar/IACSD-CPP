#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int choice;
     int num;

    
    do
    { 
         cout<<" 1. Add \n 2. Remove \n 3. sort \n 4. reverse \n 5. Show \n 7.Exit"<<endl;
         
         cout<<"Enter choice : "<<endl;
         cin>>choice;
         switch(choice)
         {
             case 1:
                   cout<<"Enter a number to add : "<<endl;
                   cin>>num;
                   v.push_back(num);
                   break;

             case 2:
                   v.pop_back();
                   cout<<"Successfully removed last element from vector"<<endl;
                   break;
                
             case 3:
                   
                   sort(v.begin(),v.end());
                   cout<<"----- Sorting Completed -------"<<endl;
                   break;

             case 4:
                   reverse(v.begin(),v.end());
                   cout<<"-------Reverse Completed --------"<<endl;
                   break;

             case 5:
                   for(auto element:v)
                   {
                    cout<<" "<<element;
                   }
                   cout<<endl;
                   break;
         }
    }
    while(choice !=7);
    
    return 0;
}
