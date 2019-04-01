
From : https://www.geeksforgeeks.org/find-the-number-in-a-range-having-maximum-product-of-the-digits/

It is also the problem of codeforces online judge .

Here is the link: http://codeforces.com/contest/1143/problem/B



#include <bits/stdc++.h> 
using namespace std;  
int product(int x) 
{ 
	int prod = 1; 
	while (x) { 
		prod *= (x % 10); 
		x /= 10; 
	} 
	return prod; 
}  
// Function for generate which number are big for produce a big multiple for its digit  from 1 to n 
int findNumber(int l, int r) 
{  
	string a = to_string(l); 
	string b = to_string(r);  
	int ans = r; 
	for (int i = 0; i < b.size(); i++) { 
		if (b[i] == '0') 
			continue;  
		string curr = b;
		// cout<<curr[i]<<endl;
		// cout<<(curr[i]-'0')-1<<endl;
		curr[i] = ((curr[i] - '0') - 1) + '0';  
		//cout<<"curr i value is :"<<curr[i]<<endl;
		for (int j = i + 1; j < curr.size(); j++) 
			curr[j] = '9';  
		int num = 0; 
		for (auto c : curr) 
			num = num * 10 + (c - '0');  
		if (num >= l && product(ans) < product(num)) 
			ans = num;
	} 

	return ans; 
}  
int main() 
{ 
	int r;
    cin>>r;
	//cout << findNumber(1, r) << endl;  that print the bigest number which is bigger to produce the largest product of its digit form 1 to n ;
	
    // int num = findNumber(1,r);
    // int res=1;
    // while(1){
    //     res = res*(num%10);
    //     num = num/10;
    //     // cout<<"REs is : "<<res<<endl;
    //     // cout<<"num is : "<<num<<endl;
    //     if(num == 0) break;
    // }
    // cout<<res<<endl;
	cout<<product(findNumber(1,r))<<endl;
	return 0; 
} 
