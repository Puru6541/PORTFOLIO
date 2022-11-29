// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n,i;
// 	cin>>n;
// 	int a[n];
// 	for(i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int dp[n];
// 	dp[0]=a[0];
// 	dp[1]=max(a[0],a[1]);
// 	for(i=2;i<n;i++){
// 		dp[i]=max(a[i]+dp[i-2],dp[i-1]);
// 	}
// 	cout<<dp[n-1];
// 	return 0;
// }









// #include <bits/stdc++.h> 
// using namespace std; 

// struct val{ 
// 	char first; 
// 	int second; 
// }; 

// int minChef(int a, int b) 
// { 
// 	if(a<b) 
// 		return a; 
// 	else
// 		return b; 
// } 

// int main() 
// { 
// 	int n,i; 
// 	int countA = 0, countB = 0; 
// 	int minA = INT_MAX, minB = INT_MAX; 
// 	cin >> n; 
// 	val v[n]; 
// 	for(i=0;i<n;i++) 
// 	{ 
// 		cin >> v[i].first >> v[i].second; 
// 		if(v[i].first == 'A') 
// 		{ 
// 			countA++; 
// 			if(minA > v[i].second) 
// 			minA = v[i].second; 
// 		} 

// 		if(v[i].first == 'B') 
// 		{ 
// 			countB++; 
// 			if(minB > v[i].second) 
// 			minB = v[i].second; 
// 		} 

// 		if(v[i].first == 'C') 
// 		{ 
// 			countA++; 
// 			countB++; 
// 			minA = minChef(v[i].second, minA); 
// 			minB = minChef(v[i].second, minB); 
// 		} 
// 	} 
// 	if(countA == 0 || countB == 0) 
// 		cout << "-1"; 

// 	else
// 		cout << minChef(minA+minB, 2*minChef(minA, minB)); 
// 	return 0; 
// }

// #include<bits/stdc++.h>
// using namespace std;
// class val{
//     public:
//     char first;
//     int second;
// };
// int main(){
//     int n ;
//     cout<<"enter he value of n"<<endl;
//     cin>>n;
//     val v[n];
//     int mina = INT_MAX;
//     int minb = INT_MAX;
//     int minc = INT_MAX;
//     for(int i=0;i<n;i++){
//         cin>>v[i].first>>v[i].second;
//         if(v[i].first=='A'){
//             mina = min(v[i].second,mina);
//         }
//         else if (v[i].first=='B'){
//             minb = min(v[i].second,minb);
//         }
//         else if(v[i].first=='C'){
//             minc = min(v[i].second,minc);
//         }
//         else{
//             return -1;
//         }
//     }
//     int s = mina +minb;
//     if(s<minc){
//         cout<< s;
//     }
//     else{
//         cout<< minc;
//     }
//     return 0;
// }

/*
INHERTIANCE IN OOP
1. SINGLE LEVEL 
2. MULTI LEVEL 
3. MULTIPLE 
4. HYBIRD 
5. HIERARICHAL 
*/

#include<bits/stdc++.h>
using namespace std;
class first{
    public:
    int a=10;
    int b=20;
};
class second: public first{
    public:
    int c = a+b;
    int sum1(){
        return c;
    }
};
class third: public first{
    public:
    int sum(){
        return a+b;
    }
};
int main(){
    third hero;
    second hero1;
    cout<<hero.sum()<<endl;
    cout<<"heor 1 -> "<<hero1.sum1()<<endl;
    return 0;
}

