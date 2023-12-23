#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m)
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p)
#define pf1(n)     printf("%lld\n",n)
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define p_b        pop_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define kase       "Case "<<ka<<": "
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
#define INF        0x3f3f3f3f
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl

//Policy Based Data Structure(Randomly access into set in log(n) time)
// template <typename T>using orderedSet = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>Set;
// order_of_key(k) - number of element strictly less than k
// find_by_order(k) - k'th element in set.(0 indexed)(iterator)
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;


class node{
    public:
        char data;
        node *left, *right;

        node(char data)
        {
            this->data=data;
            this->left=this->right=nullptr;
        }

        node(char data,node *left,node *right)
        {
            this->data=data;
            this->left=left;
            this->right=right;
        }
};

bool isOperator(char ch)
{
    if(ch=='+' or ch=='-' or ch=='*' or ch=='/' or ch=='^') return true;
    else return false;
}
node* build_from_prefix(string str)
{
    if(str.size()==0) return nullptr;
    stack<node*>s;
    reverse(str.begin(),str.end());
    for(char c:str)
    {
        if(isOperator(c))
        {
            node* x=s.top();
            s.pop();
            node* y=s.top();
            s.pop();

            node* nod=new node(c,x,y);
            s.push(nod);
        }
        else
        {
            s.push(new node(c));
        }
    }
    return s.top();
}
node* build_from_postfix(string str)
{
    if(str.size()==0) return nullptr;
    stack<node*>s;
    for(char c:str)
    {
        if(isOperator(c))
        {
            node* x=s.top();
            s.pop();
            node* y=s.top();
            s.pop();

            node* nod=new node(c,y,x);
            s.push(nod);
        }
        else
        {
            s.push(new node(c));
        }
    }
    return s.top();
}

void traverse_preorder(node *root)
{
    if(root==nullptr) return;
    cout<< root->data;
    traverse_preorder(root->left);
    traverse_preorder(root->right);
}
void traverse_inorder(node *root)
{
    if(root==nullptr) return;
    if(isOperator(root->data)) cout<<'(';
    traverse_inorder(root->left);
    cout<< root->data;
    traverse_inorder(root->right);
    if(isOperator(root->data)) cout<<')';
}
void traverse_postorder(node *root)
{
    if(root==nullptr) return;
    traverse_postorder(root->left);
    traverse_postorder(root->right);
    cout<< root->data;
}
void solve()
{
    string post_order="32+45*3*-";
    string pre_order="-+32**453";
    // node *root=build_from_postfix(post_order);
    node *root=build_from_prefix(pre_order);
    cout<<"Pre order traversal output: "<<endl;
    traverse_preorder(root);
    en
    cout<<"In order traversal output: "<<endl;
    traverse_inorder(root);
    en
    cout<<"Post order traversal output: "<<endl;
    traverse_postorder(root);
    en
    
    // evaluate(root);
}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
//#endif
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        t=1;
        // ci>>t;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}