/*#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();

    int n, count = 0, count4 = 0,  count3 = 0, sum = 0, count1_3 = 0;
    float count1 = 0,count2=0,z2=0,x1=0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
        // count = count + k;
        if (k == 4)
        {
            count4++;
        }
        if (k == 3)
        {
            count3++;
        }
        if (k == 2)
        {
            count2++;
        }
        if (k == 1)
        {
            count1++;
        }
    }

   // cout << "count1=" << count1 << endl;
    //cout << "count2=" << count2 << endl;
    //cout << "count3=" << count3 << endl;
   // cout << "count4=" << count4 << endl;
    if(count3>0 && count1>0)
    {
        if(count3>count1)
        {
            count4=count4+count1;
            count3=count3-count1;
            count1=0;
        }
        else if(count1>count3)
        {
            count4=count4+count3;
            count1=count1-count3;
            count3=0;
        }
        else{
            count4=count4+count1;
            count3=0;
            count1=0;
        }
    }
   // cout << "count1==" << count1 << endl;
   // cout << "count2==" << count2 << endl;
    //cout << "count3==" << count3 << endl;
    //cout << "count4==" << count4 << endl;

    if(count2>0)
    {
        count2=count2*2;
        //cout<<"count2===="<<count2<<endl;
        z2=(floor)((float)count2/4);
        //cout<<"z2===="<<z2<<endl;
        count2=count2-z2*4;
        //cout << "count2=====" << count2 << endl;
        if(count2>0)
        {count1=count1+count2;}
    }
    if(count1>=4)
    {
      x1=(floor)((float)count1/4);
      count1=abs(x1*4-count1);
    }
    if(count1>0)
    {
        x1=x1+1;
    }
    sum=count4+count3+z2+x1;
    cout<<sum<<endl;
}*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();

    int n, max = 0, min = 0, count_max = 0, count_min = 0,sum=0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count_max = i;
        }
    }
    //cout << "max=" << max << "position=" << count_max << endl;

    min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            count_min = i;
        }
    }
  // cout << "min=" << min << "position=" << count_min << endl;

    if (count_max > count_min)
    {
        count_min=count_min +1;
    }
    int a = (n-1)-count_min;
    //cout<<"countmax="<<count_max<<"countmin=="<<a<<endl;
    sum=count_max + a;
    cout<<sum<<endl;

}