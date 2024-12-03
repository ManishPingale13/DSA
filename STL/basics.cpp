#include<bits/stdc++.h>
using namespace std;

void learnPair(){
    pair<int,int> p1={10,20};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<string,float>> studs;
    studs={1,{"Manish",93.4}};

    cout<<"Roll: "<<studs.first<<" Name: "<<studs.second.first<<" Percentage: "<<studs.second.second<<"\n";

    pair<int,string> stds[5];
    stds[0]={1,"Nil"};
    stds[1]={2,"Nitin"};
    stds[2]={3,"Mukesh"};

    for(auto i:stds){
        cout<<"Roll: "<<i.first<<" Name: "<<i.second<<endl;
    }

}

void learnVector(){
    vector<int> v1;
    
    v1.emplace_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);


    v1.erase(v1.begin()+1,v1.end()-1);

    v1.insert(v1.begin(),300);

    for(auto i:v1){
        cout<<i<<endl;
    }

    vector<pair<int,string>> v2;
    v2.push_back({1,"Manish"});
    v2.emplace_back(2,"Maverick");

    for(vector<pair<int,string>>::iterator itr = v2.begin();itr!=v2.end();itr++){
        cout<<itr->first<<" : "<<itr->second<<endl;
    }

    

    cout<<"Enter your 5 subject marks"<<endl;
    vector<int> marks(5);
    for(auto it=marks.begin();it!=marks.end();it++){
        cin>>*it;
    }

    float sum=0;
    for(auto mark:marks){
        sum+=mark;
    }    
    float per = (sum/500)*100;
    cout<<"Percentage is: "<<per;

}

void learnList(){
    list<int> ls;
    ls.emplace_back(10);//10
    ls.push_back(20);//10,20

    ls.push_front(100);

    for(auto l:ls)
        cout<<l<<endl;

    // same ops like vector: begin,end,rbegin,rend,swap,clear,size,insert
}

void learnDeque(){
    deque<int> dq1;
    dq1.emplace_back(10);
    dq1.emplace_back(20);
    dq1.emplace_front(101);

    for(auto ir=dq1.begin();ir!=dq1.end();ir++)
        cout<<*ir<<endl;

    cout<<dq1.front()<<endl;
    cout<<dq1.back()<<endl;

}

void learnStack_Queue(){
    stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    cout<<stack.top()<<endl;

    stack.pop();

    cout<<stack.top()<<endl;

    cout<<"Queue:\n";

    queue<int> q;
    q.emplace(1);
    q.emplace(10);
    q.emplace(100);
    q.emplace(1000);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

}

void learnPriorityQueue(){
    //MaxHeap
    priority_queue<int> pq1;
    pq1.emplace(1);
    pq1.emplace(90);
    pq1.emplace(-13);
    pq1.emplace(100);

    cout<<pq1.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(100);
    pq2.push(-1);
    pq2.push(0);
    pq2.push(900);

    cout<<pq2.top()<<endl;


}

void learnSets(){
    set<int> s1;
    s1.emplace(10);
    s1.insert(2);
    s1.insert(-2);
    s1.insert(400);
    for(auto i:s1)
        cout<<i<<"\t";
    //-2 2 10 100
    
    cout<<"\n Lower bound:"<<*s1.lower_bound(1);
    cout<<"\n Upper bound:"<<*s1.upper_bound(1)<<endl;

    multiset<int> ms;
    ms.insert(10);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);

    ms.erase(1);

    for(auto i:ms)
        cout<<i<<"\t";


    unordered_set<int> us;
    us.emplace(10);
    us.emplace(110);
    us.emplace(0);
    us.emplace(-10);

    cout<<"Unorderd set\n";
    for(auto i:us)
        cout<<i<<"\t";

}

void learnMap(){
    map<int,string> mp;

    mp.insert({1,"A"});
    mp.emplace(2,"B");
    mp.insert({3,"C"});
    mp.emplace(4,"D");

    for(auto key:mp)
        cout<<key.second<<endl;

    multimap<int,int> mm;   //Duplicate keys are allowed
    unordered_map<int,int> um; //Keys arent sorted
}

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second>p2.second) return true;
    if(p1.second<p2.second) return false;
    if(p1.first<p2.first) return true;
    return false;
}
void learnExtra(){
    vector<int> v1;
    v1.emplace_back(10);
    v1.emplace_back(-10);
    v1.emplace_back(20);
    v1.emplace_back(0);

    sort(v1.begin(),v1.end(),greater<int>()); //Descending
    for(auto i:v1)
        cout<<i<<endl;

    pair<int,int> pr[]={{1,2},{3,1},{4,1},{4,9}};
    sort(pr,pr+4,comp);
    for(auto i:pr)
        cout<<i.first<<" : "<<i.second<<endl;

    int num=15;
    cout<<"Count:"<<__builtin_popcount(num);


}

int main(){
    // learnPair();
    learnVector();
    // learnList();
    // learnDeque();
    // learnStack_Queue();
    // learnPriorityQueue();
    // learnSets();
    // learnMap();
    // learnExtra();
    return 0;
}