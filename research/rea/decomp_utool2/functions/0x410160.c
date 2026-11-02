// rea decompile_all
// name: FUN_00410160
// address: 0x410160
// body: available
// range: 0x410160-0x410251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00410160(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar5;
  int *extraout_ECX_01;
  uint uVar6;
  
  if ((param_2 != param_1 && -1 < param_2 - param_1) && (0 < in_ECX[2])) {
    iVar1 = ((int *)*in_ECX)[in_ECX[2] + -1];
    if ((param_1 < iVar1) && (*(int *)*in_ECX < param_2)) {
      cVar2 = FUN_00410260(param_1 + -1);
      if (iVar1 < param_2) {
        param_2 = iVar1;
      }
      cVar3 = FUN_00410260(param_2);
      uVar6 = in_ECX[2] - 1;
      piVar5 = extraout_ECX;
      if (-1 < (int)uVar6) {
        piVar5 = (int *)(*in_ECX + uVar6 * 4);
        do {
          if (*piVar5 <= param_2) {
            iVar1 = *(int *)(*in_ECX + uVar6 * 4);
            goto joined_r0x004101e5;
          }
          piVar5 = piVar5 + -1;
          uVar6 = uVar6 - 1;
        } while (-1 < (int)uVar6);
      }
LAB_00410203:
      if (cVar2 != '\0') {
        uVar4 = FUN_004f64e0(param_1,piVar5,in_ECX[2],param_1);
        FUN_00410380(uVar4,param_1);
        piVar5 = extraout_ECX_01;
      }
      if (cVar3 != '\0') {
        uVar4 = FUN_004f64e0(param_2,piVar5,in_ECX[2],param_2);
        FUN_00410380(uVar4,param_2);
      }
      FUN_00410130();
    }
  }
  return;
joined_r0x004101e5:
  if (iVar1 < param_1) goto LAB_00410203;
  if (uVar6 < (uint)in_ECX[2]) {
    FUN_00410320(uVar6);
    piVar5 = extraout_ECX_00;
  }
  uVar6 = uVar6 - 1;
  if ((int)uVar6 < 0) goto LAB_00410203;
  iVar1 = *(int *)(*in_ECX + uVar6 * 4);
  goto joined_r0x004101e5;
}

