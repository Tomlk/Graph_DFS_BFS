#pragma once
#include "Graph.h"

//�������������˼·���Ƚ��ȳ�������һ���������У�����һ�����еĽڵ�ʱ������û�з��ʵ��ڽӵ������С�
//ֱ�����нڵ㶼�����ʵ�������㿪ʼ��ÿ�ζ���������Ľڵ㡣
//�����еĽڵ��ʾ�Ѿ������ʵ��˵������ڽӵ㻹û�н��з����жϵĽڵ㡣
class BreadthFirstPaths {
private:
	int* edge_to;
	bool* marked;
	int start_point;//���
public:
	BreadthFirstPaths(Graph g, int v);
	~BreadthFirstPaths();
	void BFS(Graph g, int v);
	list<int> PathTo(int v);
	bool HasPathTo(int v);
};
