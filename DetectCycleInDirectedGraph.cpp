#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int n, m, graph[50][50], top = -1, cyclesum = 100000000, stack[50], vis[50], ans[50], ansSize = -1;

void iscycle(int u)
{
	if (vis[u] && top != -1)
	{
		int i,sum = stack[top];

		for (i = top - 1; i >= 0 && stack[i] != u; i--)
		{
			sum += stack[i];
		}
		if (i != -1 && sum < cyclesum)
		{
			ansSize = -1;
			cyclesum = sum;
			ans[++ansSize] = stack[top];
			for (i = top - 1; i >= 0 && stack[i] != u; i--)
			{
				ans[++ansSize] = stack[i];
			}
		}
		return;
	}
	else
	{
		vis[u] = 1;
		for (int i = 1; i <= n; i++)
		{
			if (graph[u][i] == 1)
			{
				stack[++top] = i;
				iscycle(i);
				top--;
			}
		}
		vis[u] = 0;
	}
}

int main()
{
	cin >> n >> m;
	// memset(graph, 0, sizeof(graph));
	// memset(vis, 0, sizeof(vis));
    for(int i=0;i<50;i++)
    {
        vis[i]=0;
        for(int j=0;j<50;j++)
        {
            graph[i][j]=0;
        }
    }
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		graph[x][y] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			stack[++top] = i;
			cout << "Pushing: " << i << endl;
			iscycle(i);
			cout << "Popping: " << stack[top+1] << endl;
			top--;
		}
	}
	sort(ans, ans + ansSize + 1);
	for (int i = 0; i <= ansSize; i++) cout << ans[i] << ' ';
	cout << endl;
}