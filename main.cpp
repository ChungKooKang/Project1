# include <iostream>

class Image
{
	// �׸� ����

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
