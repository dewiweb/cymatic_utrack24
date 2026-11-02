// rea decompile_all
// name: FUN_004f8b31
// address: 0x4f8b31
// body: available
// range: 0x4f8b31-0x4f8bc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004f8b31(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int local_18;
  int local_14;
  
  local_18 = param_1[2];
  if (in_ECX[1] < in_ECX[2] + local_18) {
    FUN_004f8197();
  }
  local_18 = local_18 + -1;
  if (-1 < local_18) {
    local_14 = 0;
    do {
      iVar3 = *(int *)(local_14 + *param_1);
      iVar1 = in_ECX[2];
      in_ECX[2] = iVar1 + 1;
      iVar2 = *in_ECX;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_005af82d(0x20);
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_004e01f4(iVar3);
        }
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + -1;
      *(undefined4 *)(iVar2 + iVar1 * 4) = uVar4;
    } while (-1 < local_18);
  }
  return;
}

