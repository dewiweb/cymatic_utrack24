// rea decompile_all
// name: FUN_005572e0
// address: 0x5572e0
// body: available
// range: 0x5572e0-0x5573f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005572e0(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int in_ECX;
  int local_30;
  
  if (((*(char *)(param_1 + 0x78) == 'a') && (*(short *)(param_1 + 0xf2) == 0x81)) &&
     (*(int *)(param_1 + 0xf4) != 0)) {
    sVar1 = FUN_0056f500();
    sVar2 = FUN_0056f500();
    uVar3 = FUN_0056f500();
    if (sVar2 == 0) {
      *(short *)(in_ECX + 0x6c) = sVar1;
    }
    if (*(short *)(in_ECX + 0x6c) == sVar1) {
      if (in_ECX == 0) {
        local_30 = 0;
      }
      else {
        local_30 = in_ECX + 0x60 + *(int *)(*(int *)(in_ECX + 0x60) + 4);
      }
      (**(code **)**(undefined4 **)(in_ECX + 0x68))
                (local_30,sVar2,*(undefined2 *)(in_ECX + 0x6c),uVar3);
    }
    if (sVar2 != 0) {
      FUN_00544580();
    }
  }
  return;
}

