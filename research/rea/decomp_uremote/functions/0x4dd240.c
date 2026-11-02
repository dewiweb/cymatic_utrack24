// rea decompile_all
// name: FUN_004dd240
// address: 0x4dd240
// body: available
// range: 0x4dd240-0x4dd3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004dd240(undefined4 param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 *local_94;
  undefined *local_8c [5];
  undefined1 local_78 [32];
  undefined1 local_58 [48];
  double local_28;
  undefined1 *local_20;
  float local_1c;
  float local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x4dd24c;
  local_8c[0] = (undefined *)0x4dd254;
  fVar1 = (float10)FUN_00476383();
  local_18 = (float)fVar1;
  local_8c[0] = (undefined *)0x4dd25f;
  fVar1 = (float10)FUN_00476367();
  local_1c = (float)fVar1;
  local_8c[0] = (undefined *)0x0;
  local_20 = (undefined1 *)&local_98;
  local_a0 = (undefined1 *)&local_98;
  local_94 = (undefined1 *)0x0;
  local_9c = 0x3e800000;
  uStack_a4 = 0x4dd28c;
  FUN_00476535();
  local_20 = (undefined1 *)&uStack_a4;
  local_9c = 0;
  local_a0 = (undefined1 *)0x0;
  FUN_004764ae(&uStack_a4,0x3e4ccccd);
  local_8c[0] = (undefined *)FUN_00476850(local_78);
  local_8 = 0;
  local_94 = (undefined1 *)0x4dd2c2;
  FUN_0047ce07();
  local_8 = 0xffffffff;
  local_8c[0] = (undefined *)0x4dd2ce;
  FUN_004768de();
  local_8c[0] = &DAT_0095d798;
  local_94 = (undefined1 *)0x4dd2de;
  FUN_0047d2ae();
  local_20 = (undefined1 *)local_8c;
  local_94 = (undefined1 *)local_8c;
  local_28 = (double)(local_1c * 0.4);
  local_1c = local_18 * local_1c * 0.4 * local_18;
  local_98 = 0x4dd30e;
  FUN_0047620f();
  FUN_0047cda7();
  local_94 = local_58;
  local_8c[0] = (undefined *)((param_3 - 1.6) / param_3);
  local_98 = 0x3f800000;
  local_9c = 0;
  local_a0 = (undefined1 *)0x4dd349;
  FUN_00477188();
  local_98 = 0x4dd351;
  local_8c[0] = (undefined *)FUN_0047734d();
  local_94 = (undefined1 *)0x4dd360;
  FUN_0047badf();
  local_94 = (undefined1 *)param_1;
  local_98 = 0x4dd36b;
  FUN_0047d2d0();
  local_94 = (undefined1 *)local_8c;
  local_98 = 0x4dd389;
  FUN_0047620f();
  FUN_0047cda7();
  local_8c[0] = &DAT_0095d798;
  local_94 = (undefined1 *)0x4dd39f;
  FUN_0047badf();
  local_94 = (undefined1 *)param_1;
  local_98 = 0x4dd3aa;
  FUN_0047d2d0();
  return;
}

