#include<iostream>
using namespace std;

    int count1,big,small,k=0,s=0,a11=0,b11=0;

    int a1[10],b1[10];
    void display(int *one,int* two)
{
    cout<<"\n first array\n";
    for(int i=0;i<a11;i++)
        cout<<one[i]<<" ";
    cout<<"\n second array \n";
    for(int i=0;i<b11;i++)
        cout<<two[i]<<" ";
}


    int exicutuion(int n,int *a)
    {
        //if(s==0)
           // n/=10;

        big=a[0];

        for(int i=0;i<n;i++)
        {

            if(a[i]>=big)
            {
                 big=a[i];

            }

        }

        for(int i=0;i<n;i++)
        {
            if(a[i]==big)
                {
                    a[i]=0;

                    break;
                }
        }



            if(s<n)
            {
            s++;
            if(k>=0)
            {

               k-=big;
               a1[a11++]=big;

               exicutuion(n,a);

            }
            else if(k<0)
            {

                k+=big;
                b1[b11++]=big;

                exicutuion(n,a);
            }
            }
            else
            {
                if(k==0)
                {
                    display(a1,b1);
                    return 1;
                }
                else
                {

                    return 0;
                }
            }

        }






int main()
{
    int n;
    //for iteretion
    int i,j;
    cout<<"Enter the Array Size:\t";
    cin>>n;
    cout<<"Enter Values";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<n;
    cout<<"Processing\n";
   bool b= exicutuion(n,a);
   cout<<b;
   return 0;


}
