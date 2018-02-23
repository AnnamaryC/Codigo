//Annamary W. Cartagena
#include <iostream>
#include <string>
using namespace std;

int main ()
{
int  num_day, num_month;
char answer;
string name;
do {
	
	cout << "This is a astrogoly program, meant to check your horoscope based on your birthday.\n";
	cout << "What is your name?\n";
	cin >> name;
	cout << "Please input your month in numbers (1-12), " << name << "." << endl; 
	cin >> num_month;
	cout << "Please input your day, " << name << "." << endl;
	cin >> num_day;
	
if ((( num_month == 1) && (num_day <= 19)) || ((num_month == 12) && (num_day >= 22)))
{ cout << "You are a Capricorn.\n";
	
	if ((num_month == 1) && ((num_day >=17) && (num_day <= 19)))
	{ cout << "You are also in a cusp. The closest sign to yours is Aquarious." << endl;
	}
	else if ((num_month == 12) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Sagittarious." << endl;
	}
}

else if (((num_month == 2) && (num_day <= 19)) || ((num_month == 1) && (num_day >= 18)))
{ cout << "You are an Aquarious.\n";


	if ((num_month == 2) && ((num_day >=16) && (num_day <= 19)))
	{ cout << "You are also in a cusp. The closest sign to yours is Pisces." << endl;
	}
	else if ((num_month == 1) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Capricorn." << endl;
	}
}

else if (((num_month == 3) && (num_day <= 20)) || ((num_month == 2) && (num_day >= 19)))
{ cout << "You are a Pisces.\n";


	if ((num_month == 2) && ((num_day >=19) && (num_day <= 21)))
	{ cout << "You are also in a cusp. The closest sign to yours is Aquarious." << endl;
	}
	else if ((num_month == 3) && ((num_day >= 18) && (num_day <= 20)))
	{ cout << "You are also in a cusp. The closest sign to yours is Aries." << endl;
	}
}

else if (((num_month == 4) && (num_day <= 19)) || ((num_month == 3) && (num_day >= 21)))
{ cout << "You are an Aries.\n";


	if ((num_month == 3) && ((num_day >=21) && (num_day <= 23)))
	{ cout << "You are also in a cusp. The closest sign to yours is Pisces." << endl;
	}
	else if ((num_month == 4) && ((num_day >= 17) && (num_day <= 19)))
	{ cout << "You are also in a cusp. The closest sign to yours is Taurus." << endl;
	}
}

else if (((num_month == 4) && (num_day <= 20)) || ((num_month == 5) && (num_day >= 20)))
{ cout << "You are a Taurus.\n";


	if ((num_month == 3) && ((num_day >=20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Aries." << endl;
	}
	else if ((num_month == 4) && ((num_day >= 18) && (num_day <= 20)))
	{ cout << "You are also in a cusp. The closest sign to yours is Gemini." << endl;
	}
}

else if (((num_month == 5) && (num_day <= 21)) || ((num_month == 6) && (num_day >= 21)))
{ cout << "You are a Gemini.\n";


	if ((num_month == 5) && ((num_day >=21) && (num_day <= 23)))
	{ cout << "You are also in a cusp. The closest sign to yours is Taurus." << endl;
	}
	else if ((num_month == 6) && ((num_day >= 20) && (num_day <= 21)))
	{ cout << "You are also in a cusp. The closest sign to yours is Cancer." << endl;
	}
}

else if (((num_month == 6) && (num_day <= 22)) || ((num_month == 7) && (num_day >= 22)))
{ cout << "You are a Cancer.\n";


	if ((num_month == 6) && ((num_day >=22) && (num_day <= 24)))
	{ cout << "You are also in a cusp. The closest sign to yours is Gemini." << endl;
	}
	else if ((num_month == 7) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Leo." << endl;
	}
}

else if (((num_month == 7) && (num_day <= 23)) || ((num_month == 8) && (num_day >= 22)))
{ cout << "You are a Leo.\n";


	if ((num_month == 7) && ((num_day >=23) && (num_day <= 25)))
	{ cout << "You are also in a cusp. The closest sign to yours is Cancer." << endl;
	}
	else if ((num_month == 8) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Virgo." << endl;
	}
}

else if (((num_month == 8) && (num_day <= 23)) || ((num_month == 9) && (num_day >= 22)))
{ cout << "You are a Virgo.\n";


	if ((num_month == 8) && ((num_day >=23) && (num_day <= 25)))
	{ cout << "You are also in a cusp. The closest sign to yours is leo." << endl;
	}
	else if ((num_month == 9) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Libra." << endl;
	}
}

else if (((num_month == 9) && (num_day <= 23)) || ((num_month == 10) && (num_day >= 22)))
{ cout << "You are a Libra.\n";


	if ((num_month == 9) && ((num_day >=23) && (num_day <= 25)))
	{ cout << "You are also in a cusp. The closest sign to yours is Virgo." << endl;
	}
	else if ((num_month == 10) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Scorpio." << endl;
	}
}

else if (((num_month == 10) && (num_day <= 23)) || ((num_month == 11) && (num_day >= 21)))
{ cout << "You are a Scorpio.\n";


	if ((num_month == 10) && ((num_day >=23) && (num_day <= 25)))
	{ cout << "You are also in a cusp. The closest sign to yours is Libra." << endl;
	}
	else if ((num_month == 11) && ((num_day >= 20) && (num_day <= 22)))
	{ cout << "You are also in a cusp. The closest sign to yours is Saggitarious." << endl;
	}
}

else if (((num_month == 11) && (num_day <= 22)) || ((num_month == 12) && (num_day >= 21)))
{ cout << "You are a Saggittarious.\n";


	if ((num_month == 11) && ((num_day >=22) && (num_day <= 24)))
	{ cout << "You are also in a cusp. The closest sign to yours is Libra." << endl;
	}
	else if ((num_month == 12) && ((num_day >= 19) && (num_day <= 21)))
	{ cout << "You are also in a cusp. The closest sign to yours is Saggitarious." << endl;
	}
}












cout << "Would you like to try again?" << endl;
cin >> answer;
} while (answer == 'y'|| answer == 'Y');


	return 0;
}
