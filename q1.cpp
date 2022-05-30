-#include <iostream>
#include<string>
using namespace std;

int main(){
	string name;
    cin>>name;
	int length=name.length();
	int n;
	int x;
    cin>>n>>x;
	string shift="";
	for(int i=0;i<length;i++){
		if(islower(name[i])){
			shift += char(int(name[i]+n-97)%26 + 97);
		}
		else{
			shift += char(int(name[i]+n-65)%26 +65);
		}
	}
    for(int j=0;j<x;j++){
        for(int i=length-1;i>=0;i--){
            char temp;
            temp=shift[i];
            shift[i]=shift[i-1];
            shift[i-1]=temp;
        }
    }
    cout<<shift;
}
