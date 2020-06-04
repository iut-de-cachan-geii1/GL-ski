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
la maison. Pour ce faire :
* Taper _powershell_ sur le bouton _Démarrer_,
**faire un clic-droit** sur `Windows PowerShell` puis cliquer
`Exécuter en tant qu'administrateur`
* Taper la 1ère commande suivante dans la fenêtre de commande powershell puis
taper la touche _Entrée_
```powershell
Set-ExecutionPolicy Bypass -Scope Process
```
* Taper la 2ème commande suivante dans la fenêtre de commande powershell puis
taper la touche _Entrée_
```powershell
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
```
* Taper la 3ème commande suivante dans la fenêtre de commande powershell puis
taper la touche _Entrée_
```powershell
choco install -y ninja cmake mingw gcc-arm-embedded git vscode
```

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
