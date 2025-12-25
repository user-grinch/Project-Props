# Project Props 3 Community

**Project Props 3 Community** is the official release, based on the community branch by **Zeneric** which itself was based on [Project Props V2.2 Fixes](https://discord.com/channels/793480791509565440/1081007139314741248) — now with fixed object.dat merging with modloader. (no need of Fastloader) 

With version **3**, the mod is **bigger, more beautiful, and more stable than ever before**.  

<p align="center">
  <img src="https://github.com/user-attachments/assets/204bb565-5bde-4819-9d92-94c1fb7cf329" alt="Project Props Community RC1" />
</p>

## 🫂 First off all: 
💬**JOIN OUR DISCORD SERVER: [Invitation](https://discord.gg/4e2PkhYq)**

Once inside, use the correct channel:  
- `#crash-help` → if your game crashes  
- `#position-bugs` → if you find misplaced or floating props  
- `#mapping-lab` → to share new mapping ideas or contributions  
- `#general` → for general discussion and questions  

This helps us keep things organized and ensures faster fixes!



## ℹ️ You need:

**If you’re just starting your journey with modding:**  
- [Essentials Pack](https://www.mixmods.com.br/2019/06/sa-essentials-pack/)  
*Without it:* you won’t be able to run any script mod.  

---

**Mandatory:**  
- [Open Limit Adjuster v1.5.9](https://github.com/GTAmodding/III.VC.SA.LimitAdjuster/releases) – use with default settings  
*Without it:* Don’t even try.  

---

**Highly Recommended:**  
- [fastman92 limit adjuster](https://libertycity.net/files/gta-san-andreas/223963-fastman92-limit-adjuster.html) – improves stability. Requires a small configuration (see below). (Remember to always install it in the main directory of the game!) 
*Without it:* For some users you can **start a new game**, but **loading saved games will fail**. Many props will be spawned twice, game will be unstable. 

Make sure to use these settings in your `fastman92limitAdjuster_GTASA.ini`:  
```ini
Object info entries = 200
```


```ini
Apply ID limit patch = 1
```

```ini
FILE_TYPE_DFF = 50000
```

```ini
FILE_TYPE_TXD = 60000
```

```ini
Count of killable model IDs = 42000;
```

For reporting purposes, also set:

```ini
Register global exception handler = 0
```
This ensures you get **proper crash messages** from the Essentials Pack. 


💬 **ONCE AGAIN JOIN OUR DISCORD SERVER: [Invitation](https://discord.gg/4e2PkhYq)**

On this [**Channel**](https://discord.com/channels/689515979847237649/1414177877515046934) you will get all the support needed to solve any compatibility issues. 

## ⚠️ Proper Fixes Compatibility Note

**Proper Fixes** comes with **two different `procobj.dat` files**, which is confusing – and they do completely opposite things. Since Project Props heavily depends on this system, here’s a clear explanation:

Files in Proper Fixes
- `Proper_Fixes\(optional - increase vegetation distance)\Increased Vegetation Distance\data\procobj.dat`  
  Purpose: disables all procedural plants/rocks, because *Increased Vegetation Distance (IVD)* places them via `.ipl` instead.  
  IPL has greater draw distance, so vegetation doesn’t "pop in". This file is basically empty.

- `Proper_Fixes\Proper Fixes\Misc\data\procobj.dat`  
  Purpose: fixes Rockstar’s original vegetation placements to avoid floating objects.  
  But with IVD installed, this is **not necessary**, since IVD replaces vegetation anyway.

Our `procobj.dat`
- `Project-Props\modloader\ProjectProps 3.1 Community\Custom Props\Procedural Objects\procobj.dat`  
  Does what Rockstar never finished: a proper procedural system that spawns **small details** (garbage, weeds, cigarette butts, shells, etc.) automatically across surfaces, avoiding manual placements.  

Recommended Setup (Maximum Compatibility: Project Props + IVD + Proper Fixes)
1. Copy `procobj.dat` from *Increased Vegetation Distance* into the **original game data folder** (replace the vanilla one).  
   → All vegetation will then be handled by IVD `.ipl` files = no duplication.  

2. Delete `Proper_Fixes\Proper Fixes\Misc\data\procobj.dat`.  
   → Not needed anymore, IVD already manages vegetation.

   This way you get:  
- Proper Fixes bug corrections  
- Increased Vegetation Distance with high draw distance  
- Project Props procedural small details  


## ⚠️ Urbanize Compatibility Note

If you prefere Urbanize Mailboxes, Hydrants and Parking Meters - Use default settings
If you want the best experience disable Urbanize Mailboxes, Hydrants and Parking Meters in the modloader/Urbanize/Map/Loader.txt
Delete or #comment those lines:
```ini
IPL data\maps\Urbanize - Mails.ipl
IPL data\maps\Urbanize - Street Side.ipl
```

## ✨ Key Features

- ✅ Added thousands of new props!
- ✅ Extended, reworked **procedural spawn system - procobj.dat** for garbage and small details across the entire map. Carefully crafted using the original game’s mechanics, with **marginal impact on FPS**
- ✅ All content from version **2.3** restored
- ✅ Includes **never-published assets** from the original Grinch's repository, added missing **textures** for never published new props
- ✅ All [Community Fixes](https://libertycity.net/files/gta-san-andreas/221956-project-props-v2-2-fixes.html) included
- ✅ Fully compatible with **Urbanize!**
- ✅ No crashes reported during testing
- ✅ Extended Residue Objects functionality (ProjectProps.asi) on all the lamppost and traffic lights
- ✅ Fixed occasionall crash with the script ProjectProps.asi 
- ✅ Fixed **positioning** for hundreds of models, positioning bugs are very rare now
- ✅ **Weeds** optimized by @.zeneric - thousand of automaticly generated weeds models are now merged into batches, to optimise memory usage, it's a technique from modern games


## 📦 Included Projects with permissions and active colaboration with the authors

- 🔗 [Mixsylent's Objectopia v1.4.0](https://forum.mixmods.com.br/f6-mapas-objetos/t8549-sa-wip-objectopia-v1-4-0?sid=cc4bd3d576bf30378ef8b398995cbf0a) 
- 🔗 *Lando Props* – featuring:  
  - Easter Basin Naval Station (SF)  
  - Simple Beach (LS)
- 🔗 [James's Props – Improved Map Environment](https://libertycity.net/files/gta-san-andreas/209720-jamess-props-improved-map-environment.html)
- 🔗 *Reaper’s Camp* – a **Breaking Bad-inspired** trailer site with realistic detailing

## ⚙️ About Merging

All merging was performed using a **custom script**. The script performs smart collision detection, thanks to that we were able to merge many mapping projects and assure Urbanize compatibility.
If you notice any **object collision**, visual glitch, or bug:
  - **Please report it!**
  - Include a **screenshot** and **exact XYZ coordinates**  
  - We patch bugs quickly and consistently !

## 🛠️ How to Contribute (Add Your Own Props!)

**JOIN OUR DISCORD SERVER: [Invitation](https://discord.gg/4e2PkhYq)**

💬 On this [**Channel**](https://discord.com/channels/689515979847237649/1414178215420760124) you can ask the questions and submit your contributions. 

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

## 🤝 Credits
Special thanks to:  
- **Grinch_, Zeneric** — The GOATS  
- **Reaper** — mapping, creative director  
- **James Harlet** — mapping  
- **LandoF** — mapping  
- **Matslick** — coordination, research
- **mixsylent** - for Objectopia 
- **lanldsd** - for More Vegetation  
- **CatchyKetchup, KaiQ, Davve95** — 2.2 Fixes  


