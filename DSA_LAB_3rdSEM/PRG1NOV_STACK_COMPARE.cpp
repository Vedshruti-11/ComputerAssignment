#include<iostream>
#include<stack>

using namespace std;
//FUNCTION TO CHECK TWO STACKS ARE SAME

bool isSameStack(stack<string> stack1,stack<string> stack2)
{
    //Create a flag variable
    bool flag=true;
    //check if the size of two stacks are same
    if(stack1.size()!=stack2.size()){
        flag=false;
        return flag;
    }
    //Until stacks are not empty compare top of both stacks
    while(stack1.empty()==false){
        //if the top elements of both stacks are same
        if(stack1.top()==stack2.top()){
            //pop top of both stacks
            stack1.pop();
            stack2.pop();
        }
        else{
            //Otherwise set flag to false
            flag=false;
            break;
        }
    }
    //Return flag
    return flag;
}
//MAIN CODE

int main()
{
    //creating stacks
    stack<string> stack1;
    stack<string> stack2;

    //Inserting elements to stack1
    int n1,n2;
    string a1[20],a2[20];
    cout<<"Enter the no of elements in stack1: \n";
    cin>>n1;
    cout<<"Enter the elements in stack1: \n";
    for(int i=0;i<n1;i++){
        cin>>a1[i];
        stack1.push(a1[i]);
    }
    //Inserting elements to stack2
    cout<<"Enter the no of elements in stack2: \n";
    cin>>n2;
    cout<<"Enter the elements in stack2: \n";
    for(int j=0;j<n2;j++){
        cin>>a2[j];
        stack2.push(a2[j]);
    }

    if(isSameStack(stack1,stack2)){
        cout<<"Stacks are Same"<<endl;
    }
    else{
        cout<<"Stacks are not Same"<<endl;

    }
    return 0;
}
