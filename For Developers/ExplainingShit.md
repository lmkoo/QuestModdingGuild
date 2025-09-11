# What Is `InvokeHook`?
`InvokeHook` replaces the original method with your own.

[InvokeHook Doc](https://bynamemodding.github.io/namespaceBNM.html#ac97db451a7f1a790327f7c41c6bc6cf6)

### `Example:`
```cpp
void (*Update)(void*);
void new_Update(void* instance) {
    Update(instance); // Calls the original instance
    // Your mod code here
}

InvokeHook(Class(BNM_OBFUSCATE("ExampleNamespace"), BNM_OBFUSCATE("ExampleClass"), Image(
  BNM_OBFUSCATE("ExampleImage.dll"))).GetMethod(BNM_OBFUSCATE("Update")), new_Update, Update);
```

You need to find the certain thing to hook instead of blindly hooking nothing. Thats why your mod doesn't work or it crashes.

# What Is Update/Awake
Update / LateUpdate / FixedUpdate - Called every frame

Start / Awake - Called once

# What to do if you don't know something
Search it up first in the BNM-Android docs or C++ docs.

Or ask someone

### `Documentation:`

[BNM-Docs](https://bynamemodding.github.io/index.html)

[C++ Docs](https://devdocs.io/cpp/)

---

# Change The Target Unity Version!
Most people don't watch the video that pubert made then does everything wrong going to me and saying that my temp didn't work or it crashes. 

And most of the time is that they didn't change the target unity version for the hook.

# How To

- Dump the game
- Open data.unity3d or globalgamemanagers in notepad
- Then it will tell you the Unity version
- Now go back to your menu
- Open "Extern/BNM-Android/Include.BNM/UserSettings/GlobalSettings.hpp"
- Uncomment the game’s Unity version and comment out the other version.

### `Example:`
```cpp
//#define UNITY_VER 212 // 2021.2.x
// Non-target Unity version (commented out)

#define UNITY_VER 213 // 2021.3.x
// Target Unity version (uncommented)
```
Commenting a line means adding // at the beginning.

Uncommenting removes //.

---

If I got anything wrong dm me :sunglasses:
