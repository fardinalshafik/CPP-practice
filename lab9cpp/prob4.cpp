// 4. Build a Post class that keeps track of the number of likes for a social media post. Overload
// the + operator to merge the likes of two posts into one.

#include <iostream>
#include <string>

using namespace std;

class Post
{
private:
    int likes;

public:
    Post(int l) : likes(l){}
    Post operator+(const Post& p){
        return Post(likes + p.likes);
    }
    void display(){
        cout << "The number of likes is " << likes << endl;
    }
};

int main (){
    Post p1(513);
    Post p2(313);

    Post p3 = p1+p2;
    p3.display();

    return 0;
}