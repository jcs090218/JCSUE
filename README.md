[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![Unreal](https://img.shields.io/badge/Unreal%20Engine-4.25.1-blue.svg)](https://www.unrealengine.com/en-US/)
[![Release Tag](https://img.shields.io/github/tag/jcs090218/JCSUE.svg?label=release)](https://github.com/jcs090218/JCSUE/releases/latest)

# JCSUE

[![Build Status](https://travis-ci.com/jcs090218/JCSUE.svg?branch=master)](https://travis-ci.com/jcs090218/JCSUE)
[![Docs](https://github.com/jcs090218/JCSUE/actions/workflows/docs.yml/badge.svg)](https://github.com/jcs090218/JCSUE/actions/workflows/docs.yml)

JCSUE is a general speed components library. JCSUE help out people who have 
trouble making script/component over and over agian in variety of different 
project. This library provide many scripted game mechanics. With those combination
of scripts/components could generate enormous variety of different behaviour.

## :newspaper: News

Here is the list of few important and recent changes to this plugin.

* `0.0.1` - First test release version for testing purpose.

## :floppy_disk: Installation

#### 1. Download JCSUE_Plugin

You need to download the plugin from relese tag like the latest relese 
[here](https://github.com/jcs090218/JCSUE/releases). You can unzip the plugin
and just drop it into your project's plugins folder, e.g. `YourProject/Plugins/`.

#### 2. Edit Build.cs

Edit your project's `YourProject.Build.cs` file located at `Source/YourProject/YourProject.Build.cs`
by adding `JCSUE_Plugin` to your `PublicDependencyModuleNames` array. Like, 

```cs
PublicDependencyModuleNames.AddRange(new string[] { ..., "JCSUE_Plugin" });
```

#### 3. Compile

Then you should able to compile your project without any hassle!

## :link: Links

* *Manual/Scripting API* : [Scripting-Manual-JCSUE](http://www.jcs-profile.com:3003)

## :video_game: Games

* N/A
