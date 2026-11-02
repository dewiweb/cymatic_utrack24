// rea decompile_all
// name: FUN_004a24d9
// address: 0x4a24d9
// body: available
// range: 0x4a24d9-0x4a280e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a24d9(int param_1)

{
  undefined4 local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  float local_98;
  undefined8 local_94;
  undefined1 local_7c [32];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 *local_3c;
  float local_38;
  undefined4 local_30;
  undefined1 *local_2c;
  float local_28;
  undefined1 *local_1c;
  undefined1 *local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x4a24e5;
  local_1c = (undefined1 *)&local_9c;
  local_a4 = (undefined1 *)&local_9c;
  local_94 = 0.0;
  local_98 = 0.0;
  local_a0 = (undefined1 *)0x0;
  local_a8 = 0x4a2508;
  FUN_0047620f();
  local_1c = (undefined1 *)&local_a8;
  local_a0 = (undefined1 *)0x0;
  local_a4 = (undefined1 *)0x0;
  FUN_004d076d();
  FUN_00476850(local_7c);
  local_8 = 0;
  local_14 = 0.05;
  do {
    local_1c = (undefined1 *)&local_98;
    local_a0 = (undefined1 *)&local_98;
    local_94 = (double)(1.0 - local_14);
    local_9c = (undefined1 *)(local_14 * local_14);
    local_a4 = (undefined1 *)0x4a2563;
    local_18 = local_9c;
    FUN_00476237();
    local_9c = (undefined1 *)0x4a256b;
    FUN_00476966();
    local_14 = local_14 + 0.1;
  } while (local_14 < 1.0);
  local_98 = (float)(*(int *)(param_1 + 4) + 1) * 0.5;
  local_14 = (float)*(int *)(param_1 + 4) + local_98;
  local_1c = (undefined1 *)(float)*(int *)(param_1 + 0xc);
  local_9c = local_4c;
  local_94 = (double)CONCAT44(local_1c,(float)*(int *)(param_1 + 8));
  local_a0 = (undefined1 *)0x4a25d2;
  local_18 = (undefined1 *)local_98;
  FUN_0043bc2d();
  local_a0 = (undefined1 *)0x4a25d9;
  FUN_004a4e0d();
  local_98 = 6.809418e-39;
  FUN_004a4dc9();
  local_94 = (double)CONCAT44(local_14,0x4a25f5);
  FUN_0043bc44();
  local_94 = (double)CONCAT44(local_14,0x4a2607);
  FUN_004a4e2e();
  local_94 = (double)CONCAT44(local_14,0x4a2616);
  FUN_004a4f46();
  local_a0 = (undefined1 *)local_14;
  local_a4 = (undefined1 *)0x4a262d;
  FUN_004a4e8d();
  local_a0 = (undefined1 *)0x3f800000;
  local_a4 = (undefined1 *)0x0;
  local_a8 = 0x3f800000;
  FUN_004a245b();
  local_a0 = (undefined1 *)local_14;
  local_a4 = (undefined1 *)0x4a2662;
  FUN_004a4eea();
  local_a0 = (undefined1 *)0x3f800000;
  local_a4 = (undefined1 *)0x3f800000;
  local_a8 = 0x3f800000;
  FUN_004a245b();
  local_9c = local_2c;
  local_98 = local_28;
  local_a0 = (undefined1 *)0x0;
  local_a4 = (undefined1 *)0x0;
  local_a8 = 0x3f800000;
  FUN_004a245b();
  local_a0 = (undefined1 *)local_14;
  local_a4 = (undefined1 *)0x4a26da;
  FUN_004a4e8d();
  local_a0 = (undefined1 *)0x0;
  local_a4 = (undefined1 *)0x0;
  local_a8 = 0;
  FUN_004a245b();
  local_a0 = (undefined1 *)local_14;
  local_a4 = (undefined1 *)0x4a270f;
  FUN_004a4eea();
  local_a0 = (undefined1 *)0x0;
  local_a4 = (undefined1 *)0x3f800000;
  local_a8 = 0;
  FUN_004a245b();
  local_9c = local_3c;
  local_98 = local_38;
  local_94._4_4_ = (undefined1 *)local_30;
  local_a0 = (undefined1 *)0x3f800000;
  local_a4 = (undefined1 *)0x0;
  local_a8 = 0;
  FUN_004a245b();
  local_a0 = (undefined1 *)local_14;
  local_a4 = (undefined1 *)0x4a2787;
  FUN_004a4e8d();
  local_a0 = (undefined1 *)0x0;
  local_a4 = (undefined1 *)0x0;
  local_a8 = 0;
  FUN_004a245b();
  local_a0 = (undefined1 *)local_14;
  local_a4 = (undefined1 *)0x4a27bc;
  FUN_004a4eea();
  local_a0 = (undefined1 *)0x0;
  local_a4 = (undefined1 *)0x3f800000;
  local_a8 = 0;
  FUN_004a245b();
  local_94._0_4_ = 0x4a27ed;
  FUN_004d076d();
  local_94 = (double)CONCAT44(local_94._4_4_,0x4a27f4);
  FUN_0047cda7();
  local_94._4_4_ = local_5c;
  local_94._0_4_ = 0x4a27ff;
  FUN_0047d180();
  local_94 = (double)CONCAT44(local_94._4_4_,0x4a2807);
  FUN_004768de();
  return;
}

