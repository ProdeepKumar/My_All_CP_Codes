// C++ program to find the minimum
// side of the square in which
// a regular polygon with even sides
// can completely embed

#include <bits/stdc++.h>
using namespace std;

// PI value in C++ using
// acos function
const double pi = acos(-1.0);

// Function to find the minimum
// side of the square in which
// a regular polygon with even sides
// can completely embed
double nGon(int N)
{

	// Projection angle variation
	// from axes
	double proAngleVar;

	// Projection angle variation
	// when the number of
	// sides are in multiple of 4
	if (N % 4 == 0) {
		proAngleVar
			= pi * (180.0 / N)
			/ 180;
	}
	else {
		proAngleVar
			= pi * (180.0 / (2 * N))
			/ 180;
	}

	// Distance between the end points
	double negX = 1.0e+99,
		posX = -1.0e+99,
		negY = 1.0e+99,
		posY = -1.0e+99;

	for (int j = 0; j < N; ++j) {

		// Projection from all N points
		// on X-axis
		double px = cos(2 * pi * j / N
						+ proAngleVar);

		// Projection from all N points
		// on Y-axis
		double py = sin(2 * pi * j / N
						+ proAngleVar);

		negX = min(negX, px);
		posX = max(posX, px);
		negY = min(negY, py);
		posY = max(posY, py);
	}

	// Maximum side
	double opt2 = max(posX - negX,
					posY - negY);

	// Return the portion of side
	// forming the square
	return (double)opt2
		/ sin(pi / N) / 2;
}

// Driver code
int main()
{
        int t;
        cin>>t;
        cout << setprecision(10) << fixed;
        while(t--){
                int N ;
                cin>>N;
                N*=2;
                cout << nGon(N)<<endl;;
        }
	return 0;
}
