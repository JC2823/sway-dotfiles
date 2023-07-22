static const char norm_fg[] = "#c2dce4";
static const char norm_bg[] = "#131219";
static const char norm_border[] = "#879a9f";

static const char sel_fg[] = "#c2dce4";
static const char sel_bg[] = "#6F93CC";
static const char sel_border[] = "#c2dce4";

static const char urg_fg[] = "#c2dce4";
static const char urg_bg[] = "#8B78AF";
static const char urg_border[] = "#8B78AF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
