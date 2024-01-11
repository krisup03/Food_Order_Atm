#include<iostream>
using namespace std;

int main(){
    int returnTotalBill(void);
    int totalBill=returnTotalBill();
    cout<<"Your toatl bill Amount is"<<totalBill<<endl;
    cout<<"Thank you for your order!"<<endl;
}

int returnTotalBill(){
    char c;
    char item;
    char vegItem;
    int billAmount=0;
    char selectAgain;
    char nonvegItem;
    cout<<"--------welcome to online food order--------"<<endl;
    cout<<"--------please follow the given instructions----"<<endl;
    cout<<"step 1: please press S or s to start your order"<<endl;
    cout<<"step 2: you can order both veg and non veg item"<<endl;
    cout<<"step 3: please press A or a to select veg item"<<endl;
    cout<<"step 4: please press B or b to select nonveg item"<<endl;
    
    start:
    cin>>c;
    if(c=='s' || c=='S'){
        items:
        cout<<"please select your choice"<<endl;
        cout<<"(a) veg items (b) nonveg items"<<endl;
       
       cin>>item;
       
       if(item=='a' || item=='A'){
           vegItemList:
           
           cout<<"please select 1,2,3,4,5 as per your choice"<<endl;
           
           cout<<"(1) shahi paneer : price : rs250"<<endl;
           cout<<"(2) veg spicy burger : price : rs150"<<endl;
           cout<<"(3) paneer onion pizza : price : rs350"<<endl;
           cout<<"(4) veg chowmein: price : rs450"<<endl;
           cout<<"(5) veg roll : price : rs550"<<endl;
           
           cin>>vegItem;
           
           if(vegItem=='1'){
               billAmount=billAmount+250;
           }
           else if(vegItem=='2'){
               billAmount=billAmount+150;
           }
           else if(vegItem=='3'){
               billAmount=billAmount+350;
           }
           else if(vegItem=='4'){
               billAmount=billAmount+450;
           }
           else if(vegItem=='5'){
               billAmount=billAmount+550;
             }
             else{
                 cout<<"you have entered wrong value, please try again"<<endl;
                 goto vegItemList;
             }
             
             cout<<"Do you want to add more items, yes or no?"<<endl;
             cin>>selectAgain;
             
             if(selectAgain=='Y' || selectAgain=='y'){
                 goto items;
             }
             else{
                 return billAmount;
             }
           
       }
       else if(item=='b'|| item=='B'){
           nonvegItemList:
           cout<<"please select 1,2,3,4,5 as per your choice"<<endl;
           cout<<"(1) butter chicken: price: rs550"<<endl;
           cout<<"(2) roasted chicken: price: rs650"<<endl;
           cout<<"(3)  chicken pizza: price: rs750"<<endl;
           cout<<"(4) chicken burger: price: rs850"<<endl;
           cout<<"(5) egg chowmein: price: rs950"<<endl;
           
           cin>>nonvegItem;
           if(nonvegItem=='1'){
               billAmount=billAmount+550;
           }
           else if(nonvegItem=='2'){
               billAmount=billAmount+650;
           }
           else if(nonvegItem=='3'){
               billAmount=billAmount+750;
           }
           else if(nonvegItem=='4'){
               billAmount=billAmount+850;
           }
           else if(nonvegItem=='5'){
               billAmount=billAmount+950;
           }
           else{
               cout<<"you have entered wrong value, please try again "<<endl;
               goto nonvegItemList;
           }
           
           cout<<"Do you want to add more items, yes or no?"<<endl;
           cin>>selectAgain;
           
           if(selectAgain=='y' ||selectAgain=='Y'){
               goto items;
           }
           else{
               return billAmount;
           }
       }
        else{
            cout<<"you have entered wrong value, please try again"<<endl;
            goto items;
        }   
        
        
    }
    
    else{
        cout<<"you have entered wrong key,please press s to start your order"<<endl;
        goto start;
    }
    return billAmount;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

