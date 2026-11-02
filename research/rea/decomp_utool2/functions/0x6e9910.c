// rea decompile_all
// name: FUN_006e9910
// address: 0x6e9910
// body: available
// range: 0x6e9910-0x6e9a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e9910(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
    iVar3 = *(int *)(in_ECX + 0xc);
    if (iVar3 == 0) {
      return;
    }
    iVar1 = *(int *)(iVar3 + 0x30);
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar3 + 0x28) + -4 + iVar1 * 4);
    }
    if ((iVar4 != in_ECX) && (iVar4 = FUN_00462660(in_ECX), -1 < iVar4)) {
      iVar5 = -1;
      if (((*(byte *)(in_ECX + 0x69) & 1) == 0) && (iVar5 = iVar1 + -1, 0 < iVar5)) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x28) + iVar5 * 4);
        do {
          if ((*(byte *)(*piVar2 + 0x69) & 1) == 0) break;
          iVar5 = iVar5 + -1;
          piVar2 = piVar2 + -1;
        } while (0 < iVar5);
      }
      FUN_006cfcc0(iVar4,iVar5);
    }
    if ((char)param_1 == '\0') {
      return;
    }
    FUN_006ccad0();
  }
  else {
    piVar2 = (int *)FUN_006d1d80();
    if (piVar2 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar2 + 0x58))(param_1);
    if ((char)param_1 == '\0') {
      return;
    }
    if (DAT_00c8a678 == in_ECX) {
      return;
    }
    iVar3 = DAT_00c8a678;
    if (DAT_00c8a678 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == in_ECX) {
          return;
        }
      } while (iVar3 != 0);
      FUN_006cc500(2,1);
      return;
    }
  }
  FUN_006cc500(2,1);
  return;
}

