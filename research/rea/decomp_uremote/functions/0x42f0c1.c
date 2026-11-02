// rea decompile_all
// name: FUN_0042f0c1
// address: 0x42f0c1
// body: available
// range: 0x42f0c1-0x42f110 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042f0c1(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_14 [4];
  
  uVar1 = 6;
  if (param_2 - 1 < 4) {
    if (param_2 != 0) {
      do {
        uVar3 = FUN_0040d211();
        iVar2 = (int)((ulonglong)uVar3 >> 0x20);
        local_14[iVar2] = (int)uVar3 >> 0x10;
      } while (iVar2 + 1U < param_2);
    }
    uVar1 = FUN_0042efc1(param_1,param_2,local_14);
  }
  return uVar1;
}

