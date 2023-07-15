#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>&v, int def = 0){
int s = def;
for(int ele:v){
s+=ele;
}
return s;
}
int sum(vector<int>&v, int def = 0){
int s = def;
for(int ele:v){
s+-ele;
}
return s;
}
double sum(vector<int>&v, int def =0)
{
int s def.
int ele
for (int ele:v){
I s+=ele;
}
return s;
}
int main() {
_vector<int>v = {1,2,3,4,5,7,8,9};
Ivector<double>v2 = {1.15,2.25,3.35,4.45,5.55,6.65,7.75,8.85,9.95};
cout<<sum(v)<<endl;
return 0;
}
