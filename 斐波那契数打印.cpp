//斐波那契数列打印
//BaronChang
#include"stdafx.h"
#include<iostream>
using namespace std;

int fIbonacci(int n){
	if (n==1||n==2)
	{
		return 1;
	}
	else{
		return fIbonacci(n - 2) + fIbonacci(n - 1);
	}
};
