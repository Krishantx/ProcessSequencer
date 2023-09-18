#include <iostream>
using namespace std;
//Program For finding the safe state 

class Solution {
    private:
        int n, p;
        int a[10], b[10], c[10];
    public:
        void input()
        {
            int yn;
            cout<<"Enter The Number of processes: "<<endl;
            cin>>p;
            cout<<"Enter The number of resources: "<<endl;
            cin>>n;
            cout<<"Does resources have any instances?"<<endl;
            cin>>yn;
            if (yn == 1)
            {
                instanceAllocation();
            }
        }
        void instanceAllocation()
        {
            int ans;
            for (int i = 0; i<n; i++)
            {
                cout<<"Number of Instances in R"<<1+i<<endl;
                cin>>ans;
                c[i] = ans;
            }
        }
        void getOut()
        {
            for (int i = 0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for (int i = 0; i<n; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
             for (int i = 0; i<n; i++)
            {
                cout<<"Instances of process: "
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        
        void processRec()
        {
            for (int i = 0; i < p; i++)
            {
                cout<<"How many resoureces P"<<i+1<<" need"<<endl;
                cin>>a[i];
                cout<<"Specify"<<endl;
                for (int j = 0; j < a[i]; j++)
                {
                    cout<<"R";
                    cin>>b[i];
                    cout<<endl;
                }
            }
        }
};

int main()
{
    Solution O1;
    O1.input();
    O1.processRec();
    O1.getOut();
}