# NsJSON
NSIS JSON plugin, supports writing #, //, /* multi-line comments */ and other comment content in JSON files.

modify from [nsis-json](https://nsis.sourceforge.io/NsJSON_plug-in),
Due to some JSON files containing /* / comment contents, the original version of the NSIS NSJSON plugin cannot correctly parse such JSON files.
This is a source code modified version, which adds support for // and # single-line comments, and / */ multi-line comments. 
It has been tested in the Unicode version of NSIS packaging results and runs properly.