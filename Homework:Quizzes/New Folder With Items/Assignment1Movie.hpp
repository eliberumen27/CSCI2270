class Movie
{
	//methods
	public:
		Movie();
		Movie(std::string title, int year, double rating);
		string getTitle();
		void setTitle(std::string title);
	
	//instance variables
	private:
		std::string theTitle;
		int theYear;
		double theRating;
};