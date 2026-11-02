// rea decompile_all
// name: FUN_004cdb62
// address: 0x4cdb62
// body: available
// range: 0x4cdb62-0x4cdbf1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004cdb62(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4cdb6e;
  local_1c = 0;
  puVar4 = &local_1c;
  FUN_00472339(puVar4);
  uVar1 = FUN_00461769(puVar4);
  local_8 = 0;
  puVar5 = local_18;
  FUN_00472339(puVar5);
  uVar2 = FUN_00461769(puVar5);
  puVar5 = local_14;
  local_8._0_1_ = 1;
  FUN_00472339(puVar5);
  uVar3 = FUN_00461769(puVar5);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004e3780(param_2,uVar3,uVar2,uVar1);
  FUN_004652d6();
  FUN_004652d6();
  FUN_004652d6();
  return param_2;
}

