import pygame
import sys

#colors
WHITE = (255,255,255)
BLACK = (0,0,0)

pygame.init()

frames_per_seconds = 30
window_height = 600
window_width = 400

display = pygame.display.set_mode((window_width,window_height))
r = pygame.Rect(50,50,100,200)
pygame.draw.rect(display,WHITE,r,0)

clock = pygame.time.Clock()
a = "hi"
print(len(a))

while True:
	clock.tick(frames_per_seconds)

	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			pygame.quit()
			sys.exit()
	pygame.display.flip()