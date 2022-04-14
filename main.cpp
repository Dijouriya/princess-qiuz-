#include<iostream>
using namespace std;

int main() {
	int pinkkirby = 0;
	int redkirby = 0;
	int yellowkirby = 0;
	int bluekirby = 0;
	int greenkirby = 0;
	int greykirby = 0;
	int orangekirby = 0;
	int blackkirby = 0;
	char input;

	cout << "which color do you like the most? (p)ink, (r)ed, (y)ellow, (b)lue, (g)reen, g(r)ey, (o)range, b(l)ack" << endl; 
	cin >> input;
	if (input == 'p')
		pinkkirby++;
	else if (input == 'r')
		redkirby++;
	else if (input == 'y')
		yellowkirby++;
	else if (input == 'b')
		bluekirby++;
	else if (input == 'g')
		greenkirby++;
	else if (input == 'r')
		greykirby++;
	else if (input == 'o')
		orangekirby++;
	else if (input == 'l')
		blackkirby++;

	cout << "what's your favorite food? (n)oddles, (p)izza, (i)ce cream, (t)acos, (s)ushi, (b)acon, s(n)adwich, (f)ish" << endl;
	cin >> input;
	if (input == 'n')
		pinkkirby += 2;
	else if (input == 'p')
		redkirby += 2;
	else if (input == 'i')
		yellowkirby += 2;
	else if (input == 't')
		greenkirby += 2;
	else if (input == 's')
		blackkirby += 2;
	else if (input == 'b')
		greykirby += 2;
	else if (input == 'n')
		orangekirby += 2;
	else if (input == 'f')
		bluekirby += 2;

	cout << "what is your go to weapon? (s)word, (c)annon, (b)ow and arrow, (d)agger, (t)omahawk, (g)renade, (r)ifle, (h)andgun" << endl;
	cin >> input;
	if (input == 's')
		blackkirby += 3;
	else if (input == 'c')
		bluekirby += 3;
	else if (input == 'b')
		yellowkirby += 3;
	else if (input == 'd')
		orangekirby += 3;
	else if (input == 't')
		pinkkirby += 3;
	else if (input == 'g')
		greykirby += 3;
	else if (input == 'r')
		redkirby += 3;
	else if (input == 'h')
		greenkirby += 3;

	cout << "what t.v. genre do you preffer? (d)rama, (h)orror, (a)ction, (t)hriller, (f)antasy, (c)omedy, a(n)ime, (m)ystery" << endl; 
	cin >> input;
	if (input == 'd')
		yellowkirby += 4;
	else if (input == 'h')
		bluekirby += 4;
	else if (input == 'a')
		yellowkirby += 4;
	else if (input == 't')
		orangekirby += 4;
	else if (input == 'f')
		pinkkirby += 4;
	else if (input == 'c')
		greykirby += 4;
	else if (input == 'n')
		redkirby += 4;
	else if (input == 'm')
		greenkirby += 4;

	if (pinkkirby >= redkirby && pinkkirby > yellowkirby && pinkkirby > bluekirby && pinkkirby > greenkirby && pinkkirby > greykirby && pinkkirby > orangekirby && pinkkirby > blackkirby)
    cout << "You're pink kirby! which means you are cheerful and innocent and food-loving. The original kirby! Awesome!" << endl;
  else if (redkirby >= yellowkirby && redkirby > bluekirby && redkirby > greenkirby && redkirby > greykirby && redkirby > orangekirby && redkirby > blackkirby)
    cout << "You are red kirby! which means you are loving, energetic, and attractive. Fire!" << endl;
  else if (yellowkirby > bluekirby && yellowkirby > greenkirby && yellowkirby > greykirby && yellowkirby > orangekirby && yellowkirby > blackkirby)
    cout << "You are yellow kirby! You are the same as pink kirby. That means you are cheerful, innocent, and food-loving. Cool!" << endl;
  else if (bluekirby >= greenkirby && bluekirby > greykirby && bluekirby > orangekirby && bluekirby > blackkirby)
    cout << "You are blue kirby! Which means you are trustworthy, loyal, and wise. Nice!" << endl;
  else if (greenkirby >= greykirby && greenkirby > orangekirby && greenkirby > blackkirby)
    cout << "You are green kirby! Which means you are logical, a perfectionist, and inventive. Wow!" << endl;
  else if (greykirby >= orangekirby && greykirby > blackkirby)
    cout << "You are grey kirby! Which means you are emotionless, indecisive, and boring. Yikes!" << endl; 
  else if (orangekirby >= blackkirby)
    cout << "You are orange kirby! Which means you are bold, witty, and spontaneous. Fun!" << endl; 
  else
    cout << "You are black kirby! Which means you are mysterious, powerfull, and elegant. Cool!" << endl; 

  system("pause");
}
