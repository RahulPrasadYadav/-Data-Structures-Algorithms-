#include<bits/stdc++.h>
#include<vector>

using namespace std;

void print(){
      cout<<"Hello"<<endl;
}

int sum(int a , int b){
      return a+b;
}

  //  Pair Explain 
  void explainPair(){
        
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int, pair<int,int>> pp={1,{1,3}};
  
    cout<<pp.first<<" "<< pp.second.first<<endl;

//   array 

pair<int, int> arr[]={{1,2},{2,3},{2,3}};
    

  }


  void explainVector(){

   vector<int> v;
   v.push_back(1);
  //  v.emplace_back(1,2);

      vector<pair<int,int>> vec;
      vec.push_back({1,2});
     
      vector<int> v3(5,100);
         vector<int> v1(5);

          vector<int> v2(5,30);

           for(vector<int> ::iterator it=v2.begin(); it!=v2.end(); it++){
                cout<<*(it)<<" "<<endl;
           }

          
      
  }
int  main(){

  print();
  int s=sum(1,4);
   cout<<s<<endl;


   explainPair();
explainVector();


    return 0;


}