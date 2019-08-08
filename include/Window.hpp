#ifndef WINDOW_H
#define WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

enum WindowState {
    WINDOW_ACTIVE,
    WINDOW_EXITTING
}

class Window {
private:
    GLFWwindow* window;

public:
    WindowState state;
    Widget parent;
    GLuint width, height;

    Window(width,height);
    ~Window();

    bool Init(void (*f)(int, const char*));

    void Update(GLfloat dt);
    void Render();

};

#endif