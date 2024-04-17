# NsJSON
NSIS JSON plugin, supports writing #, //, /* multi-line comments */ and other comment content in JSON files.

modify from [nsis-json](https://nsis.sourceforge.io/NsJSON_plug-in),
Due to some JSON files containing /* / comment contents, the original version of the NSIS NSJSON plugin cannot correctly parse such JSON files.
This is a source code modified version, which adds support for // and # single-line comments, and / */ multi-line comments. 
It has been tested in the Unicode version of NSIS packaging results and runs properly.

NSIS JSON 插件, 支持在json文件里面存在单行和多行注释，单行注释可以使用#或者//,多行注释使用/* 多行注释内容 */，目前在NSIS打包结果中的Unicode版本测试通过,使用时可能需要最新版本的vc运行时库。