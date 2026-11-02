// rea decompile_all
// name: FUN_005722d0
// address: 0x5722d0
// body: available
// range: 0x5722d0-0x572455 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005722d0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_8c [12];
  undefined1 local_80 [16];
  undefined1 local_70 [92];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4cc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (*(short *)(in_ECX + -0x96) == 0) {
    local_14 = 0x15;
  }
  else {
    FUN_00512300();
    local_8 = 0;
    uVar2 = (uint)*(ushort *)(in_ECX + -0x20);
    uVar3 = (**(code **)(*(int *)(*(int *)(in_ECX + -0xbc) + 0x28 +
                                 *(int *)(*(int *)(*(int *)(in_ECX + -0xbc) + 0x28) + 0xc)) + 0x98))
                      (local_8c,uVar2);
    FUN_00503c30(uVar3,uVar2);
    cVar1 = FUN_0056ca40(local_70,local_80,in_ECX + -0xa0,*(undefined4 *)(in_ECX + -0xe4));
    if (cVar1 != '\0') {
      cVar1 = FUN_00529f40(local_70,0);
      if (cVar1 == '\0') {
        local_14 = 1;
      }
    }
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  FUN_0054f6f0();
  ExceptionList = local_10;
  return local_14;
}

