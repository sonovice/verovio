/////////////////////////////////////////////////////////////////////////////
// Authors:     Laurent Pugin and Rodolfo Zitellini
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// NOTE: this file was generated with the Verovio libmei version and
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_ATT_CLASSES_H__
#define __VRV_ATT_CLASSES_H__

//----------------------------------------------------------------------------

namespace vrv {

enum AttClassId {
    ATT_CLASS_min = 0,
    ATT_NOTATIONTYPE,
    ATT_HARMANL,
    ATT_HARMONICFUNCTION,
    ATT_INTERVALHARMONIC,
    ATT_INTERVALMELODIC,
    ATT_KEYSIGANL,
    ATT_KEYSIGDEFAULTANL,
    ATT_MELODICFUNCTION,
    ATT_PITCHCLASS,
    ATT_SOLFA,
    ATT_ARPEGLOG,
    ATT_BTREMLOG,
    ATT_BEAMPRESENT,
    ATT_BEAMREND,
    ATT_BEAMSECONDARY,
    ATT_BEAMEDWITH,
    ATT_BEAMINGLOG,
    ATT_BEATRPTLOG,
    ATT_CUTOUT,
    ATT_EXPANDABLE,
    ATT_FTREMLOG,
    ATT_GLISSPRESENT,
    ATT_GRACEGRPLOG,
    ATT_GRACED,
    ATT_HAIRPINLOG,
    ATT_HARPPEDALLOG,
    ATT_LVPRESENT,
    ATT_MEASURELOG,
    ATT_METERSIGGRPLOG,
    ATT_NUMBERPLACEMENT,
    ATT_NUMBERED,
    ATT_OCTAVELOG,
    ATT_PEDALLOG,
    ATT_PIANOPEDALS,
    ATT_REHEARSAL,
    ATT_SCOREDEFVISCMN,
    ATT_SLURREND,
    ATT_STEMSCMN,
    ATT_TIEREND,
    ATT_TREMMEASURED,
    ATT_MORDENTLOG,
    ATT_ORNAMPRESENT,
    ATT_ORNAMENTACCID,
    ATT_TURNLOG,
    ATT_CRIT,
    ATT_SOURCE,
    ATT_AGENTIDENT,
    ATT_REASONIDENT,
    ATT_EXTSYM,
    ATT_FACSIMILE,
    ATT_TABULAR,
    ATT_FINGGRPLOG,
    ATT_ACCIDENTALGESTURAL,
    ATT_ARTICULATIONGESTURAL,
    ATT_BENDGES,
    ATT_DURATIONGESTURAL,
    ATT_NOTEGES,
    ATT_SCOREDEFGES,
    ATT_SECTIONGES,
    ATT_TIMESTAMPGESTURAL,
    ATT_TIMESTAMP2GESTURAL,
    ATT_CHORDDEFLOG,
    ATT_CHORDMEMBERLOG,
    ATT_HARMLOG,
    ATT_RECORDTYPE,
    ATT_REGULARMETHOD,
    ATT_LIGATURELOG,
    ATT_MENSURALLOG,
    ATT_MENSURALSHARED,
    ATT_NOTEANLMENSURAL,
    ATT_RESTVISMENSURAL,
    ATT_CHANNELIZED,
    ATT_INSTRUMENTIDENT,
    ATT_MIDIINSTRUMENT,
    ATT_MIDINUMBER,
    ATT_MIDITEMPO,
    ATT_MIDIVALUE,
    ATT_MIDIVALUE2,
    ATT_MIDIVELOCITY,
    ATT_TIMEBASE,
    ATT_SURFACE,
    ATT_ALIGNMENT,
    ATT_ACCIDLOG,
    ATT_ACCIDENTAL,
    ATT_ARTICULATION,
    ATT_ATTACCALOG,
    ATT_AUDIENCE,
    ATT_AUGMENTDOTS,
    ATT_AUTHORIZED,
    ATT_BARLINELOG,
    ATT_BARPLACEMENT,
    ATT_BASIC,
    ATT_BIBL,
    ATT_CALENDARED,
    ATT_CANONICAL,
    ATT_CLASSED,
    ATT_CLEFLOG,
    ATT_CLEFSHAPE,
    ATT_CLEFFINGLOG,
    ATT_COLOR,
    ATT_COLORATION,
    ATT_COORDINATED,
    ATT_CUE,
    ATT_CURVATURE,
    ATT_CURVEREND,
    ATT_CUSTOSLOG,
    ATT_DATAPOINTING,
    ATT_DATABLE,
    ATT_DISTANCES,
    ATT_DOTLOG,
    ATT_DURATIONADDITIVE,
    ATT_DURATIONDEFAULT,
    ATT_DURATIONLOGICAL,
    ATT_DURATIONRATIO,
    ATT_ENCLOSINGCHARS,
    ATT_ENDINGS,
    ATT_EVIDENCE,
    ATT_EXTENDER,
    ATT_EXTENT,
    ATT_FERMATAPRESENT,
    ATT_FILING,
    ATT_GRPSYMLOG,
    ATT_HANDIDENT,
    ATT_HEIGHT,
    ATT_HORIZONTALALIGN,
    ATT_INTERNETMEDIA,
    ATT_JOINED,
    ATT_KEYSIGLOG,
    ATT_KEYSIGDEFAULTLOG,
    ATT_LABELLED,
    ATT_LANG,
    ATT_LAYERLOG,
    ATT_LAYERIDENT,
    ATT_LINELOC,
    ATT_LINEREND,
    ATT_LINERENDBASE,
    ATT_LINKING,
    ATT_LYRICSTYLE,
    ATT_MEASURENUMBERS,
    ATT_MEASUREMENT,
    ATT_MEDIABOUNDS,
    ATT_MEDIUM,
    ATT_MEIVERSION,
    ATT_MENSURLOG,
    ATT_METADATAPOINTING,
    ATT_METERCONFORMANCE,
    ATT_METERCONFORMANCEBAR,
    ATT_METERSIGLOG,
    ATT_METERSIGDEFAULTLOG,
    ATT_MMTEMPO,
    ATT_MULTINUMMEASURES,
    ATT_NINTEGER,
    ATT_NNUMBERLIKE,
    ATT_NAME,
    ATT_NOTATIONSTYLE,
    ATT_NOTEHEADS,
    ATT_OCTAVE,
    ATT_OCTAVEDEFAULT,
    ATT_OCTAVEDISPLACEMENT,
    ATT_ONELINESTAFF,
    ATT_OPTIMIZATION,
    ATT_ORIGINLAYERIDENT,
    ATT_ORIGINSTAFFIDENT,
    ATT_ORIGINSTARTENDID,
    ATT_ORIGINTIMESTAMPLOGICAL,
    ATT_PAGES,
    ATT_PARTIDENT,
    ATT_PITCH,
    ATT_PLACEMENT,
    ATT_PLIST,
    ATT_POINTING,
    ATT_QUANTITY,
    ATT_RANGING,
    ATT_RESPONSIBILITY,
    ATT_SCALABLE,
    ATT_SEQUENCE,
    ATT_SLASHCOUNT,
    ATT_SLURPRESENT,
    ATT_SPACING,
    ATT_STAFFLOG,
    ATT_STAFFDEFLOG,
    ATT_STAFFGROUPINGSYM,
    ATT_STAFFIDENT,
    ATT_STAFFITEMS,
    ATT_STAFFLOC,
    ATT_STAFFLOCPITCHED,
    ATT_STARTENDID,
    ATT_STARTID,
    ATT_STEMS,
    ATT_SYLLOG,
    ATT_SYLTEXT,
    ATT_SYSTEMS,
    ATT_TARGETEVAL,
    ATT_TEMPOLOG,
    ATT_TEXTRENDITION,
    ATT_TEXTSTYLE,
    ATT_TIEPRESENT,
    ATT_TIMESTAMPLOGICAL,
    ATT_TIMESTAMP2LOGICAL,
    ATT_TRANSPOSITION,
    ATT_TUPLETPRESENT,
    ATT_TYPED,
    ATT_TYPOGRAPHY,
    ATT_VERTICALALIGN,
    ATT_VERTICALGROUP,
    ATT_VISIBILITY,
    ATT_VISUALOFFSETHO,
    ATT_VISUALOFFSETTO,
    ATT_VISUALOFFSETVO,
    ATT_VISUALOFFSET2HO,
    ATT_VISUALOFFSET2TO,
    ATT_VISUALOFFSET2VO,
    ATT_VOLTAGROUPINGSYM,
    ATT_WHITESPACE,
    ATT_WIDTH,
    ATT_XY,
    ATT_XY2,
    ATT_NOTEGESTABLATURE,
    ATT_STAFFDEFGESTABLATURE,
    ATT_ALTSYM,
    ATT_ANCHOREDTEXTLOG,
    ATT_CURVELOG,
    ATT_LINELOG,
    ATT_ANNOTVIS,
    ATT_ARPEGVIS,
    ATT_BEAMINGVIS,
    ATT_BEATRPTVIS,
    ATT_CHORDVIS,
    ATT_CLEFFINGVIS,
    ATT_FTREMVIS,
    ATT_FERMATAVIS,
    ATT_FINGGRPVIS,
    ATT_HAIRPINVIS,
    ATT_HARMVIS,
    ATT_KEYSIGVIS,
    ATT_KEYSIGDEFAULTVIS,
    ATT_LINEVIS,
    ATT_MENSURVIS,
    ATT_MENSURALVIS,
    ATT_METERSIGVIS,
    ATT_METERSIGDEFAULTVIS,
    ATT_MULTIRESTVIS,
    ATT_NCVIS,
    ATT_NEUMEVIS,
    ATT_PBVIS,
    ATT_PEDALVIS,
    ATT_SBVIS,
    ATT_SCOREDEFVIS,
    ATT_SECTIONVIS,
    ATT_SPACEVIS,
    ATT_STAFFDEFVIS,
    ATT_STAFFGRPVIS,
    ATT_TUPLETVIS,
    ATT_CLASS_max
};

} // vrv namespace

#endif // __VRV_ATT_CLASSES_H__
