const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#131219", /* black   */
  [1] = "#8B78AF", /* red     */
  [2] = "#6F93CC", /* green   */
  [3] = "#73B1C3", /* yellow  */
  [4] = "#7DB8CF", /* blue    */
  [5] = "#8E93BA", /* magenta */
  [6] = "#84A7C7", /* cyan    */
  [7] = "#c2dce4", /* white   */

  /* 8 bright colors */
  [8]  = "#879a9f",  /* black   */
  [9]  = "#8B78AF",  /* red     */
  [10] = "#6F93CC", /* green   */
  [11] = "#73B1C3", /* yellow  */
  [12] = "#7DB8CF", /* blue    */
  [13] = "#8E93BA", /* magenta */
  [14] = "#84A7C7", /* cyan    */
  [15] = "#c2dce4", /* white   */

  /* special colors */
  [256] = "#131219", /* background */
  [257] = "#c2dce4", /* foreground */
  [258] = "#c2dce4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
