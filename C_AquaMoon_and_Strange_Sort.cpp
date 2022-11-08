#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m);
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p);
#define pf1(n)     printf("%lld\n",n);
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define fi         first
#define se         second
#define coy        cout<< "YES"<<endl;
#define con        cout<< "NO"<<endl;
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
// ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;
struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
     
    
    int size;
};
 

int max(int a, int b);
 

int height(struct node *N)
{
    if (N == NULL)
        return 0;
         
    return N->height;
}
 

int size(struct node *N)
{
    if (N == NULL)
        return 0;
         
    return N->size;
}
 

int max(int a, int b)
{
    return (a > b)? a : b;
}
 
struct node* newNode(int key)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
     
    node->height = 1; 
    node->size = 1;
    return(node);
}
 

struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;
 
    y->size = size(y->left) + size(y->right) + 1;
    x->size = size(x->left) + size(x->right) + 1;
 
    return x;
}
 
struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;
 
    y->left = x;
    x->right = T2;
 
    x->height = max(height(x->left),
                    height(x->right)) + 1;
    y->height = max(height(y->left),
                    height(y->right)) + 1;
 
    x->size = size(x->left) + size(x->right) + 1;
    y->size = size(y->left) + size(y->right) + 1;
 
    return y;
}
 
int getBalance(struct node *N)
{
    if (N == NULL)
        return 0;
         
    return height(N->left) - height(N->right);
}
 
struct node* insert(struct node* node, int key,
                    int *count)
{
    if (node == NULL)
        return(newNode(key));
 
    if (key < node->key)
        node->left  = insert(node->left, key, count);
    else
    {
        node->right = insert(node->right, key, count);
 
        *count = *count + size(node->left) + 1;
    }
 
 
    node->height = max(height(node->left),
                       height(node->right)) + 1;
    node->size   = size(node->left) +
                   size(node->right) + 1;
 
    int balance = getBalance(node);

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
 
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
 
    if (balance > 1 && key > node->left->key)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
 
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
 
    return node;
}
 
void constructLowerArray(int arr[], int countSmaller[],
                         int n)
{
    int i, j;
    struct node *root = NULL;
     
    for(i = 0; i < n; i++)
        countSmaller[i] = 0;
     
    for(i = n - 1; i >= 0; i--)
    {
        root = insert(root, arr[i], &countSmaller[i]);
    }
}
 

void printArray(int arr[], int size)
{
    int i;
    cout << "\n";
     
    for(i = 0; i < size; i++)
        cout << arr[i] <<" ";
}
 
int main()
{
    int t;
    ci>>t;
    while(t--)
    {
        int nn;
        cin>>nn;
        int arr[nn];
        f(i,0,nn) ci>>arr[i];
        int n = sizeof(arr)/sizeof(arr[0]);
        
        int *low = (int *)malloc(sizeof(int)*n);
        
        constructLowerArray(arr, low, n);
        
        cout <<"Following is the constructed smaller count array";
        printArray(low, n);
    }
    return 0;
}