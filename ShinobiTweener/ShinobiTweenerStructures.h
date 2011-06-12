//
//  ShinobiTweenerStructures.h
//  ShinobiTweener
//
//  Created by lznpde on 31/10/2010.
//  Copyright 2010 Shinobi Corp. All rights reserved.
//

#import <Foundation/Foundation.h>

// AddTweenToSprite types

// Properties
#define TWEENER_PROPERTY_X 0
#define TWEENER_PROPERTY_Y 1
#define TWEENER_PROPERTY_WIDTH 2
#define TWEENER_PROPERTY_HEIGHT 3
#define TWEENER_PROPERTY_SCALE 4
#define TWEENER_PROPERTY_SCALEX 5
#define TWEENER_PROPERTY_SCALEY 6
#define TWEENER_PROPERTY_ALPHA 7
#define TWEENER_PROPERTY_ROTATION 8
#define TWEENER_PROPERTY 9

// Transitions
#define TWEENER_TRANSITION_LINEAR 0
#define TWEENER_TRANSITION_BACK_EASE_IN 1
#define TWEENER_TRANSITION_BACK_EASE_OUT 2
#define TWEENER_TRANSITION_BACK_EASE_IN_OUT 3
#define TWEENER_TRANSITION_BOUNCE_EASE_IN 4
#define TWEENER_TRANSITION_BOUNCE_EASE_OUT 5
#define TWEENER_TRANSITION_BOUNCE_EASE_IN_OUT 6
#define TWEENER_TRANSITION_CIRC_EASE_IN 7
#define TWEENER_TRANSITION_CIRC_EASE_OUT 8
#define TWEENER_TRANSITION_CIRC_EASE_IN_OUT 9
#define TWEENER_TRANSITION_CUBIC_EASE_IN 10
#define TWEENER_TRANSITION_CUBIC_EASE_OUT 11
#define TWEENER_TRANSITION_CUBIC_EASE_IN_OUT 12
#define TWEENER_TRANSITION_ELASTIC_EASE_IN 13
#define TWEENER_TRANSITION_ELASTIC_EASE_OUT 14
#define TWEENER_TRANSITION_ELASTIC_EASE_IN_OUT 15
#define TWEENER_TRANSITION_EXPO_EASE_IN 16
#define TWEENER_TRANSITION_EXPO_EASE_OUT 17
#define TWEENER_TRANSITION_EXPO_EASE_IN_OUT 18
#define TWEENER_TRANSITION_QUAD_EASE_IN 19
#define TWEENER_TRANSITION_QUAD_EASE_OUT 20
#define TWEENER_TRANSITION_QUAD_EASE_IN_OUT 21
#define TWEENER_TRANSITION_QUART_EASE_IN 22
#define TWEENER_TRANSITION_QUART_EASE_OUT 23
#define TWEENER_TRANSITION_QUART_EASE_IN_OUT 24
#define TWEENER_TRANSITION_QUINT_EASE_IN 25
#define TWEENER_TRANSITION_QUINT_EASE_OUT 26
#define TWEENER_TRANSITION_QUINT_EASE_IN_OUT 27
#define TWEENER_TRANSITION_SINE_EASE_IN 28
#define TWEENER_TRANSITION_SINE_EASE_OUT 29
#define TWEENER_TRANSITION_SINE_EASE_IN_OUT 30
#define TWEENER_TRANSITION_NONE 31

typedef struct
{
	float *floatPointer;
	
	uint property;
	
	double timeBegin;
	float timeDelta;
	float timeDelay;
	float timeDuration;
	
	float begin;
	float finish;
	float change;
	
	uint transition;
	
	SEL onCompleteSelector;
	id onCompleteObject;
	
	BOOL reverse;
	BOOL reversedPropertyIsSetAtStart;
	
} TweenProperty;

static inline TweenProperty TweenPropertyMake(float *floatPointer, uint property, double timeBegin, float timeDelta, float timeDelay, float timeDuration, float begin, float finish, float change, uint transition, SEL onCompleteSelector, id onCompleteObject, BOOL reverse, BOOL reversePropertyIsSetAtStart)
{	
	return (TweenProperty) { floatPointer, property, timeBegin, timeDelta, timeDelay, timeDuration, begin, finish, change, transition, onCompleteSelector, onCompleteObject, reverse, reversePropertyIsSetAtStart };
}

@interface ShinobiTweenerStructures : NSObject {

}

@end
