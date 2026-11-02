// rea decompile_all
// name: FUN_0040d850
// address: 0x40d850
// body: available
// range: 0x40d850-0x40d961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040d850(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  uint in_EDX;
  int iVar4;
  int *local_8;
  
  iVar1 = FUN_00637390();
  iVar4 = (int)in_EDX >> 5;
  if (((int)in_EDX <= in_ECX[6]) && (-1 < (int)in_EDX)) {
    piVar3 = (int *)*in_ECX;
    local_8 = piVar3;
    if (piVar3 == (int *)0x0) {
      local_8 = in_ECX + 1;
    }
    if ((local_8[iVar4] & 1 << (sbyte)(in_EDX & 0x1f)) != 0) {
      if (iVar1 <= param_1) {
        return;
      }
      if (piVar3 == (int *)0x0) {
        piVar3 = in_ECX + 1;
      }
      piVar3[iVar4] = piVar3[iVar4] & ~(1 << (in_EDX & 0x1f));
      if (in_EDX != in_ECX[6]) {
        return;
      }
      iVar1 = FUN_00637300();
      in_ECX[6] = iVar1;
      return;
    }
  }
  if (param_2 <= iVar1) {
    uVar2 = FUN_00637340(0);
    if ((int)in_EDX <= (int)uVar2) {
      uVar2 = FUN_00637300();
    }
    if ((-1 < (int)uVar2) && ((int)uVar2 <= in_ECX[6])) {
      piVar3 = (int *)*in_ECX;
      if (piVar3 == (int *)0x0) {
        piVar3 = in_ECX + 1;
      }
      piVar3[(int)uVar2 >> 5] = piVar3[(int)uVar2 >> 5] & ~(1 << (uVar2 & 0x1f));
      if (uVar2 == in_ECX[6]) {
        iVar1 = FUN_00637300();
        in_ECX[6] = iVar1;
      }
    }
  }
  if (-1 < (int)in_EDX) {
    if (in_ECX[6] < (int)in_EDX) {
      FUN_006264b0(iVar4 + 1);
      in_ECX[6] = in_EDX;
    }
    piVar3 = (int *)*in_ECX;
    if (piVar3 == (int *)0x0) {
      piVar3 = in_ECX + 1;
    }
    piVar3[iVar4] = piVar3[iVar4] | 1 << (in_EDX & 0x1f);
  }
  return;
}

