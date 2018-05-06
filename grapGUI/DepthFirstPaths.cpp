#include "DepthFirstPaths.h"

DepthFirstPaths::DepthFirstPaths(Graph g, int s) {
	marked = new bool[g.V()];
	edge_to = new int[g.V()];
	//��Ϊ�����õ���marked�����ݣ������û�г�ʼ����ʹ�������ֵ������δ֪��������������ֻ�б���ֵ�Ĳ�����û�����⡣
	for (int i = 0; i < g.V(); i++){
		marked[i] = false;
	}
	start_point = s;
	DFS(g, s);
}

DepthFirstPaths::~DepthFirstPaths() {
	delete[] marked;
	delete[] edge_to;
}

void DepthFirstPaths::DFS(Graph g, int v) {
	marked[v] = true;
	for (int s : g.Adj(v)){
		if (!marked[s]){
			edge_to[s] = v;
			DFS(g, s);
		}
	}
}

bool DepthFirstPaths::HasPathTo(int v) {
	return marked[v];
}

list<int> DepthFirstPaths::PathTo(int v) {
	if (!HasPathTo(v)){
		//����һ���յ��б�
		list<int> no_path;
		return no_path;
	}
	list<int> path;
	//ͷ�巨
	for (int x = v; x != start_point; x = edge_to[x]){
		path.push_front(x);
	}
	//���������
	path.push_front(start_point);
	return path;
}