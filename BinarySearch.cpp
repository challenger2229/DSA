



// dated 13-april-2025 
//Objective of this file is to implement searching via linear search and  binary search algo with and without recursion and understanding it also






#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int BinarySearch(vector<int> &array, int target){
    int start=0;
    int end=array.size()-1;
    int mid=(start+end)/2;
    int output=-1;

    while(start<=end){

        if(array[mid]==target){
            output=mid;
            break;
        }
        else if(array[mid]>target){
            end=mid-1;
            mid=(start+end)/2;
        }
        else{
            start=mid+1;
            mid=(start+end)/2;
        }
    }


    return output;
}

int linearSearch(vector<int> &array,int target){
    int output=001;
    for(int i=0;i<array.size();i++){
    if(array[i]==target){
        output=i;
        break;
    }
}
return output;
}


//driver code
int main(){
//declaring vector
vector<int> maal;
int a;
cout<<"set vector limit :"<<endl;
cin>>a;

for(int i=0;i<a;i++){
    int input;
    cin>>input;
    maal.push_back(input);
}
//sorting the vector to prevent accidental issues

sort(maal.begin(),maal.end());

cout<<"the array is :"<<endl;
for(int i=0;i<maal.size();i++){
    cout<<maal[i]<<" ";
}
cout<<endl;

int target;
cout<<"enter the target value"<<endl;
cin>>target;

int output=BinarySearch(maal,target);//can be related to OOPS at some extent

if(output==-1){
cout<<"target is not present here"<<endl;
}
else{
cout<<"the target is present at"<<" "<<output+1<<endl;
}
}