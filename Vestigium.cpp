#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int p=0;
    while(T--)
    {
        p++;
        int n;
        cin>>n;
        int a[n][n];
        int s=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j)
                    s+=a[i][j];
            }
        int row=0,col=0;
        bool boo=true;
        
    for(int i=0;i<n;i++)
        {
            boo=true;
            for(int j=0;j<n;j++)
            {
                for(int q=j+1;q<n;q++)
                    {
                        if(a[j][i]==a[q][i])
                        {
                            col++;
                            boo=false;
                            break;
                        }
                    }
                if(boo!=true)
                    break;
            }
           
    	}
	
	for(int i=0;i<n;i++)
        {
            boo=true;
            for(int j=0;j<n;j++)
            {
                for(int q=j+1;q<n;q++)
                    {
                        if(a[i][j]==a[i][q])
                        {
                            row++;
                            boo=false;
                            break;
                        }
                    }
                if(boo!=true)
                    break;
            }
           
    }
    cout<<"Case #"<<p<<":"<<" "<<s<<" "<<row<<" "<<col<<endl;
}
}
