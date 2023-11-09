#ifndef ANIMATION_H_
#define ANIMATION_H_

#include "raylib.h"

// Animation: https://www.youtube.com/watch?v=vfNn450TVxs //

typedef struct SpriteAnimation
{
    Texture2D atlas;
    int FramesPerSecond;

    Rectangle* rectangles;
    int rectanglesLength;

} SpriteAnimation;

void DrawSpriteAnimationPro(SpriteAnimation animation, Rectangle dest, Vector2 origin, float rotation, Color tint) 

#endif
