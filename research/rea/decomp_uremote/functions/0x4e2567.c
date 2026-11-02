// rea decompile_all
// name: FUN_004e2567
// address: 0x4e2567
// body: available
// range: 0x4e2567-0x4e25d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e2567(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int unaff_ESI;
  uint local_14;
  
  if ((0 < *(int *)(unaff_ESI + 8)) && (iVar2 = FUN_005af82d(0xfc), iVar2 != 0)) {
    pbVar3 = (byte *)FUN_004c751d();
    local_14 = (uint)((*pbVar3 & 0x70) != 0);
    cVar1 = FUN_004a4bf9(local_14,param_2);
    uVar4 = FUN_004e054f(iVar2,unaff_ESI,0,param_1,'\x01' - (cVar1 != '\0'),local_14,param_2);
    return uVar4;
  }
  return 0;
}

