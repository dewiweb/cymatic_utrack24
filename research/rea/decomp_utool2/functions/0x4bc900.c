// rea decompile_all
// name: FUN_004bc900
// address: 0x4bc900
// body: available
// range: 0x4bc900-0x4bc9e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc900(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  uVar2 = in_ECX[2];
  if (0 < (int)uVar2) {
    while (param_1 != *(int *)(*in_ECX + uVar4 * 4)) {
      uVar4 = uVar4 + 1;
      if ((int)uVar2 <= (int)uVar4) {
        return;
      }
    }
    piVar5 = (int *)0x0;
    if (uVar4 < uVar2) {
      piVar1 = (int *)(*in_ECX + uVar4 * 4);
      if ((int *)*piVar1 != (int *)0x0) {
        piVar5 = (int *)*piVar1;
      }
      in_ECX[2] = uVar2 - 1;
      iVar3 = (uVar2 - 1) - uVar4;
      if (0 < iVar3) {
        FUN_004c1df0(piVar1,piVar1 + 1,iVar3 * 4);
      }
    }
    iVar3 = in_ECX[2];
    if ((iVar3 * 2 < in_ECX[1]) && (iVar3 < in_ECX[1])) {
      FUN_00409cf0(iVar3);
    }
    if (piVar5 != (int *)0x0) {
      if (piVar5[1] != 0) {
        FUN_00415ff0(-(uint)(*piVar5 != 0) & *piVar5 + 8U);
      }
      if ((piVar5[2] != 0) && (piVar5[5] == *(int *)(*(int *)ThreadLocalStoragePointer + 0xc))) {
        glDeleteTextures(1,piVar5 + 2);
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
      }
      FUN_004bfe14(piVar5,0x28);
    }
  }
  return;
}

