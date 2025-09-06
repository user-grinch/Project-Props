# Project Props 3 Community

**Project Props 3 Community** is the official release, based on the community branch by **Zeneric** which itself was based on [Project Props V2.2 Fixes](https://discord.com/channels/793480791509565440/1081007139314741248) — now enhanced with [FastLoader](https://github.com/user-grinch/FastLoader) for full **open file structure** support.   This makes the mod fully editable, stable, and compatible with other mods. 

With version **3**, the mod is **bigger, more beautiful, and more stable than ever before**.  

## 🫂 First off all: 
💬**JOIN OUR DISCORD SERVER: [Invitation](https://discord.gg/4e2PkhYq)**

On this [**Channel**](https://discord.com/channels/689515979847237649/1412550234432737312) you will get all the support needed, but first read this page!



## ℹ️ You need:
If you start your journey with modding:
- [Essentials Pack](https://www.mixmods.com.br/2019/06/sa-essentials-pack/)

Mandatory:
- [Open Limit Adjuster v1.5.9](https://github.com/GTAmodding/III.VC.SA.LimitAdjuster/releases) - default settings
- [FastLoader](https://github.com/user-grinch/FastLoader/releases) - created specially for Project Props 3 purpose

Highly Recommended, increases stability, when you have other object.dat mods it's mandatory:
- [fastman92 limit adjuster]([https://www.mixmods.com.br/2022/01/fastman92-limit-adjuster/](https://libertycity.net/files/gta-san-andreas/223963-fastman92-limit-adjuster.html))  - use this setting ```Object info entries = 200```

💬 **ONCE AGAIN JOIN OUR DISCORD SERVER: [Invitation](https://discord.gg/4e2PkhYq)**

On this [**Channel**](https://discord.com/channels/689515979847237649/1412550234432737312) you will get all the support needed, but first read this page!

## ✨ Key Features

- ✅ Thanks to the [FastLoader](https://github.com/user-grinch/FastLoader) no crashes with other `.dat` mods (e.g. *Proper Fixes*, *Combat FX Update*)
- ✅ All content from version **2.3** restored
- ✅ Includes **never-published assets** from the original Grinch's repository, added missing **textures** for never published new props
- ✅ All [Community Fixes](https://libertycity.net/files/gta-san-andreas/221956-project-props-v2-2-fixes.html) included
- ✅ Fully compatible with **Urbanize!**
- ✅ No crashes reported during testing
- ✅ Extended Residue Objects functionality (ProjectProps.asi) on all the lamppost and traffic lights
- ✅ Fixed occasionall crash with the script ProjectProps.asi 
- ✅ Fixed **positioning** for hundreds of models, positioning bugs are very rare now
- ✅ **Weeds** optimized by @.zeneric - thousand of automaticly generated weeds models are now merged into batches, to optimise memory usage, it's a technique from modern games
  
<p align="center">
  <img src="https://github.com/user-attachments/assets/204bb565-5bde-4819-9d92-94c1fb7cf329" alt="Project Props Community RC1" />
</p>

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


## ⚠️ Urbanize Compatibility Note

If you prefere Urbanize Mailboxes, Hydrants and Parking Meters - Use default settings
If you want the best experience disable Urbanize Mailboxes, Hydrants and Parking Meters in the modloader/Urbanize/Map/Loader.txt
Delete or #comment those lines:
```ini
IPL data\maps\Urbanize - Mails.ipl
IPL data\maps\Urbanize - Street Side.ipl
```

## ⚠️ Project 2dfx Compatibility Note

For **Project 2dfx**, make sure to **disable loading of all binary IPLs**. If not game will crash.

```ini
LoadAllBinaryIPLs = 0
```

Potential Bugs (it does not happen for everybody!): fter tens of thousands of props (not counted precisely yet), the game starts duplicating objects.  

When combining **Urbanize + Improved Vegetation Distance + Project Props Community**, increasing values in the `[IDE Tweaker]` section causes props to spawn **twice in the same spot** (especially noticeable with breakables like lampposts, fences, etc.).

👉 Don’t worry — the game doesn’t crash (though honestly, it feels like it should).

### ✅ The Key is Balance
- **More draw distance in Project2dfx (only IDE Tweaker) = fewer props you can safely load** in `.ipl` files without triggering duplicates.  
- Everyone needs to find their own **sweet spot** between:
  - total prop count  
  - extended draw distance  

By default, **Project Props Community** ships with settings that leave some spare headroom for additional objects.  

## 🛠️ How to Contribute (Add Your Own Props!)

**JOIN OUR DISCORD SERVER: [Invitation](https://discord.gg/4e2PkhYq)**

💬 On this [**Channel**](https://discord.com/channels/689515979847237649/1412550234432737312) you can ask the questions and submit your contributions. 

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


