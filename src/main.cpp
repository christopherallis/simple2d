#include "Window.hpp"

static void error_callback(int error, const char* description) {
    fprintf(stderr, "Error: %s\n", description);
}

int main() {

    Window window(200,200);

    window.Init(error_callback);



    while (window.state != WindowState.WINDOW_EXITTING) {

        window.Update();
        window.Render();

    }

    return 0;
}