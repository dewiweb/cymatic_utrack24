// rea decompile_all
// name: FUN_10025ba9
// address: 0x10025ba9
// body: available
// range: 0x10025ba9-0x10025d24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_10025ba9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  
  DAT_101603ec = param_3;
  DAT_101603f0 = param_4;
  DAT_101603f4 = param_5;
  DAT_101603f8 = param_6;
  DAT_101603fc = param_3;
  DAT_10160400 = param_4;
  DAT_10160404 = param_5;
  DAT_10160408 = param_6;
  DAT_10166f80 = param_5;
  DAT_10166f84 = param_6;
  _DAT_101670b0 = param_5;
  _DAT_101670b4 = param_6;
  _DAT_101672d0 = param_5;
  _DAT_101672d4 = param_6;
  uVar3 = FUN_100f8660(param_4,param_2);
  uVar2 = (undefined4)uVar3;
  uVar3 = FUN_100f8660(extraout_ECX,(int)(uVar3 >> 0x20));
  _DAT_101674f4 = (undefined4)uVar3;
  _DAT_101674f0 = uVar2;
  _DAT_10167600 = uVar2;
  _DAT_10167604 = _DAT_101674f4;
  _DAT_10167710 = uVar2;
  _DAT_10167714 = _DAT_101674f4;
  if (DAT_10166e5c != 0) {
    uVar3 = FUN_100f8660(extraout_ECX_00,(int)(uVar3 >> 0x20));
    DAT_101603fc = (undefined4)uVar3;
    uVar3 = FUN_100f8660(extraout_ECX_01,(int)(uVar3 >> 0x20));
    DAT_10160400 = (undefined4)uVar3;
    DAT_10160404 = uVar2;
    uVar3 = FUN_100f8660(extraout_ECX_02,(int)(uVar3 >> 0x20));
    DAT_10160408 = (undefined4)uVar3;
  }
  if ((DAT_10166e6c != (CMFCToolBarImages *)0x0) &&
     (dVar1 = 1.0, *(double *)(DAT_10166e6c + 0xb0) == 1.0)) {
    if (DAT_10166c84 != 0) {
      dVar1 = _DAT_10166c7c;
    }
    if (dVar1 == 1.0) {
      *(undefined4 *)(DAT_10166e6c + 0x50) = param_5;
      *(undefined4 *)(DAT_10166e6c + 0x54) = param_6;
    }
    else {
      CMFCToolBarImages::SetTransparentColor(DAT_10166e6c,DAT_10166ab4);
      dVar1 = _DAT_10166c7c;
      if (DAT_10166c84 == 0) {
        dVar1 = 1.0;
      }
      FUN_100823f8(DAT_10166e6c,extraout_EDX,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    }
  }
  return;
}

