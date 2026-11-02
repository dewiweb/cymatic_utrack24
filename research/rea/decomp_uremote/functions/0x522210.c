// rea decompile_all
// name: FUN_00522210
// address: 0x522210
// body: available
// range: 0x522210-0x522456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00522210(void)

{
  undefined4 *in_ECX;
  undefined1 local_80 [7];
  char local_79;
  int local_78;
  int *local_74;
  undefined1 local_70 [40];
  undefined2 local_48;
  undefined4 local_28;
  undefined2 local_24;
  short local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfe2c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[7] != 0) {
    FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    local_74 = (int *)0x0;
    local_18 = 0;
    for (local_78 = FUN_00512850(); local_78 != 0; local_78 = FUN_00512890(local_78)) {
      if ((*(short *)(local_78 + 0x18) != 0) || (*(char *)(local_78 + 0x1a) != '\0')) {
        local_18 = local_18 + 1;
        break;
      }
    }
    if (local_18 == 0) {
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
    else {
      local_14 = 0;
      if (in_ECX[2] == 0) {
        if (in_ECX[1] != 0) {
          local_14 = in_ECX[1];
        }
      }
      else {
        local_14 = 1;
      }
      for (local_78 = FUN_00512850(); local_78 != 0; local_78 = FUN_00512890(local_78)) {
        if ((*(short *)(local_78 + 0x18) != 0) || (*(char *)(local_78 + 0x1a) != '\0')) {
          FUN_0052f300();
          local_24 = 0x37c4;
          local_28 = 0;
          FUN_00503650(local_78 + 0xc);
          local_48 = 0;
          FUN_00522ac0(local_78);
          local_74 = (int *)FUN_0056d060(*in_ECX,*(undefined2 *)(local_78 + 0x18),local_14);
          local_79 = '\0';
          if (local_74 != (int *)0x0) {
            (**(code **)(*local_74 + 0x18))(local_70,local_80,1);
            local_79 = FUN_00529f40(local_70,0);
            (**(code **)(*(int *)((int)local_74 + *(int *)(local_74[10] + 8) + 0x28) + 4))();
            if (local_79 == '\0') break;
            *(undefined2 *)(local_78 + 0x18) = 0;
            *(undefined1 *)(local_78 + 0x1a) = 0;
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_005123f0();
    }
  }
  ExceptionList = local_10;
  return;
}

