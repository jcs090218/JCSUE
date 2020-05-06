/**
 * $File: JCSUE_Easing.cpp $
 * $Date: 2017-03-03 21:49:54 $
 * $Revision: $
 * $Creator: Jen-Chieh Shen $
 * $Notice: See LICENSE.txt for modification and distribution information
 *                   Copyright (c) 2017 by Shen, Jen-Chieh $
 */

#include "../../JCSUE.h"

namespace JCSUE
{
    JCSUE_Easing::JCSUE_Easing()
    {
        // empty..
    }

    JCSUE_Easing::~JCSUE_Easing()
    {
        // empty..
    }

    // brief Easing equation function for a simple
    // linear tweening, with no easing.
    float32 JCSUE_Easing::Linear(float32 t, float32 s, float32 f, float32 d)
    {
        return f * t / d + s;
    }

    // Easing equation function for an
    // exponential (2 ^ t) easing out: decelerating from
    // zero velocity.
    float32 JCSUE_Easing::ExpoEaseOut(float32 t, float32 b, float32 f, float32 d)
    {
        return (t == 0) ? b : f * JCSUE_Mathf::Pow(2, 10 * (t / d - 1)) + b;
    }

    // Easing equation function for an exponential
    // (2^t) easing in: accelerating from zero velocity.
    float32 JCSUE_Easing::ExpoEaseIn(float32 t, float32 b, float32 f, float32 d)
    {
        return (t == 0) ? b : f * JCSUE_Mathf::Pow(2, 10 * (t / d - 1)) + b;
    }

    // Easing equation function for an exponential (2^t) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::ExpoEaseInOut(float32 t, float32 b, float32 f, float32 d)
    {
        if (t == 0)
            return b;

        if (t == d)
            return b + f;

        if ((t /= d / 2) < 1)
            return f / 2 * JCSUE_Mathf::Pow(2, 10 * (t - 1)) + b;

        return f / 2 * (-JCSUE_Mathf::Pow(2, -10 * --t) + 2) + b;
    }

    // Easing equation function for an exponential
    // (2^t) easing out/in: deceleration until halfway,
    // then acceleration.
    float32 JCSUE_Easing::ExpoEaseOutIn(float32 t, float32 b, float32 f, float32 d)
    {
        if (t < d / 2)
            return ExpoEaseOut(t * 2, b, f / 2, d);

        return ExpoEaseIn((t * 2) - d, b + f / 2, f / 2, d);
    }

