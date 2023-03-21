#include <bits/stdc++.h>
using namespace std;

#define ll long long
void printkora(map<int,string> &m){
    for(auto &it:m){
            cout<<it.first<<" "<<it.second<<endl;
        }
}

int main()
{

    ios_base::sync_with_stdio(false);

    
//map is sorted acc to keys not unordered map
//used data structure is red black trees
        map<int,string> m;
        m[1]="abc"; //O(log(n)) //time complexity also depends on keys not always logn
        //s.size() * logn as string comparision happens as sorted order is there.
        m[3]="cdc";
        m.insert({4,"dnc"});
        // map<int,string> :: iterator it;
        // for(it =m.begin(); it!=m.end(); it++){
        //     cout<< (*it).first<<" "<<(*it).second<<endl;
        // }
        printkora(m);
        
        auto i=m.find(3); // logn
        // if there is no such key find returns
        // m.end()
        if (i==m.end()){
            cout<<"No value";
        }
        else{
            cout<< i->first << " " <<(*i).second <<endl; // different ways to access;
        }

        if(i!=m.end())  m.erase(3); //logn
        //if key doesn't exist then segmentation error so use check
        printkora(m);

        m.clear(); //0 size map
        cout<<m.size()<<endl;

    

    return 0;
}