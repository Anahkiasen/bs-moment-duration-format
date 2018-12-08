open MomentRe;
open Jest;
open Expect;

DurationFormat.setup();

describe("format", () => {
  test("can format duration", () =>
    duration(30, `seconds)
    |> DurationFormat.format("mm:ss")
    |> expect
    |> toEqual("30")
  );

  test("can format with options", () =>
    duration(30, `seconds)
    |> DurationFormat.formatWithOptions(
         "mm:ss",
         DurationFormat.options(~trim="small", ~grouping=[|3|], ()),
       )
    |> expect
    |> toEqual("00:30")
  );
});
