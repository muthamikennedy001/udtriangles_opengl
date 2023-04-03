#include <GL/glut.h>

// Define vertices for triangle 1 and 2
GLfloat vertices1[] = {
    -0.5f, -0.5f, // Bottom-left vertex
    0.5f, -0.5f,  // Bottom-right vertex
    0.0f, 0.5f    // Top vertex
};

GLfloat vertices2[] = {
    -0.5f, 0.0f,   // Bottom-left vertex
    0.5f, 0.0f,    // Bottom-right vertex
    0.0f, -0.9f    // Top vertex
};

// Define function to draw the scene
void drawScene()
{
    // Clear the color buffer
    glClear(GL_COLOR_BUFFER_BIT);

    // Set the color to black
    glColor3f(0.0f, 0.0f, 0.0f);

    // Set the line width to 2.0
    glLineWidth(2.0f);

    // Enable vertex arrays and specify the pointer to the vertices for triangle 1
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(2, GL_FLOAT, 0, vertices1);

    // Draw triangle 1 using GL_LINE_LOOP
    glDrawArrays(GL_LINE_LOOP, 0, 3);

    // Disable the vertex arrays
    glDisableClientState(GL_VERTEX_ARRAY);

    // Enable vertex arrays and specify the pointer to the vertices for triangle 2
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(2, GL_FLOAT, 0, vertices2);

    // Draw triangle 2 using GL_LINE_LOOP
    glDrawArrays(GL_LINE_LOOP, 0, 3);

    // Disable the vertex arrays
    glDisableClientState(GL_VERTEX_ARRAY);

    // Flush the drawing commands
    glFlush();
}

// Main function
int main(int argc, char **argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);

    // Set the display mode to single-buffered and RGB color mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Set the window size to 500x500 pixels
    glutInitWindowSize(500, 500);

    // Create a window with the title "Two Triangles"
    glutCreateWindow("Two Triangles");

    // Set the background color to white
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

    // Set the function to draw the scene
    glutDisplayFunc(drawScene);

    // Enter the main loop
    glutMainLoop();

    // Return 0 to indicate successful execution
    return 0;
}
