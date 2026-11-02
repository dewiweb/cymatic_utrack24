// rea decompile_all
// name: FUN_004d0a1f
// address: 0x4d0a1f
// body: available
// range: 0x4d0a1f-0x4d0b35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0a1f(void)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined1 *local_44;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_18 [20];
  
  local_44 = (undefined1 *)0x0;
  local_48 = 0x4d0a3f;
  cVar2 = FUN_004f5fce();
  if (cVar2 == '\0') {
    local_50 = *(uint *)(in_ECX + 0x88);
    local_4c = *(undefined4 *)(in_ECX + 0x8c);
    local_48 = *(undefined4 *)(in_ECX + 0x90);
    local_44 = *(undefined1 **)(in_ECX + 0x94);
    FUN_004c6d90();
    FUN_004f899b();
    if (*(int *)(in_ECX + 0x74) == 0) {
      local_44 = (undefined1 *)0x4d0b05;
      piVar4 = (int *)FUN_004c202e();
      if (piVar4 == (int *)0x0) {
        local_44 = (undefined1 *)0x4d0b2d;
        FUN_004c0c1f();
      }
      else {
        local_44 = local_18;
        local_48 = 0x4d0b15;
        (**(code **)(*piVar4 + 4))();
      }
    }
    else {
      uVar1 = *(uint *)(in_ECX + 0x98);
      local_30._1_3_ = (undefined3)((uint)in_ECX >> 8);
      local_30 = CONCAT31(local_30._1_3_,(char)(uVar1 >> 2)) & 0xffffff01;
      local_2c = CONCAT31(local_2c._1_3_,(char)(uVar1 >> 3)) & 0xffffff01;
      local_24._1_3_ = (undefined3)((uint)&local_50 >> 8);
      local_24 = CONCAT31(local_24._1_3_,(char)(uVar1 >> 1)) & 0xffffff01;
      local_28 = CONCAT31(local_28._1_3_,(char)uVar1) & 0xffffff01;
      if (*(int *)(in_ECX + 0x70) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x70) + 8);
      }
      local_44 = (undefined1 *)local_30;
      local_48 = local_2c;
      local_4c = local_28;
      local_50 = local_24;
      FUN_004cf90b(*(undefined4 *)(in_ECX + 0x74),uVar3);
    }
  }
  return;
}

