#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N; //numero de videos
    int V[1000];
    int i;
    int mais, menos;

    cin >> N;
    mais = 0;
    menos = 0;

    for(i=0;i<N;i++){
        cin >> V[i];
    }
    
    for(i=0;i<N;i++){
        if (V[i] > 10000000)
            mais ++;    
    }

    menos  = N - mais;

    cout << mais << " video(s) com mais de 10M views" << endl;
    cout << menos << " video(s) com menos de 10M views" << endl;
     return 0;
}
