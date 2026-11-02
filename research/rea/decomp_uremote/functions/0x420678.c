// rea decompile_all
// name: FUN_00420678
// address: 0x420678
// body: available
// range: 0x420678-0x4206f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00420678(int param_1,char param_2,uint param_3,undefined2 *param_4,undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1 + 300;
  if (param_2 == '\0') {
    iVar3 = param_1 + 0xd8;
  }
  if (((*(ushort *)(iVar3 + 0x22) == 0) || (*(int *)(iVar3 + 0x24) == 0)) ||
     (*(ushort *)(param_1 + 0x108) <= param_3)) {
    uVar2 = 0;
    *param_5 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar3 + 0x22);
    if (param_3 < uVar4) {
      puVar1 = (undefined2 *)(*(int *)(iVar3 + 0x24) + param_3 * 4);
      *param_4 = puVar1[1];
      uVar2 = *puVar1;
      param_4 = param_5;
    }
    else {
      *param_4 = *(undefined2 *)(*(int *)(iVar3 + 0x28) + (param_3 - uVar4) * 2);
      uVar2 = *(undefined2 *)(*(int *)(iVar3 + 0x24) + -4 + uVar4 * 4);
      param_4 = param_5;
    }
  }
  *param_4 = uVar2;
  return 0;
}

