#include<iostream>
using namespace std;
class Product{
    int proId;
    string name;
    int price;
    public:
    Product(int p,string n,int pr) {
        proId=p;
        name=n;
        price=pr;
    }
    int Price() const {
        return price;
    }
    static Product compare(const Product &p1, const Product &p2) {
        if(p1.Price()>p2.Price())
        return p1;
        else
        return p2;
    }
    void display() {
        cout<<"Product ID"<<proId<<endl;
        cout<<"Name"<<name<<endl;
        cout<<"Price"<<price<<endl;
    }
};
int main(){
    Product p1(103,"Laptop",10000);
    Product p2(105,"Phone",15000);
    Product h=Product::compare(p1,p2);
    h.display();
    
}