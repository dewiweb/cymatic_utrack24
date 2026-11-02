// rea decompile_all
// name: FUN_004a8158
// address: 0x4a8158
// body: available
// range: 0x4a8158-0x4a81db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004a8158(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  FUN_00467a53();
  DAT_0095db84 = DAT_0095db84 + 1;
  if (DAT_0095db84 == 1) {
    iVar3 = FUN_005af82d(0x14);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004a293a(iVar3);
    }
    iVar2 = DAT_0095db80;
    if ((DAT_0095db80 != iVar3) && (bVar4 = DAT_0095db80 != 0, DAT_0095db80 = iVar3, bVar4)) {
      FUN_004a2a7e(iVar2);
      FUN_005af7b6(iVar2);
    }
  }
  *param_1 = DAT_0095db80;
  uVar1 = DAT_0095db7c;
  LOCK();
  DAT_0095db7c = 0;
  UNLOCK();
  return uVar1;
}

