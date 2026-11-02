// rea decompile_all
// name: FUN_00470183
// address: 0x470183
// body: available
// range: 0x470183-0x470220 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

facet * FUN_00470183(undefined4 param_1)

{
  facet *pfVar1;
  facet *pfVar2;
  int iVar3;
  undefined1 local_24 [12];
  _Lockit local_18 [4];
  facet *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x47018f;
  std::_Lockit::_Lockit(local_18,0);
  pfVar1 = DAT_0095db58;
  local_8 = 0;
  local_14[0] = DAT_0095db58;
  FUN_004602dd();
  pfVar2 = (facet *)FUN_004603ad();
  if ((pfVar2 == (facet *)0x0) && (pfVar2 = pfVar1, pfVar1 == (facet *)0x0)) {
    iVar3 = FUN_004603ff(local_14,param_1);
    if (iVar3 == -1) {
      FUN_005afc09("bad cast");
      __CxxThrowException_8(local_24,&DAT_00941710);
    }
    pfVar2 = local_14[0];
    DAT_0095db58 = local_14[0];
    std::locale::facet::_Incref(local_14[0]);
    std::locale::facet::facet_Register(pfVar2);
  }
  local_8 = 0xffffffff;
  FUN_005cd2d7();
  return pfVar2;
}

