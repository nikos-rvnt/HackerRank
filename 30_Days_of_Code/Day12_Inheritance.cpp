class Student : public Person {
private:
	vector<int> testScores;
public:
	/*
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	*/
	Student(string firstname, string lastname, int id, vector<int> tS) : Person(firstname, lastname, id) {

		/*for(int i=0; i< tS.size(); i++)
		{
		testScores[i] = tS[i] ;
		}*/
		for ( int i = 0; i < tS.size(); i++) {
			int tmpScore;
			tmpScore = tS[i];
			testScores.push_back(tmpScore);
		}
		//this->testScores = tS ;
	}

	/*
	*   Function Name: calculate
	*   Return: A character denoting the grade.
	*/
	char calculate() {

		float ave = 0.0;
		int suma = 0;
		for ( int i = 0; i<(testScores.size()); i++) {
			suma = suma + testScores[i];
		}
		ave = suma / testScores.size() ;

		if ((90 <= ave) && (ave <= 100))
		{
			return  'O';
		}
		else if ((80 <= ave ) && (ave <90))
		{
			return  'E';
		}
		else if ((70 <= ave) && (ave < 80))
		{
			return  'A';
		}
		else if ((55 <= ave) && (ave <70))
		{
			return  'P';
		}
		else if ((40 <= ave) && (ave < 55))
		{
			return  'D';
		}
		else if (40 > ave)
		{
			return  'T';
		}
		return 'L';
	}
};
