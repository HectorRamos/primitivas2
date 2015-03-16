#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	//glColor3f (1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);
	//PUNTO UNO
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0f,0.8f,0.0);
	//PUNTO 2
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-0.6f,-0.2f,0.0);
	//PUNTO 3
	glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.6f,-0.2f,0.0);
	//PUNTO 4
	glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.0f,-0.8f,0.0);
    glVertex3f(-0.6,-0.8,0.0);
    glVertex3f(-0.6,0.5,0.0);
    //PUNTO 5
    
   /* glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.6f,0.5f,0.0);
	//glColor3f(0.0, 0.0, 1.0);
	//punto 6
    glVertex3f(-0.6f,-0.8f,0.0);
    //punto 7
    //glVertex3f(1.0f,-0.8f,0.0);
    */
	
	glEnd();
	glFlush ();
	
	}
void init (void){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0,-1.0, 1.0);
	
	}
int main (int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250,250);
	glutInitWindowPosition (100, 100);
	glutCreateWindow("radiales");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
	
	}


