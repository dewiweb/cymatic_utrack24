// rea decompile_all
// name: FUN_0046d15d
// address: 0x46d15d
// body: available
// range: 0x46d15d-0x46d1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046d15d(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  if ((param_2 <= in_ECX[0xd]) && ((param_2 < in_ECX[0xd] || (param_1 < (uint)in_ECX[0xc])))) {
    *(undefined1 *)(in_ECX + 7) = 0;
    in_ECX[8] = 0;
    in_ECX[0xc] = 0;
    in_ECX[0xd] = 0;
    iVar2 = FUN_005af82d(0x44);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0046cedf(in_ECX[6]);
    }
    iVar1 = in_ECX[0xf];
    if ((iVar1 != iVar2) && (in_ECX[0xf] = iVar2, iVar1 != 0)) {
      if (*(char *)(iVar1 + 3) != '\0') {
        FUN_0046b39b();
      }
      FUN_005af7b6(iVar1);
    }
    (**(code **)(*(int *)in_ECX[1] + 0x58))(in_ECX[10],in_ECX[0xb]);
  }
  (**(code **)(*in_ECX + 0x5c))
            (param_1 - in_ECX[0xc],(param_2 - in_ECX[0xd]) - (uint)(param_1 < (uint)in_ECX[0xc]));
  return 1;
}

