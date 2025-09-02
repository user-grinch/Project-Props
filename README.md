# Project Props 3 Community

**Repository:** [Project Props – Community Open](https://github.com/user-grinch/Project-Props/tree/community-open)

> **Community RC1** is the latest public release of **Project Props**, based on the final community branch by **Zeneric** — now enhanced with [FastLoader](https://github.com/user-grinch/FastLoader) for full **open file structure** support. This makes the mod fully editable, stable, and compatible with other mods.

## You need:
- [Open Limit Adjuster v1.5.9](https://github.com/GTAmodding/III.VC.SA.LimitAdjuster/releases) - default settings
- [FastLoader](https://github.com/user-grinch/FastLoader/releases/tag/v1.0.0) - created specially for Project Props 3 purpose

OPTIONAL:
- [fastman92 limit adjuster](https://www.mixmods.com.br/2022/01/fastman92-limit-adjuster/) If you use other object.dat mods, you might need Fastaman Limit Adjuster limit set to ```Object info entries = 200```

## ✅ Key Features

- Supports **breakable objects**
- **Text-based IPLs** are back
- Thanks to the [FastLoader](https://github.com/user-grinch/FastLoader) no crashes with other `.dat` mods (e.g. *Proper Fixes*, *Combat FX Update*)


<p align="center">
  <img src="https://github.com/user-attachments/assets/204bb565-5bde-4819-9d92-94c1fb7cf329" alt="Project Props Community RC1" />
</p>

 

## ✨ What’s New?

- ✅ All content from version **2.3** restored
- ✅ Includes **never-published assets** from the original Grinch's repository 
- ✅ All [Community Fixes](https://libertycity.net/files/gta-san-andreas/221956-project-props-v2-2-fixes.html) included
- ✅ Fully compatible with **Urbanize!**
- ✅ No crashes reported during testing

 

## 🔧 Additions & Fixes

- ✔ Added missing **textures** for never published new props
- ✔ Fixed **positioning** for several models
- ✔ Updated `ProjectProps.ini` to work with `ProjectProps.asi` (includes lampposts, hydrants)
- ✔ **Weeds** optimized by @.zeneric - thousand of automaticly generated weeds models are now merged into batches, to optimise memory usage 
- ✔ Disabled **rubbish props** added by Grinch (original SA rubbish remains intact)  → Goal: migrate those to `procobj.dat` for better dynamic loading


## 📦 Included Projects (With Permission)

This release **merges content from the following mods**, with full permission from their original authors:

- 🔗 [Mixsylent's Objectopia v1.4.0](https://forum.mixmods.com.br/f6-mapas-objetos/t8549-sa-wip-objectopia-v1-4-0?sid=cc4bd3d576bf30378ef8b398995cbf0a) 
- 🔗 *Lando Props* – featuring:  
  - Easter Basin Naval Station (SF)  
  - Simple Beach (LS)
- 🔗 [James's Props – Improved Map Environment](https://libertycity.net/files/gta-san-andreas/209720-jamess-props-improved-map-environment.html)
- 🔗 *Reaper’s Camp* – a **Breaking Bad-inspired** trailer site with realistic detailing

### ⚠️ Urbanize Compatibility Note

In the .settings folder you can find two configurations.
If you prefere Urbanize Mailboxes, Hydrants and Parking Meters - Use loader.txt from 'Urbanize over Project Props' folder 
If you want the best experience use default settings and disable Urbanize Mailboxes, Hydrants and Parking Meters in the modloader/Urbanize/Map/Loader.txt

### ⚠️ Project 2dfx Compatibility Note

For **Project 2dfx**, make sure to **disable loading of all binary IPLs**:

```ini
LoadAllBinaryIPLs = 0
```

This setting normally forces the game to load *all* IPL files at once, which can exceed the engine’s internal limits for object instances.

### ❌ Known Issue: Object Limits
There **is** a hard limit. After tens of thousands of props (not counted precisely yet), the game starts duplicating objects.  

When combining **Urbanize + Improved Vegetation Distance + Project Props Community**, increasing values in the `[IDE Tweaker]` section causes props to spawn **twice in the same spot** (especially noticeable with breakables like lampposts, fences, etc.).

👉 Don’t worry — the game doesn’t crash (though honestly, it feels like it should).

### ✅ The Key is Balance
- **More draw distance in Project2dfx = fewer props you can safely load** in `.ipl` files without triggering duplicates.  
- Everyone needs to find their own **sweet spot** between:
  - total prop count  
  - extended draw distance  

By default, **Project Props Community** ships with settings that leave some spare headroom for additional objects.  
For even more props, check out our `loader.txt`.


🧠 The issue is not with the IPL content itself, but with the **total number of objects loaded into memory**. 

## ⚙️ About Merging

All merging was performed using a **custom toolchain**:

- 🔁 A mix of **automated scripts** and **manual validation**
- 🧠 The script performs smart detection but has **known limitations**:
  - Large or oddly positioned objects may bypass automatic deduplication due to coordinate system constraints
- 🐞 If you notice any **object collision**, visual glitch, or bug:
  - **Please report it!**  
    Include a **screenshot** and **exact XYZ coordinates**  
    → We patch bugs **quickly and consistently**


### 🛠️ How to Contribute (Add Your Own Props!)

Want to **add more props or maps** to the project? It's easy — and we **encourage it**!

> 🧰 Use our custom editor:  
> 👉 [Map Editor – by user-grinch](https://github.com/user-grinch/Map-Editor)

**Steps:**

1. Install this mod locally to avoid creating conflicts with existing props  
2. Use the editor to place your objects (IPL-based workflow)  
3. Send us your `.ipl` file for testing  
4. If your submission **passes our quality check**, it will be **officially added to the next release**

✅ **We're especially looking for contributions in:**  
- Rural areas  
- **San Fierro**  
- **Las Venturas**

Help us expand the world — one prop at a time!


## 🤝 Credits

Special thanks to:  
- **Grinch_, Zeneric** — The GOATS  
- **Reaper** — mapping, creative director  
- **James Harlet** — mapping  
- **LandoF** — mapping  
- **Matslick** — coordination, research  
- **CatchyKetchup, KaiQ** — 2.2 Fixes  


## 💬 *Enjoy modding and keep breaking stuff — responsibly.*
