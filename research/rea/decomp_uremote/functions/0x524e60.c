// rea decompile_all
// name: FUN_00524e60
// address: 0x524e60
// body: available
// range: 0x524e60-0x525001 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00524e60(undefined4 param_1,int param_2)

{
  undefined4 in_stack_ffffffbc;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  int local_38;
  char local_31;
  uint local_30;
  short local_26;
  undefined1 *local_24;
  ushort local_20;
  ushort local_1e;
  uint local_18;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(uint *)(param_2 + 0x10) & 0xff) == 0x81) {
    local_10 = param_2;
    local_1e = *(ushort *)(param_2 + 0x18);
    local_30 = (uint)local_1e;
    if (local_30 == 0x2203) {
      local_20 = *(ushort *)(param_2 + 0x1a);
      local_18 = (uint)local_20;
      local_24 = (undefined1 *)&local_38;
      local_38 = param_2;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_38._0_2_ = local_20;
      local_31 = FUN_00521430(param_1);
      if (local_31 == '\0') {
        return;
      }
      local_38 = 0x524efa;
      FUN_00526e50();
      return;
    }
    if (local_30 == 0x3030) {
      local_26 = *(short *)(param_2 + 0x1a);
      FUN_00503c60(param_2 + 0x2c);
      FUN_00526ed0(local_26 != 0,0,in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4);
      return;
    }
  }
  local_38 = 0x524f42;
  local_c = FUN_005270a0();
  if (local_c != 0) {
    local_38 = 0x524f6f;
    (*(code *)**(undefined4 **)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 8)))();
  }
  while (local_c != 0) {
    local_38 = param_2;
    FUN_0055d500(&DAT_0095c854,param_1);
    local_8 = local_c;
    local_38 = local_c;
    local_c = FUN_005270f0();
    if (local_c != 0) {
      local_38 = 0x524fd2;
      (*(code *)**(undefined4 **)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 8)))();
    }
    local_38 = 0x524ff7;
    (**(code **)(*(int *)(local_8 + 0x28 + *(int *)(*(int *)(local_8 + 0x28) + 8)) + 4))();
  }
  return;
}

