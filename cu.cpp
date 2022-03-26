#include <iostream>
#include <string>
using namespace std;

int main()
{
	string cu;
	cout<<"Cümle gir  kardesim"<<endl;
	getline(cin,cu);
	for (int j=0;j<cu.size();j++)
	{
		for (int i=0;i<cu.size()-1;i++)
		{
			if (cu[i]>cu[i+1])
			{
				char k=cu[i];
				cu[i]=cu[i+1];
				cu[i+1]=k;
			}
		}
	}
	cout<<cu<<endl;
	cout<<cu.size()<<endl;
	
	return 0;
}