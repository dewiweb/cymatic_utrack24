// rea decompile_all
// name: FUN_005f1da0
// address: 0x5f1da0
// body: available
// range: 0x5f1da0-0x5f1ed8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005f1da0(void)

{
  int *piVar1;
  FILE *_File;
  bool bVar2;
  int iVar3;
  FILE *pFVar4;
  int *in_ECX;
  
  bVar2 = false;
  piVar1 = (int *)*in_ECX;
  if (*piVar1 == 1) {
    return true;
  }
  if (((*piVar1 == 0) && (*(int *)(in_ECX[1] + 0x2e40) == 0)) &&
     (iVar3 = *(int *)(in_ECX[1] + 0x1b8c), iVar3 != 0)) {
    piVar1[9] = iVar3;
    iVar3 = FUN_005efd50(piVar1);
    if (iVar3 == 0) {
      bVar2 = true;
    }
  }
  if (*(int *)(*in_ECX + 0xc) != 0) {
    FUN_005f7e70();
  }
  if (*(int *)(in_ECX[1] + 0x2e40) == 0) {
    if (*(int *)*in_ECX == 0) {
      if (*(int *)(in_ECX[1] + 0x1c60) != 0) {
        FUN_005efe50();
        if (*(int *)*in_ECX != 0) {
          bVar2 = true;
        }
      }
      if (*(code **)(in_ECX[1] + 0x1c6c) != (code *)0x0) {
        (**(code **)(in_ECX[1] + 0x1c6c))();
      }
    }
    if ((*(int *)(*in_ECX + 4) != 0) && (*(int *)(in_ECX[1] + 0x2de0) != 0)) {
      iVar3 = FUN_005f6df0();
      if (iVar3 == 0) {
        if (!bVar2) {
          *(undefined4 *)*in_ECX = 4;
        }
        bVar2 = true;
      }
    }
  }
  if (*(int *)(in_ECX[1] + 0x1c7c) != 0) {
    _File = *(FILE **)(in_ECX[1] + 0x1c7c);
    pFVar4 = (FILE *)___acrt_iob_func(1);
    if (_File != pFVar4) {
      _fclose(_File);
    }
    *(undefined4 *)(in_ECX[1] + 0x1c7c) = 0;
  }
  FUN_005f0e20();
  FUN_005f10a0();
  if (!bVar2) {
    *(undefined4 *)*in_ECX = 1;
  }
  return !bVar2;
}

