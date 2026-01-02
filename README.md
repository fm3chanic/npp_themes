## fm3chanic Themes for Notepad++

This repository contains all color themes for Notepad++ I've created so far.<br>
Themes which have been created during my project of color theming Vtubers are in the directory "vtuber_project". The directory "other" contains all color themes which where created outside of the project.

**[HTML Reference Sheets & Galery Non-Project Themes](https://github.com/fm3chanic/color_schemes)**<br>
**[Vtuber Project | Information & Galery](https://github.com/fm3chanic/vtuber_project)**

### Installation:

To install a theme download the XML file or copy the content in your text editor of choice and save it as XML. 
Copy the XML file in one of the directories below:

`C:\Users\YourUserName\AppData\Roaming\Notepad++\themes`

for a local installation

***OR***

`C:\Program Files\Notepad++\themes`

for a machine wide installation (admin rights might be required)

> [!NOTE]
> The themes come **without** a general font and font size setting.
> You need to setup a font and font size of your liking in the "Default Style" area of style settings to make the theme usable.

### Contribution:

The themes are based on the mapped template in directory **/tools**.<br>
The python script (_\[...\](\_load_colors.py)_) reads the colors from an html file from [color_schemes](https://github.com/fm3chanic/color_schemes)
and uses replace to fill in the colors.<br>

If you want to work on colors it makes the most sense to change the colors in repository [color_schemes](https://github.com/fm3chanic/color_schemes) so the changes can be applied on all supported applications.<br>
If you want to work on the mapping of the colors it might make sense to change the base template, so changes can be applied to all themes of this application.<br>

The only exception of this is the gruber-darker theme, which does not follow this standard.<br><br>

Neverless, I also welcome contribution not following my set standard. The standard was made to keep it maintainable for one person not to restrain creativity.<br>