// rea decompile_all
// name: FUN_005e5de0
// address: 0x5e5de0
// body: available
// range: 0x5e5de0-0x5e5ed6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005e5de0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *_Dst;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  _Dst = (int *)FUN_004c554b(0x60);
  iVar3 = FUN_005eabc0();
  *_Dst = iVar3;
  iVar3 = FUN_005eabc0();
  _Dst[1] = iVar3;
  iVar3 = FUN_005eabc0();
  _Dst[2] = iVar3;
  iVar3 = FUN_005eabc0();
  _Dst[3] = iVar3;
  iVar3 = FUN_005eabc0();
  _Dst[4] = iVar3;
  iVar3 = FUN_005eabc0();
  iVar3 = iVar3 + 1;
  _Dst[5] = iVar3;
  if ((((0 < *_Dst) && (0 < _Dst[1])) && (0 < _Dst[2])) && (0 < iVar3)) {
    iVar4 = 0;
    if (0 < iVar3) {
      piVar5 = _Dst + 6;
      do {
        iVar3 = FUN_005eabc0();
        *piVar5 = iVar3;
        if (((iVar3 < 0) || (*(int *)(iVar1 + 0x18) <= iVar3)) ||
           ((piVar2 = *(int **)(iVar1 + 0x720 + iVar3 * 4), piVar2[3] == 0 || (*piVar2 < 1))))
        goto LAB_005e5ebd;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < _Dst[5]);
    }
    return _Dst;
  }
LAB_005e5ebd:
  _memset(_Dst,0,0x60);
  FID_conflict__free(_Dst);
  return (int *)0x0;
}

