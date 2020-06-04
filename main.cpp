#include <bits/stdc++.h>
#include "pqtype.h"

struct point{
    int x,y;
};

bool operator<(point a , point b){

    double aDis = sqrt((a.x*a.x)+(a.y*a.y));
    double bDis = sqrt((b.x*b.x)+(b.y*b.y));


    return aDis > bDis ;
}


int main() {



    int n;
    cin>>n;
    PQType<point> pointPQ(n);
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        point p;
        p.x = x;
        p.y = y;
        pointPQ.Enqueue(p);
    }

    while(!pointPQ.IsEmpty()){
        point p;
        pointPQ.Dequeue(p);
        cout<<p.x<<" "<<p.y<<endl;
    }

    return 0;

}
