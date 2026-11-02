// rea decompile_all
// name: FUN_004613f2
// address: 0x4613f2
// body: available
// range: 0x4613f2-0x461476 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004613f2(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *in_ECX;
  undefined1 local_34 [28];
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4613fe;
  iVar1 = (**(code **)(*in_ECX + 0x1c))(param_1);
  if (iVar1 != 0) {
    FUN_00464c3f(local_34);
    local_8 = 0;
    iVar1 = *(int *)(iVar1 + 8);
    FUN_00466d47(iVar1);
    if (0 < iVar1) {
      do {
        FUN_00461916(local_34);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*param_2 + 0x48))(local_18 + 1);
    (**(code **)(*param_2 + 0x14))(7);
    FUN_00464f35();
    local_8 = 0xffffffff;
    FUN_00464cd9(local_34);
  }
  return;
}

