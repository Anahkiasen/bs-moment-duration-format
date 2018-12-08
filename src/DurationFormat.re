open MomentRe;

[@bs.deriving abstract]
type options = {
  [@bs.optional]
  decimalSeparator: string,
  [@bs.optional]
  forceLength: bool,
  [@bs.optional]
  grouping: array(int),
  [@bs.optional]
  groupingSeparator: string,
  [@bs.optional]
  largest: int,
  [@bs.optional]
  maxValue: int,
  [@bs.optional]
  minValue: int,
  [@bs.optional]
  precision: int,
  [@bs.optional]
  stopTrim: string,
  [@bs.optional]
  template: string,
  [@bs.optional]
  trim: string,
  [@bs.optional]
  trunc: bool,
  [@bs.optional]
  useGrouping: bool,
  [@bs.optional]
  useLeftUnits: bool,
  [@bs.optional]
  usePlural: bool,
  [@bs.optional]
  userLocale: string,
  [@bs.optional]
  useSignificantDigits: bool,
  [@bs.optional]
  useToLocaleString: bool,
};

let setup = () => [%raw
  "require('moment-duration-format')(require('moment'))"
];

[@bs.send.pipe: Duration.t] external format: string => string = "format";
[@bs.send.pipe: Duration.t]
external formatWithOptions: (string, options) => string = "format";
