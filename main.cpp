    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
       map<string,int> names;
       int n;
       string s;
       cin>>n;
       while(n--){
           cin>>s;
           if(names.find(s)!=names.end())
           {
               cout<<s<<names[s]<<endl;
               names[s]++;
           }
           else
           {
               cout<<"OK"<<endl;
               names[s]=1;
           }
       }
       return 0;
    }
     
