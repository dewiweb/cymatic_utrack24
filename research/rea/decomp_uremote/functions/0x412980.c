// rea decompile_all
// name: FUN_00412980
// address: 0x412980
// body: available
// range: 0x412980-0x412a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00412980(int param_1,int *param_2,int param_3,undefined1 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  
  iVar2 = *param_2;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == param_2[1]) &&
     (uVar4 = iVar2 - *(int *)(param_1 + 0x18), uVar4 < *(uint *)(param_1 + 0x1c))) {
    pcVar5 = (char *)((uVar4 + 2) * 0x10 + param_1);
    if (*(int *)(pcVar5 + 0xc) != 0) {
      return 1;
    }
    if (*pcVar5 != -1) {
      return 1;
    }
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    iVar3 = *(int *)(param_3 + 0x30);
    uVar4 = 4;
    while ((iVar7 = FUN_0041273c(iVar2,&local_8), iVar7 != 0 && (iVar7 == 0x40))) {
      uVar6 = FUN_0041216b(iVar3,uVar4);
      if ((uVar6 != 0) && (param_4 != (undefined1 *)0x0)) {
        *param_4 = 1;
      }
      if (uVar6 == 0) break;
      if ((uVar6 == uVar4) &&
         ((uVar4 = uVar4 * 2, uVar4 < uVar6 || (*(uint *)(iVar3 + 0x14) < uVar4)))) {
        uVar4 = *(uint *)(iVar3 + 0x14);
      }
    }
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -1;
    if (iVar7 == 0) {
      piVar1 = (int *)(*(int *)(param_3 + 0x30) + 0x10);
      *piVar1 = *piVar1 + local_8;
      return 1;
    }
  }
  return 0;
}

