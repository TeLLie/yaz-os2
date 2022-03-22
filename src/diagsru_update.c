/** \file ./diagsru_update.c
    \brief Diagnostics: Generated by csvtodiag.tcl from ./sru_update.csv */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <diag-entry.h>
#include "./yaz/diagsru_update.h"
struct yaz_diag_entry yaz_diag_sru_update_tab[] = {

{1, "Invalid component:  record rejected"},
{2, "Invalid component:  component rejected"},
{3, "Invalid component:  warning only"},
{4, "Invalid component:  default value applied"},
{5, "Invalid component:  data corrected by server"},
{6, "Invalid repetition of component: record rejected"},
{7, "Invalid repetition of component: component rejected"},
{8, "Invalid repetition of component: warning only"},
{9, "Missing mandatory element: record rejected"},
{10, "Missing mandatory element: warning only"},
{11, "Missing mandatory element: default value applied"},
{12, "Invalid data structure: record rejected"},
{13, "Invalid data structure: component rejected"},
{14, "Invalid data structure: warning only"},
{15, "Invalid data structure: default value applied"},
{16, "Invalid data structure: data corrected by server"},
{17, "Incorrect element length: record rejected"},
{18, "Incorrect element length : component rejected"},
{19, "Incorrect element length : warning only"},
{20, "Incorrect element length : default value applied"},
{21, "Incorrect element length : data corrected by server"},
{22, "Invalid record identifier : record rejected"},
{23, "Invalid record identifier : warning only"},
{24, "Invalid record identifier : default applied"},
{25, "Invalid record identifier : data corrected by server"},
{26, "Invalid component identifier : record rejected"},
{27, "Invalid component identifier: component rejected"},
{28, "Invalid component identifier: warning only"},
{29, "Invalid component identifier: data corrected by server"},
{30, "Record schema unacceptable: record rejected"},
{31, "Record schema unacceptable: component rejected"},
{32, "Record schema unrecognised: warning only"},
{33, "Record schema unacceptable: record converted"},
{50, "Record not found (replacement or delete)"},
{51, "Component not found (replacement or delete)"},
{52, "Record protected or locked by another user"},
{53, "Cannot delete or replace record or component, authorization failure"},
{54, "Cannot delete or replace record or component without locking first"},
{55, "Cannot process update, incorrect or invalid version"},
{56, "Linked records exist, cannot delete record"},
{57, "Record or component not found, replacement request processed as an insert"},
{58, "Suspect duplicate: record or component insert rejected"},
{59, "Suspect duplicate: warning only"},
{60, "Incoming record matches with database record, records merged"},
{61, "Unspecified database error"},
{62, "Cannot process or store record, insufficent space"},
{63, " 'record' is ignored, while Both 'recordIdentifier' and 'record' were included on a 'delete' action."},
{64, "'recordIdentifier' is ignored, while Both 'recordIdentifier' and 'record' were included on a 'delete' action."},
{65, "Not processed (replace or delete). Record identifier retrieved ore than one record"},
{100, "Invalid action"},
{0, 0}};
const char *yaz_diag_sru_update_str(int code)
{
    return yaz_diag_to_str(yaz_diag_sru_update_tab, code);
}
