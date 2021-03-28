//WAP TO BUILD FUNCTIONS FOR SPARSE MATRIX
//1. TO READ A MATRIX
//2. TO ADD TWO MATRICES
//3. TO PRINT A MATRIX
//4. TO TRANSPOSE THE RESULTANT MATRIX
#include<iostream>
using namespace std;
void READ(int s[][3],int n)//THE FUNCTION TO READ SPARSE MATRIX
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>s[i][j];
        }
    }
}
void ADD(int s1[][3],int s2[][3],int s3[][3])//THE FUNCTION TO ADD TWO SPARSE MATRICES
{
    int i,j,k,t1,t2;
    if(s1[0][0]!=s2[0][0]||s1[0][1]!=s2[0][1])
        cout<<"SPARSE MATRIX ADDITION NOT POSSIBLE"<<"\n";
    t1=s1[0][2];
    t2=s2[0][2];
    i=j=k=0;
    s3[0][0]=s1[0][0];
    s3[0][1]=s1[0][1];
    while(i<=t1&&j<=t2)
    {
        if(s1[i][0]<s2[j][0])//ROW NUMBERS ARE NOT EQUAL
        {
            k++;
            i++;
            s3[k][0]=s1[i][0];
            s3[k][1]=s1[i][1];
            s3[k][2]=s1[i][2];

        }
        else if(s2[j][0]<s1[i][0])//ROW NUMBERS ARE NOT EQUAL
        {
            k++;
            j++;
            s3[k][0]=s2[j][0];
            s3[k][1]=s2[j][1];
            s3[k][2]=s2[j][2];

        }
        else if(s1[i][1]<s2[j][1])//ROW NUMBERS ARE EQUAL ,COMPARE COLUMNS
        {
            k++;
            i++;
            s3[k][0]=s1[i][0];
            s3[k][1]=s1[i][1];
            s3[k][2]=s1[i][2];

        }
        else if(s2[j][1]<s1[i][1])//ROW NUMBERS ARE EQUAL, COMPARE COLUMNS
        {
            k++;
            j++;

            s3[k][0]=s2[j][0];
            s3[k][1]=s2[j][1];
            s3[k][2]=s2[j][2];

        }
        else//BOTH ROWS AND COLUMNS ARE EQUAL
        {
            k++;
            i++;
            j++;
            s3[k][0]=s1[i][0]+s2[j][0];
            s3[k][1]=s1[i][1]+s2[j][1];
            s3[k][2]=s1[i][2]+s2[j][2];

        }

    }
    while(i<=t1)//COPY TERMS FROM S1
    {
        k++;
        i++;
        s3[k][0]=s1[i][0];
        s3[k][1]=s1[i][1];
        s3[k][2]=s1[i][2];

    }
    while(j<=t2)//COPY TERMS FROM S2
    {
       k++;
       j++;
       s3[k][0]=s2[j][0];
       s3[k][1]=s2[j][1];
       s3[k][2]=s2[j][2];

    }
    s3[0][2]=k-1;//SET NOS. IN TERMS OF S3

}
void PRINT(int s[][3],int n)
{
    int i,j;
    cout<<"THE MATRIX TO BE PRINTED="<<"\n";
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void TRANSPOSE(int s3[][3],int st[][3])//FUNCTION TO TRANSPOSE A SPARSE MATRIX
{
    int i,j,k=1,n;
    st[0][0]=s3[0][1];
    st[0][1]=s3[0][0];
    st[0][2]=s3[0][2];
    n=s3[0][2];
    for(i=0;i<s3[0][1];i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j=s3[j][1])
            {
                st[k][0]=i;
                st[k][1]=s3[j][0];
                st[k][2]=s3[j][2];
                k++;            }
        }
    }
}
int main()//DRIVER CODE
{
    int r1,r2,MAX,r3;
    cout<<"ENTER THE NO OF NON ZEROS OF SPARSE MATRIX "<<"\n";
    cin>>r1;
    r1+=1;
    int s1[r1][3];
    cout<<"ENTER THE SPARSE MATRIX "<<"\n";
    READ(s1,r1);
    cout<<"ENTER THE NO OF NON ZEROS IN NEXT SPARSE MATRIX "<<"\n";
    cin>>r2;
    r2+=1;
    int s2[r2][3];
    cout<<"ENTER THE ANOTHER SPARSE MATRIX "<<"\n";
    READ(s2,r2);
    MAX=r1+r2;
    int s3[MAX][3];
    ADD(s1,s2,s3);
    cout<<"THE SPARSE MATRIX ADDITION"<<"\n";
    PRINT(s3,s3[0][2]);
    int k=s3[0][2];
    int st[k][3];
    cout<<"THE TRANSPOSE SPARSE MATRIX"<<"\n";
    TRANSPOSE(s3,st);
    PRINT(st,st[0][2]);
    return 0;
}


