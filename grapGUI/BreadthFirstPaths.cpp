#include <queue>
#include "BreadthFirstPaths.h"

BreadthFirstPaths::BreadthFirstPaths(Graph g, int v) {
	start_point = v;
	//��ʼ����������
	marked = new bool[g.V()];
	for (int i = 0; i < g.V(); i++){
		marked[i] = false;
	}
	edge_to = new int[g.V()];
	BFS(g, start_point);
}

BreadthFirstPaths::~BreadthFirstPaths() {
	delete[] marked;
	delete[] edge_to;
}

bool BreadthFirstPaths::HasPathTo(int v) {
	return marked[v];
}

void BreadthFirstPaths::BFS(Graph g, int v) {
	//����һ�����н��и����洢��û�з��ʵĽڵ㡣
	//���ȴ���ʼ�Ľڵ�
	//������е�ʱ��֤���Ѿ��������ˣ����Ϊ�ѷ���,��ǵ�˳���ܷ���
	queue<int> point_queue;
	marked[v] = true;
	edge_to[v] = v;
	//�����forѭ�����Ժϲ�������һ����ӵ������оͿ��ԡ�
	for (int s : g.Adj(v)){
		if (!marked[s]){
			//������У������丸�ڵ�Ϊv
			edge_to[s] = v;
			marked[s] = true;
			point_queue.push(s);
		}
	}
	//���ţ�һֱ�Ӷ�����ȡ���ڵ㣬ֱ������Ϊ��
	while (!point_queue.empty()){
		int point = point_queue.front();
		point_queue.pop();
		for (int s : g.Adj(point)){
			if (!marked[s]){
				//������У������丸�ڵ�Ϊv
				edge_to[s] = point;
				marked[s] = true;
				point_queue.push(s);
			}
		}
	}

}

list<int> BreadthFirstPaths::PathTo(int v) {
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