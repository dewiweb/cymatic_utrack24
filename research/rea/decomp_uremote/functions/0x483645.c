// rea decompile_all
// name: FUN_00483645
// address: 0x483645
// body: available
// range: 0x483645-0x4836ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00483645(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x15c);
  *(undefined4 *)(iVar2 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    FUN_0048331c(*(undefined4 *)(iVar2 + 0x48));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      FUN_004831a5((int)(**(short **)(param_2 + iVar4 * 4) >> ((byte)uVar1 & 0x1f)),1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x100));
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(uVar3 + 4) = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      uVar3 = *(int *)(iVar2 + 0x48) + 1U & 7;
      *(int *)(iVar2 + 0x44) = *(int *)(param_1 + 0xbc);
      *(uint *)(iVar2 + 0x48) = uVar3;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}

