#include <iostream>
#include<ctime>
#include<string>
#include<iomanip>
#define max(a,b) (((a)>(b))?(a):(b))

#define iterations 1000000
#define operations 20

using namespace std;

template<typename T>
long long int empty() {
	long long int time = clock();
	T a_0 = 2,
		a_1 = 2,
		a_2 = 4,
		a_3 = 5,
		a_4 = 6,
		a_5 = 7,
		a_6 = 8,
		a_7 = 9,
		a_8 = 10,
		a_9 = 11;

	for (int i = 0; i < iterations; i++) {
		T	a_0 = 10,
			a_1 = 11,
			a_2 = 12,
			a_3 = 13,
			a_4 = 14,
			a_5 = 15,
			a_6 = 16,
			a_7 = 17,
			a_8 = 18,
			a_9 = 19;
		T a_10 = 10,
			a_11 = 11,
			a_12 = 12,
			a_13 = 13,
			a_14 = 14,
			a_15 = 15,
			a_16 = 16,
			a_17 = 17,
			a_18 = 18,
			a_19 = 19;
		
	}
	return 	clock() - time;
}

template<typename T>
long long int plusOp() {
	long long int time = clock();
	T a_0 = 2,
		a_1 = 2,
		a_2 = 4,
		a_3 = 5,
		a_4 = 6,
		a_5 = 7,
		a_6 = 8,
		a_7 = 9,
		a_8 = 10,
		a_9 = 11;
	for (int i = 0; i < iterations;i++) {
		

		a_0 = i + a_1;
		a_1 = i + a_2;
		a_2 = a_1 + a_3;
		a_3 = a_2 + a_4;
		a_4 = a_3 + a_5;
		a_5 = a_4 + a_6;
		a_6 = a_5 + a_7;
		a_7 = a_6 + a_8;
		a_8 = a_7 + a_9;
		a_9 = a_8 + a_0;

		a_0 = a_9 + a_1;
		a_1 = a_0 + a_2;
		a_2 = a_1 + a_3;
		a_3 = a_2 + a_4;
		a_4 = a_3 + a_5;
		a_5 = a_4 + a_6;
		a_6 = a_5 + a_7;
		a_7 = a_6 + a_8;
		a_8 = a_7 + a_9;
		a_9 = a_8 + a_0;
	}
	return clock() - time;
}

template<typename T>
long long int minusOp() {
	long long int time = clock();
	T a_0 = 2,
		a_1 = 2,
		a_2 = 4,
		a_3 = 5,
		a_4 = 6,
		a_5 = 7,
		a_6 = 8,
		a_7 = 9,
		a_8 = 10,
		a_9 = 11;
	for (int i = 0;i < iterations;i++) {
		
		a_0 = i - a_1;
		a_1 = i - a_2;
		a_2 = a_1 - a_3;
		a_3 = a_2 - a_4;
		a_4 = a_3 - a_1;
		a_5 = a_2 - a_6;
		a_6 = a_5 - a_1;
		a_7 = a_1 - a_8;
		a_8 = a_7 - a_2;
		a_9 = a_2 - a_0;
		
		a_0 = a_9 - a_1;
		a_1 = a_0 - a_2;
		a_2 = a_1 - a_3;
		a_3 = a_2 - a_4;
		a_4 = a_3 - a_5;
		a_5 = a_4 - a_6;
		a_6 = a_5 - a_7;
		a_7 = a_6 - a_8;
		a_8 = a_7 - a_9;
		a_9 = a_8 - a_0;
		}
	return clock() - time;
}

template <typename T>
long long int multiplication() {
	long long int time = clock();
	T a_0 = 2,
		a_1 = 2,
		a_2 = 4,
		a_3 = 5,
		a_4 = 6,
		a_5 = 7,
		a_6 = 8,
		a_7 = 9,
		a_8 = 10,
		a_9 = 11;
	for (int i = 0; i < iterations; i++) {
		
		a_0 = i*a_1;
		a_1 = i*a_2;
		a_2 = a_1*a_3;
		a_3 = a_2*a_4;
		a_4 = a_3*a_5;
		a_5 = a_4*a_6;
		a_6 = a_5*a_7;
		a_7 = a_6*a_8;
		a_8 = a_7*a_9;
		a_9 = a_8*a_0;

		a_0 = a_9*a_1;
		a_1 = a_0*a_2;
		a_2 = a_1*a_3;
		a_3 = a_2*a_4;
		a_4 = a_3*a_5;
		a_5 = a_4*a_6;
		a_6 = a_5*a_7;
		a_7 = a_6*a_8;
		a_8 = a_7*a_9;
		a_9 = a_8*a_0;
		}
	return clock() - time;
}

