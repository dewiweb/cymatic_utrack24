// rea decompile_all
// name: CMFCPropertyGridCtrl::get_accDescription
// address: 0x1004c423
// body: available
// range: 0x1004c423-0x1004c4ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCPropertyGridCtrl::get_accDescription(struct
   tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMFCPropertyGridCtrl::get_accDescription
          (CMFCPropertyGridCtrl *this,short param_2,undefined4 param_3,int param_4,
          undefined4 param_5,int *param_6)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  undefined4 uStackY_2c;
  int *piStackY_28;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = param_6;
  uStack_4 = 0;
  local_8 = 0x1004c42f;
  ppiVar5 = (int **)auStack_20;
  if (((param_2 == 3) || (param_4 == 0)) && (param_6 != (int *)0x0)) {
    if ((param_2 == 3) && (param_4 == 0)) {
      ppiVar5 = &piStackY_28;
      piStackY_28 = (int *)0x1004c462;
      iVar3 = Ordinal_2();
      *piVar1 = iVar3;
    }
    else if (*(int *)(this + 0x3c4) != 0) {
      piStackY_28 = (int *)0x1004c47e;
      FUN_10006ce0(&param_6,*(short **)(*(int *)(this + 0x3c4) + 0x84));
      local_8 = 0;
      piStackY_28 = param_6;
      ppiVar5 = (int **)&uStackY_2c;
      uStackY_2c = 0x1004c48f;
      iVar3 = Ordinal_4();
      if (iVar3 == 0) {
        ppiVar5[-1] = (int *)0x1004c498;
        iVar3 = FUN_10001120();
      }
      piVar4 = param_6 + -4;
      *piVar1 = iVar3;
      ppiVar5[-1] = (int *)0x1004c4a5;
      FUN_10001030(piVar4);
    }
    lVar2 = 0;
  }
  else {
    lVar2 = -0x7ff8ffa9;
  }
  *(undefined4 *)((int)ppiVar5 + -4) = 0x1004c4ac;
  return lVar2;
}

