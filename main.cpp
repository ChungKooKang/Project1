# include <iostream>

// ���� ��
class Song
{
	public :
		int mTrackNo;
		std::string mTitle;

		Song(int trackNo, std::string title) : mTrackNo{ trackNo }, mTitle{ title }
		{

		}
};


int main()
{
	std::unique_ptr<Song> spSong{ std::make_unique<Song>(1, "BattleBGM")};
}
