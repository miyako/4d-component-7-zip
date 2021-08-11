4d-component-7-zip
==================

4D wrapper component to call the 7-zip program

#### Binary version

* macOS

  * ARM: `17.04.arm64_big_sur`
  * x68_64: `17.04.catalina`

see [here](https://wiki.archlinux.org/title/p7zip#Differences_between_7z,_7za_and_7zr_binaries) on the difference between `7z`, `7a` and `7zr`. the component uses `7za`, the standalone version which supports fewer codec than `7z`.

#### Notes

To download a homebrew bottle (binary) for M1 on an Intel Catalina

```sh
brew fetch p7zip --bottle-tag=arm64_big_sur
```
