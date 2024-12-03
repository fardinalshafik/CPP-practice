// 2. Bob is building a game engine in C++. He wants to provide different versions of the
// loadTexture() function that can load textures from files, from memory, or from network
// streams. He uses function overloading to define different versions of the function that
// take different input sources.

#include <iostream>
using namespace std;

class Texture
{
    public:
    void loadTexture(const char* filename)
    {
        cout << "Loading texture from file: " << filename << endl;
    }
    void loadTexture(const char* data, int size)
    {
        cout << "Loading texture from memory: " << data << endl;
    }
    void loadTexture(istream& stream)
    {
        cout << "Loading texture from stream" << endl;
    }
    void loadTexture()
    {
        cout << "Loading texture" << endl;
    }


};

int main()
{
    Texture texture;
    texture.loadTexture();
    texture.loadTexture("data.txt");
    texture.loadTexture("data.txt", 100);
    texture.loadTexture(cin);
    return 0;
}