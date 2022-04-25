# include <iostream>

class Image
{
	// 그림 파일

};

class Bug
{
	std::shared_ptr<Image> mspImage;

public :
	Bug(std::shared_ptr<Image> image) : mspImage{image}
	{

	}
};

int main()
{

}
