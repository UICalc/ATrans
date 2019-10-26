#include<bits/stdc++.h>

using namespace std;

	char a, b[10000];
	string text, str[10000][5] = {""}, sp = "  ", A[5] = {" AAA ", "A   A", "AAAAA", "A   A", "A   A"}, B[5] = {"BBBB ", "B   B", "BBBB ", "B   B", "BBBBB"}, C[5] = {" CCC ", "C   C", "C    ", "C   C", " CCC "}, D[5] = {"DDDD ", "D   D", "D   D", "D   D", "DDDD "}, E[5] = {"EEEEE", "E    ", "EEEEE", "E    ", "EEEEE"}, F[5] = {"FFFFF", "F    ", "FFFFF", "F    ", "F    "}, G[5] = {" GGGG", "G    ", "G  GG", "G   G", " GGG "}, H[5] = {"H   H", "H   H", "HHHHH", "H   H", "H   H"}, I[5] = {"IIIII", "  I  ", "  I  ", "  I  ", "IIIII"}, J[5] = {" JJJ ", "  J  ", "  J  ", "  J  ", " JJ  "}, K[5] = {"K   K", "K  K ", "KKK  ", "K  K ", "K   K"}, L[5] = {"L    ", "L    ", "L    ", "L    ", "LLLLL"}, M[5] = {"M   M", "MM MM", "M M M", "M M M", "M   M"}, N[5] = {"N   N", "NN  N", "N N N", "N  NN", "N   N"}, O[5] = {" OOO ", "O   O", "O   O", "O   O", " OOO "}, P[5] = {"PPPP ", "P   P", "PPPP ", "P    ", "P    "}, Q[5] = {" QQQ ", "Q   Q", "Q   Q", "Q   Q", " QQQQ"}, R[5] = {"RRRR ", "R   R", "RRRR ", "R  R ", "R   R"}, S[5] = {" SSSS", "S    ", "SSSSS", "    S", "SSSS "}, T[5] = {"TTTTT", "  T  ", "  T  ", "  T  ", "  T  "}, U[5] = {"U   U", "U   U", "U   U", "U   U", " UUU "}, V[5] = {"V   V", "V   V", "V   V", " V V ", "  V  "}, W[5] = {"W   W", "W   W", "W W W", "W W W", " W W "}, X[5] = {"X   X", " X X ", "  X  ", " X X ", "X   X"}, Y[5] = {"Y   Y", " Y Y ", "  Y  ", "  Y  ", "  Y  "}, Z[5] = {"ZZZZZ", "   Z ", "  Z  ", " Z   ", "ZZZZZ"}, SP[5] = {"    ", "    ", "    ", "    ", "    "}, ERR[5] = {"ERROR", ":::::", "INPUT", "ERROR", "!!!!!"}, TAN[5] = {"!", "!", "!", " ", "@"}, LK[5] = {" (", "( ", "( ", "( ", " ("}, RK[5] = {") ", " )", " )", " )", ") "}, JIN[5] = {" # # ", "#####", " # # ", "#####", " # # "}, ZXG[5] = {"    /", "   / ", "  /  ", " /   ", "/    "}, YXG[5] = {"\\    ", " \\   ", "  \\  ", "   \\ ", "    \\"}, JIAN[5] = {"     ", "     ", "-----", "     ", "     "}, ZERO[5] = {"0000", "0  0", "0  0", "0  0", "0000"}, ONE[5] = {"   1", "   1", "   1", "   1", "   1"}, TWO[5] = {"2222", "   2", "2222", "2   ", "2222"}, THREE[5] = {"3333", "   3", "3333", "   3", "3333"}, FOUR[5] = {"4  4", "4  4", "4444", "   4", "   4"}, FIVE[5] = {"5555", "5   ", "5555", "   5","5555"}, SIX[5] = {"6666", "6   ", "6666", "6  6", "6666"}, SEVEN[5] = {"7777", "   7", "   7", "   7", "   7"}, EIGHT[5] = {"8888", "8  8", "8888", "8  8", "8888"}, NINE[5] = {"9999", "9  9", "9999", "   9", "9999"}, POI[5] = {" ", " ", " ", " ", "@"}, DYH[5] = {"#", "#", " ", " ", " "}, SYH[5] = {"# #", "# #", "  ", "  ", "  "};
	int t, c[10000][10000], l = 1, count;

void info()
{
	cout << "UICALCULUS DESIGN" << endl; 
	cout << endl << " Edition:B1-1" << endl;
	cout << endl << "Your font should be Consolas." ; 
	cout<< "Enter the text you want to trans,then enter*" << endl << "--------" << endl; 
}

void input()
{
	for (int t = 1; t < 9000; t++) //shuru
	{
		scanf("%c", &b[t]);
		c[l][t] = b[t];
		 if (b[t] == '*')
		{
			break;
		}
		if (( c[l][t] >= 97) && (c[l][t] <= 122))
		{
			c[l][t] -= 32;
		}
		if (c[l][t] == 10)
		{
			l++;
		}
	}
}

