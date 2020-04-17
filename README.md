# Projet Boule de Neige

Dépôt pour le projet Boule de Neige à l'IUT de Cachan

## Organisation des dossiers

* Dossier `blancClient/include`
* Dossier `blancClient/src`

## Règles à respecter

* Avant de démarrer le projet, vous devez avoir un __clone local__ de votre
repo.
* Chaque fichier `.h` créé doit être placé dans le dossier `blancClient/include`.
* Chaque fichier `.c` créé doit être placé dans le dossier `blancClient/src`.

## Par où commencer

### Comment cloner localement votre repo

* Récupérér le lien de votre repo :
    * Cliquer sur le bouton vert __Clone or download__ et copier l'URL

* Cloner avec __Visual Studio Code__ :
    * Ouvrir Visual Studio Code
    * Appuyer sur `F1`, ensuite taper `clone`, choisissez `Git: Clone`
    * Coller l'URL dans le champ demandé
    * Sauvegarder quelque part (à l'IUT, ce sera dans votre dossier qui est
    dans `C:\Travail`)
    * Cliquer sur `Open Repository`


### Branches, Commits, et Synchronisation
Pas d'explications, il faut pratiquer !

## À la maison

<details>
<summary>Installation pour Windows (<i>cliquer pour développer</i>)</summary>

### Installation des logiciels
Vous devez installer les logiciels qui vous seront utiles pour travailler à
la maison. Dans l'ordre, installer :
* [Git](https://www.git-scm.com/download)
    * __Attention :__
        * laisser le chemin d'installation par défaut `C:\Program Files\Git`
* [Visual Studio Code](https://code.visualstudio.com/download)
    * __Attention :__
        * choisir la version `System Installer - 64 bit`
* [CMake](https://cmake.org/download/)
    * __Attention :__
        * chercher `Windows win64-x64 Installer`
    * __Attention :__
        * veuillez suivre les captures d'écran ci-dessous pour
        installer proprement CMake
<br /><br /><img src="etc/cmake_install_1.png" width=500 align=center>
<br /><br /><img src="etc/cmake_install_2.png" width=500 align=center>
* [MinGW](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)<br />
    * __Attention :__
        * veuillez suivre les captures d'écran ci-dessous pour
        installer proprement MinGW
<br /><br /><img src="etc/mingw_install_1.png" width=600 align=center>
<br /><br /><img src="etc/mingw_install_2.png" width=500 align=center>
* [Ninja](https://github.com/ninja-build/ninja/releases)
    * __Attention :__ Choisir la version `ninja-win.zip`
    * __Attention :__ Décompresser le contenu dans
    `C:\Ninja`
    * __Attention :__ Vérifier bien que l'arborescence soit identique à la capture ci-dessous
    <br /><br /><img src="etc/ninja.jpg" width=550 align=center>

### Modification des variables d'environnement sous Windows
* Taper _variables d'environnement_ sur le bouton _Démarrer_ puis
cliquer sur `Modifier les variables d'environnement système`
* Cliquer sur le bouton `Variables d'environnement ...`
* Dans le champ **_Variables système_**, sélectionner la variable `Path` puis
cliquer sur `Modifier ...`
* Ajouter le chemin vers **_MinGW_** qui est `C:\Program Files\mingw64\bin` en cliquant
successivement sur `Nouveau` et sur `Parcourir ...`
* De même, ajouter le chemin vers _Ninja_ (par exemple : `C:\Ninja`)
    en recliquant successivement sur `Nouveau` et sur `Parcourir ...`
* Cliquer `OK`

### Installation des extensions dans _Visual Studio Code_
* Redémarrer _Visual Studio Code_
* Cloner votre repo
* Accepter toutes les requêtes d'installation d'extensions de
_Visual Studio Code_

### Paramétrage du versionning dans _Visual Studio Code_
* Redémarrer _Visual Studio Code_
* Suivre les captures d'écran ci-dessous pour paramétrer vos
identifiants sur _Visual Studio Code_
<br /><br /><img src="etc/terminal.png" width=700 align=center>
<br /><br /><img src="etc/identifiant-github.png" width=700 align=center>
<br /><br /><img src="etc/email-github.png" width=700 align=center>

</details>
