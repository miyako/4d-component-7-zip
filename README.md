4d-component-7-zip
==================

4D wrapper component to call the 7-zip program

#### Binary version

* macOS

  * ARM: `17.04.arm64_big_sur` bottle from homebrew
  * x68_64: `17.04.catalina` bottle from homebrew

see [here](https://wiki.archlinux.org/title/p7zip#Differences_between_7z,_7za_and_7zr_binaries) on the difference between `7z`, `7za` and `7zr`. the component uses `7za`, the standalone version which supports fewer codecs than `7z`. the main objective for this component is to process .7z files, so we want to keep it simple, no plugins.

* Windows
 
  * z86_64: `19.00-extra` from [7-zip.org](https://www.7-zip.org/download.html)

#### Notes

To download a homebrew bottle (binary) for M1 on an Intel Catalina

```sh
brew fetch p7zip --bottle-tag=arm64_big_sur
```