    // Easing equation function for a circular
    //(sqrt(1-t^2)) easing out: decelerating from zero
    // velocity.
    float32 JCSUE_Easing::CircEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        //return c * Mathf.Sqrt(1 - (t = t / d - 1) * t) + b;
        return 0;
    }

    // Easing equation function for a circular (sqrt(1-t^2))
    // easing in: accelerating from zero velocity.
    float32 JCSUE_Easing::CircEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // return -c * (Mathf.Sqrt(1 - (t /= d) * t) - 1) + b;
        return 0;
    }

    // Easing equation function for a circular (sqrt(1-t^2)) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::CircEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) < 1)
        //     return -c / 2 * (Mathf.Sqrt(1 - t * t) - 1) + b;

        // return c / 2 * (Mathf.Sqrt(1 - (t -= 2) * t) + 1) + b;
        return 0;
    }

    // Easing equation function for a circular (sqrt(1-t^2)) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::CircEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        if (t < d / 2)
            return CircEaseOut(t * 2, b, c / 2, d);

        return CircEaseIn((t * 2) - d, b + c / 2, c / 2, d);
    }

    // Easing equation function for a quadratic (t^2) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::QuadEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // return -c * (t /= d) * (t - 2) + b;
        return 0;
    }

    // Easing equation function for a quadratic (t^2) easing in:
    // accelerating from zero velocity.
    float32 JCSUE_Easing::QuadEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * (t /= d) * t + b;
        return 0;
    }

    // Easing equation function for a quadratic (t^2) easing
    // in/out: acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::QuadEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) < 1)
        //     return c / 2 * t * t + b;

        // return -c / 2 * ((--t) * (t - 2) - 1) + b;
        return 0;
    }

    // Easing equation function for a quadratic (t^2) easing
    // out/in: deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::QuadEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return QuadEaseOut(t * 2, b, c / 2, d);

        // return QuadEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for a sinusoidal (sin(t)) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::SineEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * Mathf.Sin(t / d * (Mathf.PI / 2)) + b;
        return 0;
    }

    // Easing equation function for a sinusoidal (sin(t)) easing in:
    // accelerating from zero velocity.
    float32 JCSUE_Easing::SineEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // return -c * Mathf.Cos(t / d * (Mathf.PI / 2)) + c + b;
        return 0;
    }

    // Easing equation function for a sinusoidal (sin(t)) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::SineEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) < 1)
        //     return c / 2 * (Mathf.Sin(Mathf.PI * t / 2)) + b;

        // return -c / 2 * (Mathf.Cos(Mathf.PI * --t / 2) - 2) + b;
        return 0;
    }

    // Easing equation function for a sinusoidal (sin(t)) easing in/out:
    // deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::SineEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return SineEaseOut(t * 2, b, c / 2, d);

        // return SineEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for a cubic (t^3) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::CubicEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * ((t = t / d - 1) * t * t + 1) + b;
        return 0;
    }

    // Easing equation function for a cubic (t^3) easing in:
    // accelerating from zero velocity.
    float32 JCSUE_Easing::CubicEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * (t /= d) * t * t + b;
        return 0;
    }

    // Easing equation function for a cubic (t^3) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::CubicEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) < 1)
        //     return c / 2 * t * t * t + b;

        // return c / 2 * ((t -= 2) * t * t + 2) + b;
        return 0;
    }

    // Easing equation function for a cubic (t^3) easing out/in:
    // deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::CubicEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return CubicEaseOut(t * 2, b, c / 2, d);

        // return CubicEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for a quartic (t^4) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::QuartEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // return -c * ((t = t / d - 1) * t * t * t - 1) + b;
        return 0;
    }

    // Easing equation function for a quartic (t^4) easing in:
    // accelerating from zero velocity.
    float32 JCSUE_Easing::QuartEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * (t /= d) * t * t * t + b;
        return 0;
    }

    // Easing equation function for a quartic (t^4) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::QuartEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) < 1)
        //     return c / 2 * t * t * t * t + b;

        // return -c / 2 * ((t -= 2) * t * t * t - 2) + b;
        return 0;
    }

    // Easing equation function for a quartic (t^4) easing out/in:
    // deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::QuartEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return QuartEaseOut(t * 2, b, c / 2, d);

        // return QuartEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for a quintic (t^5) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::QuintEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * ((t = t / d - 1) * t * t * t * t + 1) + b;
        return 0;
    }

    // Easing equation function for a quintic (t^5) easing in:
    // accelerating from zero velocity.
    float32 JCSUE_Easing::QuintEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // return c * (t /= d) * t * t * t * t + b;
        return 0;
    }

    // Easing equation function for a quintic (t^5) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 QuintEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) < 1)
        //     return c / 2 * t * t * t * t * t + b;
        // return c / 2 * ((t -= 2) * t * t * t * t + 2) + b;
        return 0;
    }

    // Easing equation function for a quintic (t^5) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::QuintEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return QuintEaseOut(t * 2, b, c / 2, d);
        // return QuintEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for an elastic (exponentially decaying sine wave) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::ElasticEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d) == 1)
        //     return b + c;

        // float32 p = d * .3f;
        // float32 s = p / 4.0f;

        // return (c * Mathf.Pow(2, -10 * t) * Mathf.Sin((t * d - s) * (2 * Mathf.PI) / p) + c + b);
        return 0;
    }

    // Easing equation function for an elastic (exponentially decaying sine wave) easing in:
    //  accelerating from zero velocity.
    float32 JCSUE_Easing::ElasticEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d) == 1)
        //     return b + c;

        // float32 p = d * .3f;
        // float32 s = p / 4;

        // return -(c * Mathf.Pow(2, 10 * (t -= 1)) * Mathf.Sin((t * d - s) * (2 * Mathf.PI) / p)) + b;
        return 0;
    }

    // Easing equation function for an elastic (exponentially decaying sine wave) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::ElasticEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d / 2) == 2)
        //     return b + c;

        // float32 p = d * (.3f * 1.5f);
        // float32 s = p / 4;

        // if (t < 1)
        //     return -.5f * (c * Mathf.Pow(2, 10 * (t -= 1)) * Mathf.Sin((t * d - s) * (2 * Mathf.PI) / p)) + b;
        // return c * Mathf.Pow(2, -10 * (t -= 1)) * Mathf.Sin((t * d - s) * (2 * Mathf.PI) / p) * .5f + c + b;
        return 0;
    }


    // Easing equation function for an elastic (exponentially decaying sine wave) easing out/in:
    // deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::ElasticEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return ElasticEaseOut(t * 2, b, c / 2, d);
        // return ElasticEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for a bounce (exponentially
    // decaying parabolic bounce) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::BounceEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if ((t /= d) < (1 / 2.75))
        //     return c * (7.5625f * t * t) + b;
        // else if (t < (2 / 2.75f))
        //     return c * (7.5625f * (t -= (1.5f / 2.75f)) * t + .75f) + b;
        // else if (t < (2.5f / 2.75f))
        //     return c * (7.5625f * (t -= (2.25f / 2.75f)) * t + .9375f) + b;
        // else
        //     return c * (7.5625f * (t -= (2.625f / 2.75f)) * t + .984375f) + b;
        return 0;
    }


    // Easing equation function for a bounce (exponentially
    // decaying parabolic bounce) easing in: accelerating
    // from zero velocity.
    float32 JCSUE_Easing::BounceEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        //return c - BounceEaseOut(d - t, 0, c, d) + b;
        return 0;
    }

    // Easing equation function for a bounce (exponentially decaying parabolic bounce) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::BounceEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return BounceEaseIn(t * 2, 0, c, d) * .5f + b;
        // else
        //     return BounceEaseOut(t * 2 - d, 0, c, d) * .5f + c * .5f + b;
        return 0;
    }

    // Easing equation function for a bounce (exponentially decaying parabolic bounce) easing out/in:
    // deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::BounceEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return BounceEaseOut(t * 2, b, c / 2, d);
        // return BounceEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }

    // Easing equation function for a back (overshooting cubic easing: (s+1)*t^3 - s*t^2) easing out:
    // decelerating from zero velocity.
    float32 JCSUE_Easing::BackEaseOut(float32 t, float32 b, float32 c, float32 d)
    {
        //return c * ((t = t / d - 1) * t * ((1.70158f + 1) * t + 1.70158f) + 1) + b;
        return 0;
    }

    // Easing equation function for a back (overshooting
    // cubic easing: (s+1)*t^3 - s*t^2) easing in: accelerating
    // from zero velocity.
    float32 JCSUE_Easing::BackEaseIn(float32 t, float32 b, float32 c, float32 d)
    {
        //return c * (t /= d) * t * ((1.70158f + 1) * t - 1.70158f) + b;
        return 0;
    }

    // Easing equation function for a back (overshooting cubic easing: (s+1)*t^3 - s*t^2) easing in/out:
    // acceleration until halfway, then deceleration.
    float32 JCSUE_Easing::BackEaseInOut(float32 t, float32 b, float32 c, float32 d)
    {
        // float32 s = 1.70158f;
        // if ((t /= d / 2) < 1)
        //     return c / 2 * (t * t * (((s *= (1.525f)) + 1) * t - s)) + b;
        // return c / 2 * ((t -= 2) * t * (((s *= (1.525f)) + 1) * t + s) + 2) + b;
        return 0;
    }

    // Easing equation function for a back (overshooting cubic easing: (s+1)*t^3 - s*t^2) easing out/in:
    // deceleration until halfway, then acceleration.
    float32 JCSUE_Easing::BackEaseOutIn(float32 t, float32 b, float32 c, float32 d)
    {
        // if (t < d / 2)
        //     return BackEaseOut(t * 2, b, c / 2, d);
        // return BackEaseIn((t * 2) - d, b + c / 2, c / 2, d);
        return 0;
    }
}
