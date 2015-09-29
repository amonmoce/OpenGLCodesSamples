Filename = depth_test
OpenGL = -framework OpenGL
GLUT = -framework GLUT
Cocoa = -framework Cocoa
frameworks = $(OpenGL) $(GLUT) $(Cocoa)

osx:
	g++ $(Filename).cpp $(frameworks) -o $(Filename)

clean:
	rm $(Filename)
