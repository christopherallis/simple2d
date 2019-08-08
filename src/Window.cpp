
#include "Window.hpp"

Window::Window(GLuint width, GLuint height) : state(WINDOW_ACTIVE), width(width), height(height) {

}
bool Window::Init(void (*f)(int, const char*)) {
    glfwSetErrorCallback(f);
    if (!glfwInit()) return false;
    glfwWindowHint(GLFW_SAMPLES,4);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
    this->window = glfwCreateWindow(this->width, this->height, "Window", NULL, NULL);
    if (!this->window) {
        return false;
    }
    glfwMakeContextCurrent(this->window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        fprintf(stderr,"GLAD failed. Exiting...");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
}

void Window::Update(GLfloat dt) {

}
void Window::Render() {

}