###############################################################
# Program:
#     Milestone 08, Skeet
#     Brother Alvey, CS165
# Author:
#     Stettsen Olsen
# Summary:
#     This is the skeet game. It contain three types of birds.
#     Shoot them if you can! 
# Above and Beyond
#     I didn't just want the birds to come from one side. I had
#     a if statement that set the point to different postions
#     and velocity/direction differed as well. This version does
#     not include that.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o bird.o bullet.o sacredBird.o toughBird.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o bird.o bullet.o sacredBird.o toughBird.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
#    bird.o        Creates a bird for the game
#    bullet.o      Creates a bullet for the game
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################


bird.o: bird.h bird.cpp
	g++ -c bird.cpp

bullet.o: bullet.h bullet.cpp
	g++ -c bullet.cpp

toughBird.o: toughBird.h toughBird.cpp
	g++ -c toughBird.cpp

sacredBird.o: sacredBird.h sacredBird.cpp
	g++ -c sacredBird.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
