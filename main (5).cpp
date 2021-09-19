#include <iostream> //fahreinheit to celcias;
using namespace std;
int main()
{
        //int S;
   /* int E;
    int W;
    int convert=0;
    cout<<"enter S"<<endl;
    cin>>S;
    cout<<"enter E"<<endl;
    cin>>E;
    cout<<"enter W"<<endl;
    cin>>W;
    while(S<=E){
      convert=(S-32)*5/9;
        S+=W;
    }
    cout<<convert<<"\t";
}*/
     int S,E,W,c;
    cin>> S >>E >>W;
    while(S<=E){
        c= (S-32)*5/9;
        cout<<S <<"\t" <<c <<endl;
      S=S+W;
    }
   
    
}


    

