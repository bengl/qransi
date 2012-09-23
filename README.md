# qransi
##### v0.0.1

**qransi** is a tool to generate QR codes for a given set of text. The QR code is rendered as ANSI art sent to stdout.

### Usage

<pre>
$ qransi
usage: qransi [TEXT] ([LEVEL])

Encodes TEXT as a QR code rendered as ANSI art.
Optionally selects error-correction LEVEL (L|M|Q|H). Default is L.
</pre>

### Installation

First, make sure libqrencode is installed on your system. Then do the following:
<pre>
$ ./configure
$ make
$ sudo make install
</pre>

### License (MIT)

Copyright (C) 2012 Bryan English

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.