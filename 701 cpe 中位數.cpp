#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;//定義測資
    cin >> T;//輸入要幾個測資
    while(T--){ //指有T個測資，每個測資算完減一只到T為零
        int r;//輸入有r個親戚
        cin >> r;
        
        int v[501]={};//[501]是因為親戚人數不能大於500人
        int res =0;//指後續算總距離的變數
        
        for(int i=0;i<r;i++){
            cin>>v[i];//例子：3位親戚 v[0],v[1],v[2]
        }
        sort(v,v+r);//排列；v為0位址；v+r為邊界；通常v[r-1]為最後一個
        int mid=v[r/2]; //中間值是位址除於2 //注意是v[r/2]
        
        for(int i=0;i<r;i++){
            res+=abs(mid-v[i]);//題目給的絕對值|si-sj|
        }
        cout<<res<<"\n";
    }
    return 0;
}