# Project Props – Community RC1

**Repository:** [Project Props – Community Open](https://github.com/user-grinch/Project-Props/tree/community-open)

> **Community RC1** is the latest public release of **Project Props**, based on the final community branch by **Zeneric** — now enhanced with [FastLoader](https://github.com/user-grinch/FastLoader) for full **open file structure** support. This makes the mod fully editable, stable, and compatible with other mods.

 

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
- ✅ All `.ipl` files from **v2.2** remain untouched — fully compatible with [Community Fixes](https://libertycity.net/files/gta-san-andreas/221956-project-props-v2-2-fixes.html)
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

 

## ⚙️ About Merging

All merging was performed using a **custom toolchain**:

- 🔁 A mix of **automated scripts** and **manual validation**
- 🧠 The script performs smart detection but has **known limitations**:
  - Large or oddly positioned objects may bypass automatic deduplication due to coordinate system constraints
- 🐞 If you notice any **object collision**, visual glitch, or bug:
  - **Please report it!**  
    Include a **screenshot** and **exact XYZ coordinates**  
    → We patch bugs **quickly and consistently**

 

## 🔍 Stability & Legacy Bugs

- Many **bugs in the original Project Props 2.2** were never fixed
- The **base game (San Andreas)** still has map-related issues that even Proper Fixes doesn’t address
- We manually fix or optimize problematic areas on a rolling basis

 

## 🧪 What’s Next?

Planned improvements:

- 🔄 **Fully proceduralize all rubbish objects** (move to `procobj.dat`)  
  → better performance, compatibility & dynamic spawning
- 🔧 **Ongoing compatibility updates with [Urbanize](https://github.com/)**  
  → we actively test and patch for smooth co-existence

 

### ⚠️ Urbanize Compatibility Note

To ensure **full compatibility with Urbanize**, you **must disable the mailbox IPL**:

> Open the file:  
> `Urbanize/Map/Loader.txt`  
> and comment out the following line by adding a `#` at the start:

```txt
#IPL data\maps\Urbanize - Mails.ipl
```

📌 *This prevents overlapping mailbox props and visual glitches.*  
We may automate this step in a future update.

 

### 🛠️ How to Contribute (Add Your Own Props!)

Want to **add more props or maps** to the project? It's easy — and we **encourage it**!

> 🧰 Use our custom editor:  
> 👉 [Map Editor – by user-grinch](https://github.com/user-grinch/Map-Editor)

**Steps:**

1. Install this mod locally to avoid creating conflicts with existing props  
2. Use the editor to place your objects (IPL-based workflow)  
3. Send us your `.ipl` or `.txt` file for testing  
4. If your submission **passes our quality check**, it will be **officially added to the next release**

✅ **We're especially looking for contributions in:**  
- Rural areas  
- **San Fierro**  
- **Las Venturas**

Help us expand the world — one prop at a time!

 

## 🤝 Credits

Special thanks to:

**@.zeneric @catchyketchup @davve95 @dreamgamernerd @landof. @notgrinch_**  
And to all authors who granted permission to use their mods.

> 💬 *Enjoy modding and keep breaking stuff — responsibly.*
