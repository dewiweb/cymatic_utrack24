// rea decompile_all
// name: FUN_0042ad5d
// address: 0x42ad5d
// body: available
// range: 0x42ad5d-0x42ae1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042ad5d(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort *in_EDX;
  int unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_28 [2];
  ushort local_20;
  
  puVar6 = local_28;
  iVar4 = 9;
  if ((*(byte *)(unaff_EBX + 0x170) & 1) == 0) {
    uVar1 = *(ushort *)(unaff_EBX + 0x120);
    puVar5 = (undefined4 *)(unaff_EBX + 0x48);
  }
  else {
    uVar1 = *(ushort *)(unaff_EBX + 0x11e);
    puVar5 = (undefined4 *)(unaff_EBX + 0x24);
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (uVar1 < local_20) {
    *in_EDX = uVar1;
    puVar6 = local_28;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_3 = *puVar6;
      puVar6 = puVar6 + 1;
      param_3 = param_3 + 1;
    }
    (**(code **)(unaff_EBX + 0x23c))();
    uVar2 = FUN_0040d230((int)*(short *)(unaff_EBX + 0x12a) << 0x10);
    *param_1 = uVar2;
    uVar3 = FUN_0040d230((int)*(short *)(unaff_EBX + 300) << 0x10);
    *param_2 = uVar3;
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    if (*(char *)(unaff_EBX + 0x231) != '\0') {
      *(undefined4 *)(unaff_EBX + 0xc) = 0x86;
    }
    *in_EDX = 0;
    uVar3 = 1;
  }
  return uVar3;
}

