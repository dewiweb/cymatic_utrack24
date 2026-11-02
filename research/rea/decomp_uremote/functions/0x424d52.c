// rea decompile_all
// name: FUN_00424d52
// address: 0x424d52
// body: available
// range: 0x424d52-0x424e24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00424d52(int param_1,undefined4 param_2,char param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  uVar2 = FUN_0041148f();
  if (local_8 == 0) {
    *(uint *)(param_1 + 0x18) = uVar2;
    if (param_3 != '\0') {
      uVar3 = FUN_00411976(4,0,&local_8);
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      if (local_8 != 0) {
        return local_8;
      }
    }
    uVar3 = FUN_00411976(2,0,&local_8);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    if ((local_8 == 0) && (local_8 = FUN_004111b5(), local_8 == 0)) {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = FUN_00411277();
          *(undefined2 *)(*(int *)(param_1 + 0x20) + uVar5 * 2) = uVar1;
          if (param_3 != '\0') {
            uVar4 = FUN_00411277();
            *(uint *)(*(int *)(param_1 + 0x1c) + uVar5 * 4) =
                 (uVar4 & 0xffff) + *(int *)(param_1 + 8);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      FUN_00411249();
    }
  }
  return local_8;
}

