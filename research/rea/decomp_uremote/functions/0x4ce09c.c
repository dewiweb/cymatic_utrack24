// rea decompile_all
// name: FUN_004ce09c
// address: 0x4ce09c
// body: available
// range: 0x4ce09c-0x4ce159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004ce09c(undefined4 param_1)

{
  int in_ECX;
  undefined1 *puStack_40;
  undefined *local_3c [5];
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0;
  local_14 = 0;
  local_3c[0] = &DAT_0095da3c;
  puStack_40 = (undefined1 *)0x4ce0bf;
  FUN_004721d6();
  local_14 = 1;
  local_3c[0] = (undefined *)0x4ce0d0;
  thunk_FUN_00472232();
  local_3c[0] = (undefined *)(in_ECX + 8);
  puStack_40 = local_28;
  local_8 = 1;
  FUN_004c902b();
  local_3c[0] = (undefined *)(in_ECX + 0xb8);
  puStack_40 = (undefined1 *)0x4ce0ef;
  FUN_004cd92d();
  local_3c[0] = (undefined *)0x4ce0fa;
  FUN_004cdae6();
  local_18 = (undefined1 *)local_3c;
  local_3c[0] = *(undefined **)(in_ECX + 0xc0);
  puStack_40 = (undefined1 *)0x4ce10d;
  FUN_004cda37();
  local_3c[0] = (undefined *)0x0;
  puStack_40 = (undefined1 *)(in_ECX + 0xbc);
  local_18 = (undefined1 *)&puStack_40;
  FUN_004d076d();
  FUN_004cd9d3();
  local_3c[0] = (undefined *)(in_ECX + 0x78);
  puStack_40 = (undefined1 *)0x4ce130;
  FUN_004cdbf2();
  local_3c[0] = (undefined *)(in_ECX + 0x90);
  puStack_40 = (undefined1 *)0x4ce13c;
  FUN_004cdd51();
  local_3c[0] = (undefined *)(in_ECX + 0x94);
  puStack_40 = (undefined1 *)0x4ce148;
  FUN_004cde16();
  local_3c[0] = (undefined *)0x4ce14f;
  FUN_004722b6();
  return param_1;
}

