// rea decompile_all
// name: FUN_0047de37
// address: 0x47de37
// body: available
// range: 0x47de37-0x47deda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_0047de37(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  size_t _Size;
  uint uVar4;
  
  FUN_0047dc21(param_3,param_4);
  *param_1 = juce::SoftwarePixelData::vftable;
  param_1[0xb] = 0;
  if (param_2 == 1) {
    iVar2 = 3;
  }
  else {
    iVar2 = ((param_2 != 2) - 1 & 3) + 1;
  }
  param_1[0xc] = iVar2;
  iVar1 = FUN_00439b5a(1);
  uVar4 = iVar1 * iVar2 + 3U & 0xfffffffc;
  param_1[0xd] = uVar4;
  iVar2 = FUN_00439b5a(1);
  _Size = iVar2 * uVar4;
  _free((void *)param_1[0xb]);
  if (param_5 == '\0') {
    pvVar3 = _malloc(_Size);
  }
  else {
    pvVar3 = _calloc(_Size,1);
  }
  param_1[0xb] = pvVar3;
  return param_1;
}

