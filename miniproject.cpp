#include  <iostream>  
using  namespace std ;
float price(int quantity, float fixprice = 1000.0) {
    return quantity * fixprice; 
}
 
int main(){
     int quantity , stock ;
     cout<<"Enter the available stock: ";
     cin>>stock ;
     cout<<"Enter the required quantity: ";
     cin>>quantity ;
     cout<<"let me check if the stock is available or not"<<endl;
     if (quantity < stock) {
        cout<<"the stock is available"<<endl;
        cout<<"Your required stock is: "<<quantity<<" the total bill is: "<<price(quantity)<<"rs" ;

     }
     else if(quantity==stock){
        cout<<"YAYYY!!! YOU GOT STOCK CLEARANCE DISCOUNT"<<endl;
        cout<<"Your required stock is: "<<quantity<<" the total bill is: "<<price(quantity)<<"rs"<<" and you got a 10% discount"<<price(quantity , 900.0)<<endl; ;
     }
    
else if (quantity > stock) {
    cout<<"The stock is not available"<<endl;
}
    return 0 ;
} 