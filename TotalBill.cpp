#include<iostream> 
using namespace std;
int returnTotalBill(){
    char c;
    char items;
    char vegItems;
    int billAmount=0;
    char selectAgain;
    char nonvegItems;
    cout<<"---------------Welcome to Online Food-------------"<<endl;
    cout<<"---------------Please follow below instruction----"<<endl;
    cout<<"Step 1: Press s to start your order"<<endl;
    cout<<"Step 2: You can order both veg and nonveg order"<<endl;
    cout<<"Step 3: Press a to select veg items"<<endl;
    cout<<"Step 4: Press b to select nonveg items"<<endl;
    cout<<"Step 5: You will get your final bill after your order"<<endl;
    start:
    cin>>c;
    if(c=='s'||c=='S'){
        items:
        cout<<"Please select which type of food item you want to order"<<endl;
        cout<<"(a)Veg items          (b)Nonveg items"<<endl;
        cin>>items;
        if(items=='a'||items=='A'){
              vegItemsList:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1) Paneer : price : Rs-300"<<endl;
            cout<<"(2) Dal makhni : price : Rs-200"<<endl;
            cout<<"(3) Chole Bhatura: price : Rs-100"<<endl;
            cout<<"(4) Burger : price : Rs-50"<<endl;
            cout<<"(5) Pizza : price : Rs-150"<<endl;
          
          
            cin>>vegItems;
            if(vegItems=='1'){
                billAmount=billAmount+300;
           }
           else if(vegItems=='2'){
            billAmount=billAmount+200;
           }
           else if(vegItems=='3'){
            billAmount=billAmount+100;
           }
           else if(vegItems=='4'){
            billAmount=billAmount+50;
           }
           else if(vegItems=='5'){
            billAmount=billAmount+150;
           }
           else{
            cout<<"You have entered wrong value,try again"<<endl;
            goto vegItemsList;
           }
           cout<<"Do you want add more items, y or n?"<<endl;
           cin>>selectAgain;
           if(selectAgain=='y'){
            goto items;
           }
           else{
            return billAmount;
           }





        }
        else if(items=='b'||items=='B'){
                nonvegItemsList:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1) Chicken : price : Rs-400"<<endl;
            cout<<"(2) Egg Roll : price : Rs-200"<<endl;
            cout<<"(3) Chilli chicken: price : Rs-300"<<endl;
            cout<<"(4) Burger : price : Rs-100"<<endl;
            cout<<"(5) Pizza : price : Rs-250"<<endl;
          
          
            cin>>nonvegItems;
            if(nonvegItems=='1'){
                billAmount=billAmount+400;
           }
           else if(nonvegItems=='2'){
            billAmount=billAmount+200;
           }
           else if(nonvegItems=='3'){
            billAmount=billAmount+300;
           }
           else if(nonvegItems=='4'){
            billAmount=billAmount+100;
           }
           else if(nonvegItems=='5'){
            billAmount=billAmount+250;
           }
           else{
            cout<<"You have entered wrong value,try again"<<endl;
            goto nonvegItemsList;
           }
           cout<<"Do you want add more items, y or n?"<<endl;
           cin>>selectAgain;
           if(selectAgain=='y'){
            goto items;
           }
           else{
            return billAmount;
           }

        }
        else{
            cout<<"You have entered wrong value,try again"<<endl;
            goto items;
        }
        
        
        

        

    }
    else{
        cout<<"You have entered wrong char,please entered correct char s!"<<endl;
        goto start;

    }
    return billAmount;


}
int main(){
    int returnTotalBill(void);
    int totalBill=returnTotalBill();
    cout<<"Your total bill amount is "<<totalBill<<endl;
    cout<<"Thank you to visit"<<endl;
    return 0;
 
 
}

