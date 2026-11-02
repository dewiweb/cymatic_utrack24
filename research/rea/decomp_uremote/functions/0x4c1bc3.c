// rea decompile_all
// name: FUN_004c1bc3
// address: 0x4c1bc3
// body: available
// range: 0x4c1bc3-0x4c1d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004c1bc3(int param_1,undefined4 param_2,int param_3,char param_4,float param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 8);
  iVar1 = *(int *)(param_3 + 0xc);
  if (param_4 != '\0') {
    FUN_004c2047();
    iVar1 = FUN_004a4c72();
    iVar2 = *(int *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  if ((iVar2 < 1) || (iVar1 < 1)) {
    param_2 = FUN_004c6ae2();
  }
  else {
    iVar2 = FUN_004a8e4a();
    param_5 = (float)iVar1 * param_5;
    iVar1 = FUN_004a8e4a();
    FUN_0047e303(&param_5,((*(byte *)(param_1 + 0x68) & 4) == 0) + '\x01',iVar2);
    FUN_0047cc87();
    if ((iVar2 != *(int *)(param_1 + 0x18)) || (iVar1 != *(int *)(param_1 + 0x1c))) {
      FUN_00477435();
      FUN_0047cd79();
    }
    FUN_0047cd42();
    FUN_004c19f3();
    FUN_0049f50b();
    FUN_0047cca3();
    FUN_004c4d7a();
  }
  return param_2;
}

