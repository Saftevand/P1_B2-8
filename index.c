// This program has been devoloped at Aalborg Universitet by:
// Alminde, Patrick Abildgaard --  palmin15@student.aau.dk
// Hansen, Mathias Lundhede    --  mlha15@student.aau.dk
// Jensen, Benjamin Rytter     --	 brje15@student.aau.dk
// Juul-Nyholm, Markus Hald    --  mjuuln15@student.aau.dk
// Kristiansen, Dan            --  dkris15@student.aau.dk
// Ortmann, Kasper Heinrich    --  kortma15@student.aau.dk
// Vive, Lasse Erritsø         --  lvive15@student.aau.dk


#include <stdio.h>
#include <stdlib.h>
#include "p1lib.h"


int main(void)
{
	int ClassInput, classLoop, ClassYear, AmountOfStudents, classLoop2, Teacherloop, TeacherInput;
	
	while(classLoop != 1)
	{
		printf("Indtast en klasse\n");
		scanf("%d", &ClassInput);
		classLoop = checkClassInput(ClassInput);
	}
	
	while(classLoop2 != 1)
	{
		printf("Indtast klassens årgang og antallet af elever i klassen");
		scanf("%d%d", &ClassYear, &AmountOfStudents);
		classLoop2 = checkYearSize(ClassYear, AmountOfStudents);
	}
	
	while(TeacherLoop != 1)
	{
		printf("Indtast en lærers navn\n");
		scanf("%", &TeacherInput);
		classLoop = checkClassInput(TeacherInput);
	}	
	
	
	printf("");
	scanf("");
	checkTeacherSubject();
	
	printf("");
	scanf("");
	checkClassrooms();
	
	printf("");
	scanf("");
	checkClassExistence();
	
}