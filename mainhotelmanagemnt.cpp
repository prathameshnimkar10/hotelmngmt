#include<iostream>
using namespace std;
int main()
{
    cout<<"WELCOME TO OUR HOTEL"<<endl;
    cout<<"1.Book a Room"<<endl;
    cout<<"2.Book a Dining table"<<endl;
    cout<<"3.Book a Tourist vehicle"<<endl;
    cout<<"4.Room Service"<<endl;
    cout<<"5.Facilities"<<endl;
    int a;
    int y;
    cout<<"Enter the number of services you want:"<<endl;
    cin>>y;
    for(int p=1;p<=y;p++)
    {
        cout<<"WELCOME TO OUR HOTEL"<<endl;
        cout<<"1.Book a Room"<<endl;
        cout<<"2.Book a Dining table"<<endl;
        cout<<"3.Book a Tourist vehicle"<<endl;
        cout<<"4.Room Service"<<endl;
        cout<<"5.Facilities"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your desired action"<<endl;
    
        cin>>a;

        if(a==1)
        {
            cout<<"Single bed rooms       - Room no. 1-15"<<endl;
            cout<<"Double bed rooms       - Room no. 16-30"<<endl;
            cout<<"Luxury rooms           - Room no. 31-45"<<endl;
            cout<<"Premium rooms          - Room no. 46-60"<<endl;
            cout<<"Enter the room no. you want to book:"<<endl;
            
            while(1)
            {
                int b;
                cin>>b;
                if(b>0 && b<=60)
                {
                    cout<<"THANK YOU for booking room no."<<b<<" Please collect the room keys from the reception"<<endl;
                    //j++;
                    break;
                }
                else
                    cout<<"Please enter a valid room no.:"<<endl;
            }
        }
        
        else if(a==2)
        {
            cout<<"1. Central tables          - Table no. 1 to 10"<<endl;
            cout<<"2. Pool side tables        - Table no. 11 to 20"<<endl;
            cout<<"3. Cozy corner tables      - Table no. 21 to 30"<<endl;
            cout<<"Enter the table no. you want to book:"<<endl;
            
            while(1)
            {
                int c;
                cin>>c;
                if(c>0 && c<=30)
                {
                    cout<<" THANK YOU for booking table no."<<c<<" Your table will be ready when you arrive"<<endl;
                    //k++;
                    break;
                }
                else
                    cout<<"Please enter a valid table no:"<<endl;
            }
        }
        
        else if(a==3)
        {
            cout<<"1. Bike"<<endl;
            cout<<"2. Car"<<endl;
            cout<<"3. Van"<<endl;
            cout<<"Enter the Vehicle you want to book :"<<endl;
            
            while(1)
            {
                int d;
                cin>>d;
                if(d>0 && d<=3)
                {
                    cout<<"THANK YOU for booking a vehicle. Your vehicle will be ready when you arrive"<<endl;
                    //l++;
                    break;
                }
                else
                    cout<<"Please enter a valid no."<<endl;
            }
        }
        
        else if(a==4)
        {
            cout<<"1. Order food"<<endl;
            cout<<"2. Shower and Toileteries"<<endl;
            cout<<"3. Massages and Spa"<<endl;
            
            while(1)
            {
                int e;
                cin>>e;
                if(e==1)
                {
                    cout<<"Thank you for your call we'll soon send the drinks and the menu so that you can order your food via reception"<<endl;
                    break;
                }
                else if(e==2 || e==3)
                {
                    cout<<"THANK YOU for your call we will help you as soon as possible "<<endl;
                    //m++;
                    break;
                }
                else
                    cout<<"Please enter a valid response"<<endl;
            }
        }
        
        else if(a==5)
        {
            cout<<"1.WIFI"<<endl;
            cout<<"2.GYM"<<endl;
            cout<<"3.STEAM ROOM"<<endl;
            cout<<"4.SWIMMING POOL"<<endl;
            
            while(1)
            {
                int f;
                cin>>f;
                if(f==1)
                {
                    cout<<"We will soon provide you with the WIFI password"<<endl;
                    break;
                }
                else if(f==2 || f==3 || f==4)
                {
                    cout<<"We have booked your slots.THANK YOU for booking the slots"<<endl;
                    //n++;
                    break;
                }
                else
                    cout<<"Please enter a valid no."<<endl;
            }
        }
    }
     cout<<"******************************THANK YOU FOR VISITING US******************************"<<endl;
}