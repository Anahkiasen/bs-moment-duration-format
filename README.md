# bs-moment-duration-format

This package allows you to use [moment-duration-format](https://github.com/jsmreese/moment-duration-format) with [bs-moment](https://github.com/reasonml-community/bs-moment).

## Installation

```
npm install bs-moment bs-moment-duration-format # Or
yarn add bs-moment bs-moment-duration-format
```

Then update your `bsconfig.json` file accordingly:

```json
"bs-dependencies": [
    "...",
    "bs-moment",
    "bs-moment-duration-format"
],
```

## Usage

First you'll need to setup the integration somewhere where it will be executed, this registers the underlying Javascript method with Moment.js:

```reason
DurationFormat.setup();
```

Then in any other file:

```reason
open MomentRe;
open DurationFormat;

duration(30, `seconds) |> format("mm:ss") /* 30 */
duration(30, `seconds) |> formatWithOptions("mm:ss", options(~trim="small", ())) /* 01:30 */
```
