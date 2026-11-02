// rea decompile_all
// name: FUN_004e6245
// address: 0x4e6245
// body: available
// range: 0x4e6245-0x4e62eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e6245(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4e6251;
  local_14[0] = FUN_005af82d(0x14c);
  uVar3 = 0;
  local_8 = 0;
  if (local_14[0] != 0) {
    uVar3 = FUN_004e9394(local_14[0],in_ECX + 4,0);
  }
  local_8 = 0xffffffff;
  iVar1 = thunk_FUN_004c1d58();
  uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 8))(local_14);
  local_8 = 1;
  FUN_004e981e(uVar3,uVar2);
  local_8 = 0xffffffff;
  FUN_004c4d7a();
  FUN_004c1f59(uVar3);
  FUN_004e61f8();
  FUN_004e61f8();
  FUN_004e61f8();
  return uVar3;
}

