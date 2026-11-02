// rea decompile_all
// name: FUN_0054dad0
// address: 0x54dad0
// body: available
// range: 0x54dad0-0x54db8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_0054dad0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  undefined1 uVar1;
  short sVar2;
  int in_ECX;
  int local_10;
  
  sVar2 = FUN_00598020();
  if (sVar2 == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      sVar2 = 0x101;
    }
    else {
      *(int *)(in_ECX + 0xcf8) = param_1;
      (**(code **)(param_2 + 8))(FUN_0054dfd0,FUN_0054df70,*(undefined4 *)(param_2 + 0xc),in_ECX);
      if (in_ECX == 0) {
        local_10 = 0;
      }
      else {
        local_10 = in_ECX + 0x1c;
      }
      uVar1 = FUN_00596bd0(param_2,local_10,param_3,param_4,param_5);
      *(undefined1 *)(in_ECX + 4) = uVar1;
      if (*(char *)(in_ECX + 4) == '\0') {
        sVar2 = 0x101;
      }
      else {
        sVar2 = 0;
      }
    }
  }
  return sVar2;
}

