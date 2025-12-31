#include<stdio.h>
int parent[50];
int rank[50];
void makeset(int x)
{
	parent[x]=x;
	rank[x]=0;
	
}
void findset(int x)
{
	if(x!=parent[x])
	{
	 	parent[x]=findset(parent[x]);
	 	return(parent[x]);
	}
	 
}

void link(intx,int y)
{
       if(x!=y)
      	{
      		if(rank[x]>rank[y])
		{
			parant[y]=x;
			
	
		}
		else
		{
			parent[x]=y;
		       if(rank[x]==rank[y])
		        {
		        	rank[y]=rank[y]+1;
		        }
		 }
	}
}	
	
		
void unionset(int x,int y)
{
	link(findset(x),findset(y));
}					
int main()
{
	makeset(0);
	makeset(1);
	makeset(2);
	makeset(3);
	makeset(4);
	makeset(5);
	makeset(6);
	
	union(0,1);
	union(1,2);
	union(3,4);
	union(5,6);
	union(4,5);
	union(2,6);
	
	
	for(int i=0;i<7;i++)
	printf("%d",parent[i]);
	
return 0;
}

