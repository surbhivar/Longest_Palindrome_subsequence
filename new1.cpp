#include <string.h>
#include <iostream>
using namespace std;
string max_str;
int count=0;
void p (string r)
{


    int flag=0;
      int k;
        k=r.length();
         for( int i=0;i < k ;i++){
        if(r[i] != r[k-i-1]){
            flag = 1;
        break;}}
            if (flag) {
        cout << r << " is not a palindrome" << endl;
    }
    else {
        cout << r << " is a palindrome" << endl;

          if(count<k)
          {
                count = k;

               max_str = r;
          }

    }



}

int main()
{

string s1 = "aaaabbaa";
int m;
m= s1.length();

for (int j=0;j<m;j++)
{
for(int i=1; i<=m-j; i ++)
    {
        string r = s1.substr(j,i);

       p(r);


    }
}
cout <<max_str;
    return 0;
}

