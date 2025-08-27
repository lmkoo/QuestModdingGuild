**Made by:**

* [discord.gg/spm](https://discord.gg/spm)
* [discord.gg/ufv3fHQMVU](https://discord.gg/ufv3fHQMVU)
* **Owners:** pubertcs, restarttag


GUIManager I made, it's not **VERY** useful, you can make some stuff with it though. I use it to make my "dll" menus, and watermark (when i rarely do add that)
The code is fairly simple to setup, here's an example if you just hook Awake
```c++
GUIManager* inst;

void (*Awake)(void*);
void new_Awake(void* instance) {
    Awake(instance);

    inst = new GUIManager();
    inst->Init(GameObject::Find("Main Camera")->GetTransform(), TextAnchor::UpperRight, nullptr);
    inst->SetText("discord.gg/spm");
}
```
Can't stress this enough, please credit me/SPM in some way :))

**Made by:**

* [discord.gg/spm](https://discord.gg/spm)
* [discord.gg/ufv3fHQMVU](https://discord.gg/ufv3fHQMVU)
* **Owners:** pubertcs, restarttag
