// rea decompile_all
// name: FUN_00473329
// address: 0x473329
// body: available
// range: 0x473329-0x4733bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00473329(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_20 [3];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x473335;
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 1) {
    FUN_004733d3(&LAB_004f9b63,param_2);
  }
  else if (0 < iVar1) {
    local_14 = param_1 + 0x24;
    FUN_0043e81a(local_20);
    local_8 = 0;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        param_1 = *(int *)((int)local_20[0] + iVar3 * 4);
        if (iVar3 == 0) {
LAB_00473393:
          FUN_004733d3(&LAB_004f9b63,param_2);
        }
        else {
          iVar2 = FUN_00473027(&param_1);
          if (-1 < iVar2) goto LAB_00473393;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    local_8 = 0xffffffff;
    _free(local_20[0]);
  }
  return;
}

