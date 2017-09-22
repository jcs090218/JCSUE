#ifndef __JCSUE_EASING_H__
/**
 * $File: JCSUE_Easing.h $
 * $Date: 2017-03-03 21:48:35 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */
#define __JCSUE_EASING_H__



namespace JCSUE
{

    /**
     * @class JCSUE_Easing
     * @brief Store all the easing math here.
     */
    class JCSUE_Easing
    {
        JCSUE_Easing();
        virtual ~JCSUE_Easing();


        /**
         * @func Linear
         * @brief Easing equation function for a simple
         * linear tweening, with no easing.
         * @param t : current time in seconds.
         * @param s : starting value.
         * @param f : final value.
         * @param d : Duration of animation.
         * @return float32 : the correct value.
         */
        static float32 Linear(float32 t, float32 s, float32 f, float32 d);

        /**
         * @func ExpoEaseOut
         * @brief Easing equation function for an
         * exponential (2 ^ t) easing out: decelerating from
         * zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return flaot : the correct value.
         */
        static float32 ExpoEaseOut(float32 t, float32 b, float32 f, float32 d);

        /**
         * @func ExpoEaseIn
         * @brief Easing equation function for an
         * exponential (2^t) easing in: accelerating
         * from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ExpoEaseIn(float32 t, float32 b, float32 f, float32 d);

        /**
         * @func ExpsEaseInOut
         * @brief Easing equation function for an
         * exponential (2^t) easing in/out:
         * acceleration until halfway, then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ExpoEaseInOut(float32 t, float32 b, float32 f, float32 d);

        /**
         * @func ExpoEaseOutIn
         * @brief Easing equation function for an exponential
         * (2^t) easing out/in: deceleration until halfway,
         * then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ExpoEaseOutIn(float32 t, float32 b, float32 f, float32 d);

        /**
         * @func CircEaseOut
         * @brief Easing equation function for a circular
         * (sqrt(1-t^2)) easing out: decelerating from zero
         * velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CircEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func CircEaseIn
         * @brief // Easing equation function for a circular
         * (sqrt(1-t^2)) easing in:accelerating from zero
         * velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CircEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func CircEaseInOut
         * @brief Easing equation function for a
         * circular (sqrt(1-t^2)) easing in/out:acceleration
         * until halfway, then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CircEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func
         * @brief Easing equation function for a circular
         * (sqrt(1-t^2)) easing in/out:acceleration until
         * halfway, then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CircEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuadEaseOut
         * @brief Easing equation function for a quadratic
         * (t^2) easing out:decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuadEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuadEaseIn
         * @brief Easing equation function for a quadratic
         * (t^2) easing in:accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuadEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuadEaseInOut
         * @brief Easing equation function for a quadratic
         * (t^2) easingin/out: acceleration until halfway,
         * then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuadEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuadEaseOutIn
         * @brief Easing equation function for a quadratic
         * (t^2) easingout/in: deceleration until halfway,
         * then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuadEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func SineEaseOut
         * @brief Easing equation function for a sinusoidal
         * (sin(t)) easing out:decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 SineEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func SineEaseIn
         * @brief Easing equation function for a sinusoidal
         * (sin(t)) easing in:accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 SineEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func SineEaseInOut
         * @brief Easing equation function for a sinusoidal
         * (sin(t)) easing in/out:acceleration until halfway,
         * then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 SineEaseInOut(float32 t, float32 b, float32 c, float32 d);


        /**
         * @func SineEaseOutIn
         * @brief Easing equation function for a sinusoidal
         * (sin(t)) easing in/out:deceleration until halfway,
         * then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 SineEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func CubicEaseOut
         * @brief Easing equation function for a cubic (t^3)
         * easing out:decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CubicEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func CubicEaseIn
         * @brief Easing equation function for a cubic (t^3)
         * easing in:accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CubicEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func CubicEaseInOut
         * @brief Easing equation function for a cubic (t^3)
         * easing in/out:acceleration until halfway, then
         * deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CubicEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func CubicEaseOutIn
         * @brief  Easing equation function for a cubic (t^3) easing
         * in/out:acceleration until halfway, then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 CubicEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuartEaseOut
         * @brief Easing equation function for a quartic (t^4)
         * easing out:decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuartEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuartEaseIn
         * @brief Easing equation function for a quartic (t^4)
         * easing in:accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuartEaseIn(float32 t, float32 b, float32 c, float32 d);

        // Easing equation function for a quartic (t^4) easing in/out:acceleration until halfway, then deceleration.
        /**
         * @func
         * @brief
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuartEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuartEaseOutIn
         * @brief Easing equation function for a quartic
         * (t^4) easing out/in:deceleration until halfway,
         * then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuartEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuintEaseOut
         * @brief Easing equation function for a quintic (t^5)
         * easing out:decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuintEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuintEaseIn
         * @brief Easing equation function for a quintic (t^5)
         * easing in:accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuintEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuintEaseInOut
         * @brief Easing equation function for a quintic (t^5)
         * easing in/out:acceleration until halfway, then
         * deceleration.
         */
        static float32 QuintEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func QuintEaseOutIn
         * @brief Easing equation function for a quintic (t^5)
         * easing in/out:acceleration until halfway, then
         * deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 QuintEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func ElasticEaseOut
         * @brief Easing equation function for an elastic
         * (exponentially decaying sine wave) easing out:
         * decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ElasticEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func ElasticEaseIn
         * @brief Easing equation function for an elastic
         * (exponentially decaying sine wave) easing in:
         * accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ElasticEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func ElasticEaseInOut
         * @brief Easing equation function for an elastic
         * (exponentially decaying sine wave) easing in/out:
         * acceleration until halfway, then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ElasticEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func ElasticEaseOutIn
         * @brief Easing equation function for an elastic (exponentially decaying sine wave) easing out/in:
         * deceleration until halfway, then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 ElasticEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BounceEaseOut
         * @brief Easing equation function for a bounce (exponentially
         * decaying parabolic bounce) easing out: decelerating
         * from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BounceEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BounceEaseIn
         * @brief Easing equation function for a bounce
         * (exponentially decaying parabolic bounce) easing in:
         * accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BounceEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BounceEaseInOut
         * @brief Easing equation function for a bounce
         * (exponentially decaying parabolic bounce) easing
         * in/out: acceleration until halfway, then deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BounceEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BounceEaseOutIn
         * @brief Easing equation function for a bounce (exponentially decaying parabolic bounce) easing out/in:
         * deceleration until halfway, then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BounceEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BackEaseOut
         * @brief Easing equation function for a back
         * (overshooting cubic easing: (s+1)*t^3 - s*t^2)
         * easing out: decelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BackEaseOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BackEaseInOut
         * @brief Easing equation function for a back
         * (overshooting cubic easing: (s+1)*t^3 - s*t^2)
         * easing in: accelerating from zero velocity.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BackEaseIn(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BackEaseInOut
         * @brief Easing equation function for a back
         * (overshooting cubic easing: (s+1)*t^3 - s*t^2)
         * easing in/out: acceleration until halfway, then
         * deceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BackEaseInOut(float32 t, float32 b, float32 c, float32 d);

        /**
         * @func BackEaseOutIn
         * @brief Easing equation function for a back
         * (overshooting cubic easing: (s+1)*t^3 - s*t^2)
         * easing out/in: deceleration until halfway,
         * then acceleration.
         * @param t : current time in seconds.
         * @param b : starting value.
         * @param f : final value.
         * @param d : duration of animation.
         * @return float32 : the correct value.
         */
        static float32 BackEaseOutIn(float32 t, float32 b, float32 c, float32 d);

        /* setter */

        /* getter */

    };
}

typedef JCSUE::JCSUE_Easing JCSUE_Easing;

#endif /* __JCSUE_EASING_H__ */
