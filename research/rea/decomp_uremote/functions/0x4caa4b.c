// rea decompile_all
// name: FUN_004caa4b
// address: 0x4caa4b
// body: available
// range: 0x4caa4b-0x4cab03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004caa4b(undefined4 param_1,int *param_2)

{
  int in_ECX;
  undefined1 *puStack_50;
  int *local_4c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0;
  local_14 = 0;
  local_4c = (int *)&DAT_0095dab0;
  puStack_50 = (undefined1 *)0x4caa6e;
  FUN_004721d6();
  local_14 = 1;
  local_4c = (int *)0x4caa7f;
  thunk_FUN_00472232();
  local_4c = (int *)(in_ECX + 8);
  puStack_50 = local_28;
  local_8 = 1;
  FUN_004c902b();
  local_4c = *(int **)(in_ECX + 0x7c);
  puStack_50 = (undefined1 *)0x4caa9e;
  FUN_004ca53d();
  local_4c = (int *)0x0;
  puStack_50 = (undefined1 *)(in_ECX + 0x80);
  local_18 = (undefined1 *)&puStack_50;
  FUN_004d076d();
  FUN_004ca5e6();
  local_4c = (int *)(in_ECX + 0x84);
  puStack_50 = (undefined1 *)0x4caac6;
  FUN_004ca777();
  local_4c = (int *)(in_ECX + 0x78);
  if ((*local_4c != 0) && (param_2 != (int *)0x0)) {
    puStack_50 = local_38;
    local_4c = (int *)(**(code **)(*param_2 + 8))();
    local_8 = CONCAT31(local_8._1_3_,2);
    puStack_50 = (undefined1 *)0x4caae9;
    FUN_004ca4d5();
    local_4c = (int *)0x4caaf1;
    FUN_004615f7();
  }
  local_4c = (int *)0x4caaf9;
  FUN_004722b6();
  return param_1;
}

