#ifdef WIN32
#include <windows.h>
#endif
#ifdef __APPLE__
#include <GLUT/GLUT.h>
#else
#include <GL/glut.h>
#endif

void draw(){
  glBegin(GL_TRIANGLES);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex2f(0.0f, 1.0f);
  glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(1.0f, -0.5f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-1.0f, -0.5f);
  glEnd();
	glutSwapBuffers();
}

int main(int argc, char *argv[]){
  glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(100, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("1");
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}
