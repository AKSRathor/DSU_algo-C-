#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5;
vector<ll>size(1e5, 0);
vector<ll>parent(1e5, 0);
void make(){
    for(ll i =0; i<N; ++i){
        size[i] = 1;
        parent[i] = i;
    }
}
ll find(ll vertex){
    ll prt = parent[vertex];
    if(prt == vertex){
        return vertex;
    }
    return find(prt);
}

void union_func(ll a, ll b){
    ll x = find(a, parent);
    ll y = find(b, parent);
    if(x!=y){
        if(size[x]<size[y]){
            swap(x, y);
        }
        parent[y] = x;
        size[x] += size[y];
    }
}

int main(){

    return 0;
}
