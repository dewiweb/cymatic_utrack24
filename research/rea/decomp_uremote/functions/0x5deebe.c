// rea decompile_all
// name: Unwind@005deebe
// address: 0x5deebe
// body: available
// range: 0x5deebe-0x5deec2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 Unwind_005deebe(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00467a53();
  iVar2 = DAT_0095db80;
  DAT_0095db84 = DAT_0095db84 + -1;
  if (((DAT_0095db84 == 0) && (DAT_0095db80 != 0)) && (DAT_0095db80 = 0, iVar2 != 0)) {
    FUN_004a2a7e(iVar2);
    FUN_005af7b6(iVar2);
  }
  uVar1 = DAT_0095db7c;
  LOCK();
  DAT_0095db7c = 0;
  UNLOCK();
  return uVar1;
}

