#include "app.hpp"


int main()
{

App app;


if(app.init())
{
    app.loop();
}


app.shutdown();


return 0;

}
