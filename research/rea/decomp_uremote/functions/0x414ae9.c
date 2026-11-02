// rea decompile_all
// name: FUN_00414ae9
// address: 0x414ae9
// body: available
// range: 0x414ae9-0x414b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00414ae9(uint param_1,int param_2,int *param_3,int *param_4)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int *in_EDX;
  int *piVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  uVar4 = 3;
  piVar3 = in_EDX;
  if (param_1 != 0) {
    do {
      if (*piVar3 == param_2) {
        if ((*(uint *)(in_EAX + 8) <= (uint)in_EDX[uVar2 * 4 + 3]) &&
           (iVar1 = FUN_00411095(in_EDX[uVar2 * 4 + 3] - *(uint *)(in_EAX + 8)), iVar1 == 0)) {
          *param_4 = in_EDX[uVar2 * 4 + 2];
          *param_3 = in_EDX[uVar2 * 4 + 1];
          return 0;
        }
        uVar4 = 0x53;
        break;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 < param_1);
  }
  *param_4 = 0;
  return uVar4;
}

