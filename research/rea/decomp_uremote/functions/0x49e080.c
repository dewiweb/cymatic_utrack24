// rea decompile_all
// name: FUN_0049e080
// address: 0x49e080
// body: available
// range: 0x49e080-0x49e0d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049e080(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 uVar4;
  
  uVar4 = 0x41200000;
  uVar1 = FUN_0049f814(0x41200000);
  uVar2 = FUN_0049f80e(uVar1);
  FUN_0049f5a2(uVar2,uVar1,uVar4);
  iVar3 = FUN_0049f7d4();
  *unaff_ESI = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  FUN_004c4d7a();
  return;
}

