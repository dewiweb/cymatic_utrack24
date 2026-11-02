// rea decompile_all
// name: FUN_0048fc57
// address: 0x48fc57
// body: available
// range: 0x48fc57-0x48fcea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048fc57(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  ushort uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(ushort *)((int)unaff_EBX + 0x4a);
  if ((uVar3 & 0x8000) == 0) {
    if ((uVar3 & 2) != 0) {
      iVar2 = FUN_0048fb63();
      if (iVar2 == 0) {
        *(ushort *)((int)unaff_EBX + 0x4a) = uVar3 | 0x8000;
        FUN_00491371();
        goto LAB_0048fc6c;
      }
    }
    puVar4 = unaff_EBX;
    for (iVar2 = 8; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
    }
    puVar4 = unaff_EBX + 9;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(ushort *)((int)unaff_EBX + 0x4a) = uVar3 | 2;
    iVar2 = FUN_0048fb63();
    if (iVar2 == 0) {
      uVar3 = uVar3 & 0xffbf | 2;
    }
    else {
      uVar3 = uVar3 | 0x42;
    }
    *(ushort *)((int)unaff_EBX + 0x4a) = uVar3;
    uVar1 = 2;
  }
  else {
LAB_0048fc6c:
    uVar1 = 0;
  }
  return uVar1;
}

