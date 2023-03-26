(int ind, int sum, int csum, vector<int> voro, vector<int> v, int last){
//     if(ind==last){
//         if(csum==sum){
//             for(auto it:voro){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//             return true;
//         }return false;
//     }
//     voro.emplace_back(v[ind]);
//     csum+=v[ind];
//     if(prints(ind+1, sum, csum, voro, v, last)){
//         return true;
//     }
//     csum-=v[ind];
//     voro.pop_back();
//     if(prints(ind+1, sum, csum, voro, v, last)){
//         return true;
//     }
//     return false;

// }