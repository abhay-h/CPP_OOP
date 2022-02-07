#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main() {
	int n = 10;

	int* ptr = (int*)malloc(n * sizeof(int));
	for (size_t i = 0; i < n; i++)
	{
		cin >> ptr[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		cout <<"Elements : " << ptr[i]<<endl;
	}
	return 0;
}