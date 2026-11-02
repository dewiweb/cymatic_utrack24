// rea decompile_all
// name: FUN_00563b10
// address: 0x563b10
// body: available
// range: 0x563b10-0x563bb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00563b10(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_2 == 1) {
    iVar1 = FUN_00579ad0(param_2[1]);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = (uint)*param_2;
      uVar4 = (uint)param_2[3];
      uVar2 = (uint)param_2[2];
      FUN_00579020(uVar3,uVar2,uVar4);
      uVar2 = FUN_005a22f0(uVar3,uVar2,uVar4);
      if (iVar1 == 0) {
        uVar2 = uVar2 & 0xffffff00;
      }
      else {
        uVar2 = FUN_005a4cb0(param_1,param_3,param_4);
      }
    }
  }
  else {
    uVar2 = (uint)param_2 & 0xffffff00;
  }
  return uVar2;
}

