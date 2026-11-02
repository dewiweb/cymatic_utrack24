// rea decompile_all
// name: FUN_0049defb
// address: 0x49defb
// body: available
// range: 0x49defb-0x49df5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0049defb(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_18 [4];
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x49df07;
  local_14[0] = 0;
  uVar3 = 0x41700000;
  uVar1 = FUN_0049f73b(0x41700000);
  FUN_0049f5a2(param_2,uVar1,uVar3);
  local_8 = 0;
  piVar2 = (int *)FUN_004a3fa2(local_18,local_14);
  FUN_004652e4(*piVar2 + 8);
  FUN_00474d0f();
  FUN_004c4d7a();
  return param_1;
}

