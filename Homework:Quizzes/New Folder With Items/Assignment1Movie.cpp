Movie::Movie(string title, int year, double rating)
{
	theTitle = title;
	theYear = year;
	theRating = rating;
}

string Movie::getTitle()
{
	return theTitle;
}

void Movie::setTitle(string title)
{
	theTitle = title;	
}

Movie::Movie()
{
	theTitle = "unknown";
	theYear = 2016;
	theRating = 0.0;
}		