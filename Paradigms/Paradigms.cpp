﻿#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int data, Node* left, Node* right) :
		data(data), left(left), right(right) {}
};

void stub() { return; }

vector<int> readDataFromFile(const vector<int> const& inputVector) {
	vector<int> copiedVector(inputVector);

	int value; cin >> value ? [&]() {
		copiedVector.push_back(value);
		copiedVector = readDataFromFile(copiedVector); }() : stub();

		return copiedVector;
}

void printElement(const int element) {
	cout << element << " ";
}

int getMid(const int& const start, const int& const end) {
	return (start + end) / 2;
}

Node createBalancedTree(const int& rootValue, const Node& leftSubtree, const Node& rightSubtree) {
	Node* node = new Node(rootValue, nullptr, nullptr);
	return createBalancedTree() + createBalancedTree();
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vector<int> data = readDataFromFile(vector<int>());
	for_each(data.begin(), data.end(), printElement);
}