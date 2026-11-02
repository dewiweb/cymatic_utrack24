// rea decompile_all
// name: FUN_004c8695
// address: 0x4c8695
// body: available
// range: 0x4c8695-0x4c87ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c8695(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [20];
  
  FUN_004c2047(&local_28);
  iVar1 = *(int *)(in_ECX + 0xdc);
  if (iVar1 != 4) {
    uVar2 = *(undefined4 *)(in_ECX + 0x104);
    FUN_004c07a1(0x3e99999a);
    FUN_00440367(uVar2);
    FUN_004c07be(0x3e99999a);
    FUN_00440367(uVar2);
    if (iVar1 == 3) {
      FUN_00439b5a((int)(*(int *)(in_ECX + 0x18) + (*(int *)(in_ECX + 0x18) >> 0x1f & 3U)) >> 2);
      FUN_00439b5a((int)(*(int *)(in_ECX + 0x1c) + (*(int *)(in_ECX + 0x1c) >> 0x1f & 3U)) >> 2);
    }
    else if (iVar1 == 2) {
      FUN_004c07be(0x3e800000);
      uVar2 = FUN_00440367(0x10);
      puVar3 = (undefined4 *)FUN_004f5b2d(local_18,uVar2);
      local_28 = *puVar3;
      local_24 = puVar3[1];
      local_20 = puVar3[2];
      local_1c = puVar3[3];
    }
    puVar3 = (undefined4 *)FUN_004f5b45();
    local_28 = *puVar3;
    local_24 = puVar3[1];
    local_20 = puVar3[2];
    local_1c = puVar3[3];
  }
  FUN_0043bc2d();
  return param_1;
}