template <typename T>
long long int division() {
	long long int time = clock();
	T a_1 = 11,
		a_2 = 222,
		a_3 = 3333,
		a_4 = 44444,
		a_5 = 555555,
		a_6 = 6666666,
		a_7 = 77777777,
		a_8 = 888888888,
		a_9 = 99999999999,
		a_0 = 1011111111111;

	for (int i = 1; i < iterations;i++) {
		
		a_0 = a_0 / a_1; 
		a_2 = a_9 / a_1; 
		a_3 = a_8 / a_1; 
		a_4 = a_7 / a_1; 
		a_5 = a_6 / a_1;
		a_6 = a_5 / a_1; 
		a_7 = a_4 / a_1; 
		a_8 = a_3 / a_1; 
		a_9 = a_2 / a_1; 
		a_0 = a_1 / a_1;

		a_0 = a_0 / a_1;
		a_2 = a_9 / a_1;
		a_3 = a_8 / a_1;
		a_4 = a_7 / a_1;
		a_5 = a_6 / a_1;
		a_6 = a_5 / a_1;
		a_7 = a_4 / a_1;
		a_8 = a_3 / a_1;
		a_9 = a_2 / a_1;
		a_0 = a_1 / a_1;
	}
	
	return clock() - time;
}

const int n = 2, m = 4;

template <typename T>
void quantity(double a[m][n]) {
	long long time1 = empty<T>();
	a[0][0] = (double)iterations*operations / ((double)(plusOp<T>() - time1) / CLOCKS_PER_SEC);
	a[1][0] = (double)iterations*operations / ((double)(minusOp<T>() - time1)/ CLOCKS_PER_SEC);
	a[2][0] = (double)iterations*operations / ((double)(multiplication<T>() - time1) / CLOCKS_PER_SEC);
	a[3][0] = (double)iterations*operations / ((double)(division<T>() - time1) / CLOCKS_PER_SEC);
}

double maxValue=-1;


double maxEl(double a[m][n]) {
	for (int i = 1; i < m; i++)
		maxValue = max(maxValue, a[i][0]);
		return maxValue;
}

void percentage(double a[m][n]) {
	for (int i = 0;i < m; i++) {
		a[i][1] = a[i][0] / maxValue * 100;
	}
}

void print(string s, double a[m][n]) {
	char ops[4] = { '+', '-', '*', '/' };
	for (int j = 0; j < 4; j++)
	{
		cout << ops[j] << " " << s << setprecision(0) << fixed << a[j][1] << "% ";
		if ((int)a[j][1] < 10) cout << "  ";
		else if ((int)a[j][1] < 100) cout << " ";
		cout << "X";
		for (int i = 0; i < 30; i++)
		{
			if (i < (int)a[j][1] / 4)
				cout << "X";
			else
				cout << " ";
		}
		cout << scientific << setprecision(3) << a[j][0];
		cout << endl;
	}
}


/*void print(double a[m][n]){
	char ops[N] = { '+','-','*','/' };
	for (int i = 0;i < N;i++) {
		cout << ops[i] <<"      ";
		cout<< setprecision(0) << fixed << a[i][1] << "% ";
		if ((int)a[i][1]<10) cout << "  ";
		else if ((int)a[i][1]<100) cout << " ";
		cout << "X";
		for (int i = 0; i<30; i++)
		{
			if (i<(int)a[i][1] / 4)
				cout << "X";
			else
				cout << " ";
		}
		cout << scientific << setprecision(3) << a[i][0]<< "\n";
	}
}
*/ 

int main() {
	double typeInt[m][n];
	
	quantity<int>(typeInt);
	
	double typeDouble[m][n]; 
		
	quantity<double>(typeDouble);
	
	double typeChar[m][n];
	
	quantity<char>(typeChar);
	
	double typeFloat[m][n];
	
	quantity <float>(typeFloat);

	double typeLong[m][n]; 
	
	quantity<long>(typeLong);
	
	maxValue = max(maxEl(typeDouble), maxEl(typeInt)); maxValue = max(maxValue, maxEl(typeChar));
	maxValue = max(maxValue, maxEl(typeFloat));	maxValue = max(maxValue, maxEl(typeLong));
	
	percentage(typeInt); percentage(typeDouble); percentage(typeChar); percentage(typeLong); percentage(typeFloat);
	cout << "Int\n";
	print("int    ", typeInt);
	cout << "Double\n";
	print("double    ", typeDouble);
	cout << "Char\n";
	print("char    ", typeChar);
	cout << "Long\n";
	print("long    ", typeLong);
	cout << "Float\n";
	print("float    ", typeFloat);

	system("pause");
	return 0;
	}