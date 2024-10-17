// Short code and faster
// Keeps upper hull for maximums. 
// add lines with -m and -b and return -ans to 
// make this code working for minimums. 
// source: http://codeforces.com/blog/entry/11155?#comment-162462 

// To understand this code, there is a commented code just below 

const ll is_query = -(1LL<<62);
struct Line {
    ll m, b;
    mutable function<const Line*()> succ;
    bool operator<(const Line& rhs) const {
        if (rhs.b != is_query) return m < rhs.m;
        const Line* s = succ();
        if (!s) return 0;
        ll x = rhs.m;
        return b - s->b < (s->m - m) * x;
    }
};
struct HullDynamic : public multiset<Line> { 
    bool bad(iterator y) {
        auto z = next(y);
        if (y == begin()) {
            if (z == end()) return 0;
            return y->m == z->m && y->b <= z->b;
        }
        auto x = prev(y);
        if (z == end()) return y->m == x->m && y->b <= x->b;
        return 1.0 * (x->b - y->b)*(z->m - y->m) >= 1.0 * (y->b - z->b)*(y->m - x->m);
    }
    void insert_line(ll m, ll b) {
        auto y = insert({ m, b });
        y->succ = [=] { return next(y) == end() ? 0 : &*next(y); };
        if (bad(y)) { erase(y); return; }
        while (next(y) != end() && bad(next(y))) erase(next(y));
        while (y != begin() && bad(prev(y))) erase(prev(y));
    }
    ll eval(ll x) {
        auto l = *lower_bound((Line) { x, is_query });
        return -1*(l.m * x + l.b);
    }
};

========================================================================================================================================

  ==========================================================================================================================================================================================


#include<bits/stdc++.h>
using namespace std;
#define ll long long

// If x is a query the y cordinate is passed as is_query to distinguish the query
long long is_query=-(1LL<<62);

struct Line{
	ll m,b;
	mutable function<const Line*()>succ; //  A lambda function to find the next successor of a line in convex hull
	bool operator <(const Line &rhs)const {
		if(rhs.b!=is_query){// if it is not a query just compare the slope
			return m<rhs.m;
		}
		// if it is a query find the successor of this line, see if the y intercept of this line for given x is lower than its successor 
		// if it is not then this can be the required line
		// when we use lower_bound in eval() function this thing is used as a binary/ternary search functionality
		const Line *s=succ();
		if(!s){return 0;}
		ll x=rhs.m;
		//comparing y intercepts
		return b-s->b< (s->m-m)*x;
	}
	
};

struct HullDynamic: public multiset<Line>// inheriting the multiset class
{
	bool bad(iterator y){//  check if this line is bad or (useless)
		auto z=next(y);
		if(y==begin()){
			if(z==end()){
				return 0;
			}
			else{
				return y->m==z->m && y->b<=z->b; // if just two lines, then this line is bad only if slopes of them are equal and this has lower y intercept
			}
		}
		auto x=prev(y);
		if(z==end()){
			return y->m==x->m && y->b<=x->b; // same
		}
		return (x->b-y->b)*(z->m-y->m)>=(y->b-z->b)*(y->m-x->m); // rule for checking bad line
	}

	void insert_line(ll m,ll b){
		auto y=insert({m,b});
		y->succ=[=]{return next(y)==end()?0:&*next(y);};// successor lambda functions
		if(bad(y)){
			erase(y);
			return;
		}
		while(next(y)!=end() && bad(next(y))){// keep removing lines until they are bad
			erase(next(y));
		}
		while(y!=begin() && bad(prev(y))){
			erase(prev(y));
		}
	}

	ll eval(ll x){
		auto l=*lower_bound((Line){x,is_query}); // get the line from convex hull with maximum y intercept for this x
		return l.m*x+l.b;// return the y intercept
	}

};
