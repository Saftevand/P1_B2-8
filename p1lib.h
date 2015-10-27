int checkClassInput(int classChecker)
{
	if (classChecker)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int checkYearAndSize(int ClassYear, int AmountOfStudents)
{
	if((ClassYear > 1900) && (AmountOfStudents >= 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int addTeacher(? TeacherInput)
{
	char NewTeacher;
	while(NewTeacher != n)
	{
		printf("Tilføj en ny lære? (y/n)");
		scanf("%c", &NewTeacher);
	}
}

int checkTeacherSubject()
{
	
}

int checkClassrooms()
{
	
}

int checkClassExistence()
{
	
}