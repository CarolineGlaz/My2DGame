#include "defines.hpp"

int main() {

    const std::string name = "Game";
    const int width = 1280;
    const int height = 720;

    try {
        GAME::Application app(name, width, height);
        app.run();
        
    } catch ( const std::exception & e ) {
		std::cerr << "Exception : " << std::endl << e.what() << std::endl;
		return EXIT_FAILURE;
	}
}
