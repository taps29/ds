#include<iostream>
using namespace std;
class password {
	int x,n;
	char A[50];
	public:
	password();
	void wr();
	void wor();
};
password::password()
{
	cout<<"Enter no. of characters to choose from, for your password."<<endl;
	cin>>n;
	cout<<"Enter your choice of characters for the password (Without Spaces)."<<endl;
	cin>>A;
}
void password::wor() 
{
	x = 0;
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++) 
		{
			for(int k=0;k<n;k++) 
			{
				for(int l=0;l<n;l++) 
				{	
					if(i!=j&&j!=k&&k!=l&&l!=i&&i!=k&&j!=l) 
					{
						cout<<A[i]<<A[j]<<A[k]<<A[l]<<endl;
						x++;
					}
				}
			}
		}
	}
	cout<<"Passwords without repetition: "<<x<<endl;
}
int main() 
{
	password P;
	cout<<"Generate Password without Repeatation."<<endl;
	P.wor();
	return 0;
}
