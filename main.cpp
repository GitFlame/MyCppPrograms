#include<iostream>
using namespace std;

int main(){
    string main_string, user_string;
    cin>>main_string>>user_string;

    //case1: Both string are different size, no need to check anything
    if(main_string.size()!=user_string.size()){
        cout<<"No"<<endl;
        return 0;
    }
    int flag= -1;
    for(int i=0;i<main_string.size();i++){

        //every charecter of main string is converting in ASCII value
        int temp = int(main_string[i]);
        
        //every charecter of user input string is converting in ASCII value
        int temp1 = int(user_string[i]);

        //check 1: if both char capital or small
        if(temp == temp1){
            flag=0;
            continue;
        }
        //check 2: if main char small and user char capital
        else if(temp>=97 and temp<=122){
            if(temp-32 == temp1){
                flag=0;
                continue;
            }
        }
        //check 3: if main char capital and user char small
        else if(temp>=65 and temp<=90){
            if(temp+32 == temp1){
                flag=0;
                continue;
            }
        }
        //check 4: if both char is not matching
        flag = 1;
        break;
    }
    
    if(flag == 0){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    
}

