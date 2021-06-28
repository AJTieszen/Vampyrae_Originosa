// Please make sure SFML Libs (see https://www.sfml-dev.org/) are included in your compiler toolchain
// and SFML DLL files are in the release folder (for Windows).

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;

// Variables

// Functions

// Create Window
sf::RenderWindow window(sf::VideoMode(512, 448), "SFML Test");

// Graphics
sf::Texture tileset[4];

int main()
{
	// Load Graphics
	if (!tileset[0].loadFromFile("Tiles/Test Tileset.png"))
	{
		throw("Unable to load file: Tiles/Test Tileset.png");
	}

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

		// Code Here


	}
}