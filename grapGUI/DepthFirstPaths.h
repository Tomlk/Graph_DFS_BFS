#pragma once
#include "Graph.h"

//��¼����������������е�·������¼һ�ø����ӵ�·��
//��quick_union�㷨һ��
class DepthFirstPaths {
private:
	int* edge_to;//��¼��㵽һ�������·��������һ���ڵ�
	bool* marked;//��¼�ڵ��Ƿ��Ѿ�������
	int start_point;//���
public:
	DepthFirstPaths(Graph g, int s);
	~DepthFirstPaths();
	void DFS(Graph g, int v);
	bool HasPathTo(int v);
	list<int> PathTo(int v);
};
