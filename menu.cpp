#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;

    while(true)
    {
        cout<<endl<<"Welcome To Programee!!"<<endl;

        cout<<endl<<"Press 1 to crate array"<<endl;
        cout<<"Press 2 show all element of array"<<endl;
        cout<<"Press 3 delete element of array"<<endl;
        cout<<"Press 4 update element of array"<<endl;
        cout<<"Press 5 Exit to program"<<endl;

        int choice;
        cout<<endl<<"Select your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<endl<<"Enter Array size : ";
            cin>>n;

            if(n>0 && n<20)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<"Enter element of array "<<i+1<<" = ";
                    cin>>arr[i];
                }
                cout<<endl<<"Successfully added "<<endl;
            }else{
                cout<<endl<<"Invalid Size "<<endl;
            }
            break;
        case 2:
            cout<<endl<<"Show all element of array : ";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        break;
        case 3:
            int pos;
            cout<<endl<<"Enter position : ";
            cin>>pos;

            if(pos>=0 && pos<n)
            {
                for(int i=pos;i<n;i++)
                {
                    arr[i]=arr[i+1];
                }
                n--;
            }else{
                cout<<endl<<"Invalid position"<<endl;
            }
        break;
        case 4:
            int poss;
            int val;
            cout<<endl<<"Enter position : ";
            cin>>poss;
            cout<<endl<<"Enter value : ";
            cin>>val;

            if(poss>=0 && poss<n)
            {
                arr[poss]=val;
            }else{
                cout<<endl<<"invalid Position"<<endl;
            }
        break;
        case 5:
            cout<<endl<<"Visit Again!!"<<endl;
            return 0;
        break;
        default:
            break;
        }
    }
}