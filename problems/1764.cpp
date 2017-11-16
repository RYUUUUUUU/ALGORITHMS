/*
문제
   김진영이 듣도 못한 사람의 명단과, 보도 못한 사람의 명단이 주어질 때, 듣도 보도 못한 사람의 명단을 구하는 프로그램을 작성하시오.
입력
   첫째 줄에 듣도 못한 사람의 수 N, 보도 못한 사람의 수 M이 주어진다. 
   이어서 둘째 줄부터 N개의 줄에 걸쳐 듣도 못한 사람의 이름과, N+2째 줄부터 보도 못한 사람의 이름이 순서대로 주어진다. 
   이름은 띄어쓰기 없이 영어 소문자로만 이루어지며, 그 길이는 20 이하이다. N, M은 500,000 이하의 자연수이다.
출력  
   듣보잡의 수와 그 명단을 사전순으로 출력한다.


예제입력
   3 4
   ohhenrie
   charlie
   baesangwook
   obama
   baesangwook
   ohhenrie
   clinton

예제 출력
   2
   baesangwook
   ohhenrie
   
   
*/



#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int N, M;

vector<string> v;
vector<string> ::iterator i_v;

set<string>s;

int main(){
   
   cin >>N>>M;
   string temp;

   while(N--){
      cin >> temp;
      s.insert(temp);
   }
   while(M--){
      cin >> temp;
      if (!(s.find(temp)==s.end())){
         v.push_back(temp);
      }
   }

   cout<<v.size()<<endl;
   sort(v.begin(),v.end());

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
   }

   return 0;
}