void trans()
{
	for (int m = 1; m <= l; m++)
	{
		for (int t = 1; t < 9000; t++)
		{
			if (c[m][t] == 42)
			{
				break;
			}
			for(int i = 0; i < 5; i ++)
			{
			switch (c[m][t])
				{
					case 32:
					{
						str[m][i] = str[m][i] + SP[i] + sp;
						break;
					}
					case 45:
					{
						str[m][i] = str[m][i] + JIAN[i] + sp;
						break;
					}
					case 35:
					{
						str[m][i] = str[m][i] + JIN[i] + sp;
						break;
					}
					case 47:
					{
						str[m][i] = str[m][i] + ZXG[i] + sp;
						break;
					}
					case 92:
					{
						str[m][i] = str[m][i] + YXG[i] + sp;
						break;
					}
					case 33:
					{
						str[m][i] = str[m][i] + TAN[i] + sp;
						break;
					}
					case 34:
					{
						str[m][i] = str[m][i] + SYH[i] + sp;
						break;
					}
					case 39:
					{
						str[m][i] = str[m][i] + DYH[i] + sp;
						break;
					}
					case 40:
					{
						str[m][i] = str[m][i] + LK[i] + sp;
						break;
					}
					case 41:
					{
						str[m][i] = str[m][i] + RK[i] + sp;
						break;
					}
					case 65:
					{
						str[m][i] = str[m][i] + A[i] + sp;
						break;
					}
					case 66:
					{
						str[m][i] = str[m][i] + B[i] + sp;
						break;
					}
					case 67:
					{
						str[m][i] = str[m][i] + C[i] + sp;
						break;
					}
					case 68:
					{
						str[m][i] = str[m][i] + D[i] + sp;
						break;
					}
					case 69:
					{
						str[m][i] = str[m][i] + E[i] + sp;
						break;
					}
					case 70:
					{
						str[m][i] = str[m][i] + F[i] + sp;
						break;
					}
					case 71:
					{
						str[m][i] = str[m][i] + G[i] + sp;
						break;
					}
					case 72:
					{
						str[m][i] = str[m][i] + H[i] + sp;
						break;
					}
				case 73:
					{
						str[m][i] = str[m][i] + I[i] + sp;
						break;
					}
					case 74:
					{
						str[m][i] = str[m][i] + J[i] + sp;
						break;
					}
					case 75:
					{
						str[m][i] = str[m][i] + K[i] + sp;
						break;
					}
					case 76:
					{
						str[m][i] = str[m][i] + L[i] + sp;
						break;
					}
					case 77:
					{
						str[m][i] = str[m][i] + M[i] + sp;
						break;
					}
					case 78:
					{
						str[m][i] = str[m][i] + N[i] + sp;
						break;
					}
					case 79:
					{
						str[m][i] = str[m][i] + O[i] + sp;
						break;
					}
					case 80:
					{
						str[m][i] = str[m][i] + P[i] + sp;
						break;
					}
					case 81:
					{
						str[m][i] = str[m][i] + Q[i] + sp;
						break;
					}
					case 82:
					{
						str[m][i] = str[m][i] + R[i] + sp;
						break;
					}
					case 83:
					{
						str[m][i] = str[m][i] + S[i] + sp;
						break;
					}
					case 84:
					{
						str[m][i] = str[m][i] + T[i] + sp;
						break;
					}
					case 85:
					{
						str[m][i] = str[m][i] + U[i] + sp;
						break;
					}
					case 86:
					{
						str[m][i] = str[m][i] + V[i] + sp;
						break;
					}
					case 87:
					{
						str[m][i] = str[m][i] + W[i] + sp;
						break;
					}
					case 88:
					{
						str[m][i] = str[m][i] + X[i] + sp;
						break;
					}
					case 89:
					{
						str[m][i] = str[m][i] + Y[i] + sp;
						break;
					}
					case 90:
					{
						str[m][i] = str[m][i] + Z[i] + sp;
						break;
					}
						case 48:
					{
						str[m][i] = str[m][i] + ZERO[i] + sp;
						break;
					}
					case 49:
					{
						str[m][i] = str[m][i] + ONE[i] + sp;
						break;
					}
					case 50:
					{
					str[m][i] = str[m][i] + TWO[i] + sp;
							break;
					}
					case 51:
					{
						str[m][i] = str[m][i] + THREE[i] + sp;
						break;
					}
					case 52:
						{
						str[m][i] = str[m][i] + FOUR[i] + sp;
						break;
					}
					case 53:
					{
						str[m][i] = str[m][i] + FIVE[i] + sp;
						break;
					}
					case 54:
					{
						str[m][i] = str[m][i] + SIX[i] + sp;
						break;
					}
					case 55:
					{
						str[m][i] = str[m][i] + SEVEN[i] + sp;
						break;
					}
					case 56:
					{
						str[m][i] = str[m][i] + EIGHT[i] + sp;
						break;
					}
					case 57:
					{
						str[m][i] = str[m][i] + NINE[i] + sp;
						break;
					}
					case 46:
					{
						str[m][i] = str[m][i] + POI[i] + sp;
						break;
					}
					case 10:
					{
						m++;
					}
				}
			}
		}
	}
}

void output()
{
	cout << endl; 
	ofstream write;
	write.open("ATrans.txt", ios::app);
	for (int m = 1; m <= l; m++)
	{
		for (int t = 0; t <= 4; t ++)
		{
			cout << str[m][t] << endl;
			write << str[m][t] << endl;
		}
		cout << endl;
		write << endl;
	}
	write.close();
}

void end()
{
	cout << endl << "--------" << endl << "Developer: UICALCULUS(2650031369), V.A1-0 tech support:591442386" <<endl; 
	system("pause");
}

int main()
{	
	info ();
	input ();
	trans ();
	output ();
	end ();
	return 0;
}
