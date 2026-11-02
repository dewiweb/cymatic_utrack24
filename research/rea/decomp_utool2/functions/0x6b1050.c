// rea decompile_all
// name: FUN_006b1050
// address: 0x6b1050
// body: available
// range: 0x6b1050-0x6b11cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_006b1050(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *in_ECX;
  int iVar4;
  int *in_EDX;
  uint uVar5;
  int iVar6;
  undefined1 local_18 [20];
  
  uVar5 = 0;
  if ((((*in_EDX <= param_2) && (in_EDX[1] <= param_3)) && (param_2 < in_EDX[2] + *in_EDX)) &&
     (param_3 < in_EDX[3] + in_EDX[1])) {
    piVar1 = (int *)FUN_004107c0(local_18,in_EDX);
    if (((param_2 < *piVar1) || (param_3 < piVar1[1])) ||
       ((piVar1[2] + *piVar1 <= param_2 || (piVar1[3] + piVar1[1] <= param_3)))) {
      iVar4 = 10;
      if (in_EDX[2] / 3 < 10) {
        iVar4 = in_EDX[2] / 3;
      }
      iVar2 = in_EDX[2] / 10;
      if (in_EDX[2] / 10 < iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = param_1[1];
      iVar3 = iVar4;
      if (iVar4 < iVar2) {
        iVar3 = iVar2;
      }
      if ((param_2 < iVar3) && (0 < iVar4)) {
        uVar5 = 1;
      }
      else {
        iVar4 = param_1[3];
        iVar3 = iVar4;
        if (iVar4 < iVar2) {
          iVar3 = iVar2;
        }
        if ((in_EDX[2] - iVar3 <= param_2) && (0 < iVar4)) {
          uVar5 = 4;
        }
      }
      iVar4 = in_EDX[3];
      iVar2 = 10;
      if (iVar4 / 3 < 10) {
        iVar2 = iVar4 / 3;
      }
      iVar3 = *param_1;
      iVar6 = iVar4 / 10;
      if (iVar4 / 10 < iVar2) {
        iVar6 = iVar2;
      }
      iVar2 = iVar3;
      if (iVar3 < iVar6) {
        iVar2 = iVar6;
      }
      if ((param_3 < iVar2) && (0 < iVar3)) {
        *in_ECX = uVar5 | 2;
        return in_ECX;
      }
      iVar2 = param_1[2];
      iVar3 = iVar2;
      if (iVar2 < iVar6) {
        iVar3 = iVar6;
      }
      if ((iVar4 - iVar3 <= param_3) && (0 < iVar2)) {
        uVar5 = uVar5 | 8;
      }
    }
  }
  *in_ECX = uVar5;
  return in_ECX;
}

