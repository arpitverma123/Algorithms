/*
INPUT : 3
OUTPUT: 10203010011012
                 **4050809
                 ****607

*/
//CODE


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int star=0,k=1, l=n*n + 1;;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<star;j++)
          cout<<"**";
        for(int j=0;j<i;j++)
        {
            cout<<k<<"0";
            k++;
        }

        int m=l;
        for(int j=0;j<i-1;j++)
        {
            cout<<m<<"0";
            m++;
        }
        cout<<m<<endl;
        l=l-i + 1;
        star++;
        
    }

    return 0;
}
