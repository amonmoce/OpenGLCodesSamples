#ifdef WIN32
#include <windows.h>
#endif
#ifdef __APPLE__
#include <GLUT/GLUT.h>
#else
#include <GL/glut.h>
#endif

void init(){
  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LESS);
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE);
}

void draw(){
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glPushMatrix();
  glColor4f(0.0f, 1.0f, 0.0f, 0.4f);
  glBegin(GL_TRIANGLES);
  glVertex3f(0.0f, 0.5f ,-0.5f);
	glVertex3f(0.5f, 0.0f ,-0.5f);
	glVertex3f(-0.5f, 0.0f ,-0.5f);
	glEnd();

  glColor4f(1.0f, 0.0f, 0.0f, 0.4f);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0f, 0.8f ,-0.8f);
	glVertex3f(0.8f, 0.0f ,-0.8f);
	glVertex3f(-0.8f, 0.0f ,-0.8f);
	glEnd();

  glColor4f(1.0f, 0.0f, 0.0f, 0.4f);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0f, 0.0f, -0.8f);
	glVertex3f(0.8f, -0.5f, -0.8f);
	glVertex3f(-0.8f, -0.5f, -0.8f);
	glEnd();

  glPopMatrix();

  glutSwapBuffers();
}

int main(int argc, char *argv[]){
  glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowPosition(100, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Depth Test");
  init();
  glutDisplayFunc(draw);
  glutMainLoop();
  return 0;
}
