// rea decompile_all
// name: FUN_004a7f13
// address: 0x4a7f13
// body: available
// range: 0x4a7f13-0x4a7f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a7f13(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  
  iVar1 = FUN_005af82d(0x5c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0047571b(iVar1,*in_ECX);
  }
  if ((int)in_ECX[2] < in_ECX[3] + 1) {
    FUN_004f8197();
  }
  iVar1 = in_ECX[3];
  in_ECX[3] = iVar1 + 1;
  *(undefined4 *)(in_ECX[1] + iVar1 * 4) = uVar2;
  return;
}

