// rea decompile_all
// name: FUN_005aace0
// address: 0x5aace0
// body: available
// range: 0x5aace0-0x5aadeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005aace0(undefined1 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  bool bVar3;
  undefined4 local_30;
  undefined4 local_18;
  undefined2 local_8;
  
  if (*(short *)(in_ECX + 0x114) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = **(int **)(in_ECX + 0x110) == 0;
  }
  if (bVar3) {
    uVar1 = 0;
  }
  else {
    local_8 = 0;
    while( true ) {
      local_18 = (undefined4 *)0x0;
      uVar2 = (uint)*(ushort *)(in_ECX + 0x114);
      if (local_8 < uVar2) {
        uVar2 = *(uint *)(in_ECX + 0x110);
        local_18 = *(undefined4 **)(uVar2 + (uint)local_8 * 4);
      }
      local_8 = local_8 + 1;
      if (local_18 == (undefined4 *)0x0) break;
      FUN_00515830();
      if (in_ECX == 0) {
        local_30 = 0;
      }
      else {
        local_30 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0x10);
      }
      (**(code **)*local_18)(local_30,param_1);
      FUN_00515860();
    }
    uVar1 = CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),local_8) >> 8),1);
  }
  return uVar1;
}

