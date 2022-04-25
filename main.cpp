# include <iostream>

// À½¾Ç ¾Û
class Song
{
	public :
		int mTrackNo;
		std::string mTitle;

		Song(int trackNo, std::string title) : mTrackNo{ trackNo }, mTitle{ title }
		{

		}
};

void DoSomething(Song* p)
{

}

int main()
{
	std::unique_ptr<Song> spSong{ std::make_unique<Song>(1, "BattleBGM")};

	std::cout << spSong->mTrackNo << " : " << spSong->mTitle << std::endl;

	DoSomething(spSong.get());
	
}
