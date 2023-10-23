#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   string name;
   int age;
   ifstream s ("Read.txt");
   while(getline(s,name))
   {
    cout<< name<< endl;
    cout<<age<<endl;
   }
 s.close();

    return 0;
}