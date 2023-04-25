#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
using namespace std;
class queue{
private:
    int front, rear, arr[3], i;
public:
    queue()
    {
        front = -1;
        rear = -1;
        for(int i=0; i<3; i++)
        {
            arr[i] = 0;
        }
    }
    void Display()
    {
        for(int i=0; i<3; i++)
        {
            cout << arr[i] << " ";
        }
    }
    bool isEmpty()
    {
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(rear == 2 )
            return true;
        else
            return false;
    }
    void Enqueue(int x)
    {
        if(isFull())
        {
            cout << "Queue is Full" << endl;
            return;
        }
        else if(isEmpty())
        {
            front = 0;
            rear = 0;
            arr[rear] = x;
        }
        else
        {
            rear++;
            arr[rear] = x;
        }
    }
    int Dequeue(int x, int i)
    {
        if(isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else if(front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            cout<<"Job: "<<i<<" Priority: "<<x<<" KILLED\n"<<endl;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            cout<<"Job: "<<i<<" Priority: "<<x<<" KILLED\n"<<endl;
            return x;
        }
    }
    int count()
    {
        return (rear - front + 1);
    }
    void execute(int x)
    {
        if(isEmpty())
        {
            cout << "Queue Is Empty. Cannot Execute Job." << endl;
        }
        else
        {
            i=0;
            cout<<"Jobs In Queue:";
            Display();
            cout<<"\n"<<endl;
            cout<<" --- NEW --- PROCESS CREATED\n"<<endl;
            cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
            cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY\n"<<endl;
            if(arr[i] == 3 && i == 0)
            {//start of 3 first
                cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                i++;
                if(arr[i] == 2 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 1 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                }
                else if(arr[i] == 1 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY\n"<<endl;
                    i++;
                    if(arr[i] == 2 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i--;
                    }
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else if(arr[i] == 3 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                }
                else if(arr[i] == 3 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 2 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                }
                else if(arr[i] == 3 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 1 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                }
                else if(arr[i] == 1 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY\n"<<endl;
                    i++;
                    if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i--;
                    }
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else if(arr[i] == 2 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY\n"<<endl;
                    i++;
                    if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i--;
                    }
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else
                {

                }
            }//end of 3 first
            else if(arr[i] == 2 && i == 0)
            {//start of 2nd first
                i++;
                if(arr[i] == 3 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i--;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i=i+2;
                    if(arr[i] == 1 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                    else if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i=i-2;
                    }
                }
                else if(arr[i] == 1 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY\n"<<endl;
                    i++;
                    if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i=i-2;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                    i++;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else if(arr[i] == 2 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 2 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                }
                else
                {

                }
            }//end of 2 first
            else if(arr[i] == 1 && i == 0)
            {//start of 1 first
                i++;
                if(arr[i] == 2 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY\n"<<endl;
                    i++;
                    if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i--;
                    }
                    else if(arr[i] == 2 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i--;
                    }
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i--;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else if(arr[i] == 3 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 2 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i=i-2;
                    }
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else if(arr[i] == 1 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 1 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    }
                }
                else if(arr[i] == 3 && i == 1)
                {
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                    i++;
                    if(arr[i] == 3 && i == 2)
                    {
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" WAITING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" READY"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                        cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                        i=i-2;
                    }
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" RUNNING"<<endl;
                    cout<<"Job: "<<i<<" Job Priority: "<<arr[i]<<" TERMINATED\n"<<endl;
                }
                else
                {

                }
            }//end of 1 first
            else
            {
                system("cls");
                cout<<"\t\t\t\t\t\t--------->Recovering........<---------"<<endl;
            }
        }
        if(isFull())
        {
            for(int i=0; i<3; i++)
            {
                Dequeue(x, i);
            }
        }
    }
    void sort_queue_jobs()
    {
        //long int comparison=(pow(5,2)+3*5-4)/8;
        long int assignments=(3*(3-1)/8);
        int counter=0;
        do{
            for(int i=0; i<2; i++)
            {
                if(arr[i]<arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            for(int i=2; i>=0; i--)
            {
                if(arr[i]<arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            counter++;
        }while(counter!=assignments);
        cout<<"\n"<<endl;
    }
    ~queue()
    {
    }
};
int main()
{
    int c = 0;
    queue q1;
    int x,option;
    do
    {
        system("color b");
        cout << "\n\t\t\t\t\tWhat operation do you want to perform?.  Enter 0 to Exit.\n\n" << endl;
        cout << "\t\t\t\t\t1. Enter Jobs In Queue\n" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t6. Display Jobs In Queue\n" << endl;
        cout << "\t\t\t\t\t7. Execute Jobs In Queue\n" << endl;
        cin >> option;
        switch (option)
        {
        case 0:
            break;
        case 1:
            for(int i=0; i<3; i++)
            {
                c++;
                cout << "Enter Priority Of Job "<<c<<"-->"<<endl;
                cin>>x;
                cout<<endl;
                q1.Enqueue(x);
            }
            break;
        case 6:
            cout << "Jobs In Queue: "; q1.Display();
            break;
        case 7:
            q1.execute(x);
            c = 0;
            break;
        default:
            cout << "Invalid Option" << endl;
            break;} cout <<""<<endl; cout <<""<<endl;
            system("PAUSE");
            system("CLS");
    }while(option != 0);
    return 0;
}
