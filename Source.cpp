// Please make sure SFML Libs (see https://www.sfml-dev.org/) are included in your compiler toolchain
// and SFML DLL files are in release folder.

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

sf::RenderWindow window(sf::VideoMode(512, 448), "SFML Test");

int main()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
}