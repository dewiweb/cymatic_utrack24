// rea decompile_all
// name: FUN_005254c0
// address: 0x5254c0
// body: available
// range: 0x5254c0-0x52567a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005254c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_70 [92];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d017f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(*in_ECX + 0x170) == 0) {
    *(undefined4 *)(*in_ECX + 0x170) = 1;
    uVar2 = FUN_0052e6e0();
    *(undefined4 *)(*in_ECX + 0x174) = uVar2;
    FUN_00512300();
    local_8 = 0;
    FUN_00534f00(*in_ECX + 0x74);
    FUN_00529f40(local_70,0);
    local_8 = 0xffffffff;
    FUN_005123f0();
    uVar2 = 0;
  }
  else if (*(int *)(*in_ECX + 0x170) == 1) {
    iVar3 = FUN_0052e6e0();
    if (5000 < (uint)(iVar3 - *(int *)(*in_ECX + 0x174))) {
      *(undefined4 *)(*in_ECX + 0x170) = 0;
    }
    uVar2 = 0;
  }
  else {
    local_14 = FUN_005270a0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    while (local_14 != 0) {
      (*(code *)**(undefined4 **)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 8)))();
      if (*(int *)(local_14 + 0x114) == 0) {
        FUN_00562950();
        FUN_005620b0();
        Sleep(3);
      }
      iVar3 = local_14;
      local_14 = FUN_005270f0(local_14);
      (**(code **)(*(int *)(iVar3 + 0x28 + *(int *)(*(int *)(iVar3 + 0x28) + 8)) + 4))();
    }
    cVar1 = FUN_005263f0();
    if (cVar1 == '\0') {
      FUN_0050b280();
    }
    uVar2 = 1;
  }
  ExceptionList = local_10;
  return uVar2;
}

