#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b,c,x;
        cin>>a>>b>>c>>x;
        int ans=a*x+b*x+c;
        int arr[10]={6,2,5,5,4,5,6,3,7,6};
        int n=0;
        while(ans>0){
            int temp=ans%10;
            for(int i=0;i<10;i++){
                if(i==temp){
                    n+=arr[i];
                }
            }
            ans=ans/10;
        }
        cout<<n<<endl;
    }
}
