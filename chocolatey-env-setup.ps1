#requires -RunAsAdministrator

Set-ExecutionPolicy Bypass -Scope Process
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))

# Install Applications
choco install -y ninja
choco install -y cmake
choco install -y mingw
choco install -y gcc-arm
choco install -y openocd
choco install -y git
choco install -y vscode
