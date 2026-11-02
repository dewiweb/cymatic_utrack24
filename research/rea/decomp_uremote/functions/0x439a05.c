// rea decompile_all
// name: FUN_00439a05
// address: 0x439a05
// body: available
// range: 0x439a05-0x439a90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00439a05(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_20 [12];
  undefined4 local_14;
  uint local_8;
  undefined4 uStack_4;
  
  iVar1 = param_2;
  uStack_4 = 0x10;
  local_8 = 0x439a11;
  local_14 = 0;
  FUN_0040954d();
  local_8 = 0;
  local_14 = 1;
  piVar2 = (int *)FUN_004c0453();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x7c))(local_20);
    local_8 = 1;
    FUN_004670b0(iVar1);
    local_8 = local_8 & 0xffffff00;
    FUN_004670ed();
  }
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(iVar1 + 8);
  FUN_0046537e(&param_1);
  local_8 = 2;
  thunk_FUN_0046e2c4(&param_1);
  FUN_004652d6();
  return iVar1;
}

