// rea decompile_all
// name: FUN_00407f54
// address: 0x407f54
// body: available
// range: 0x407f54-0x407fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407f54(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  if (param_3 != 0) {
    do {
      iVar2 = FUN_00407f0d(iVar1,*(undefined4 *)(param_1 + 0x58),param_2 + uVar4,param_4 | 0x100);
      if (iVar2 != 0) {
        return;
      }
      if ((param_4 & 0x10) == 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x38);
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0x3c);
      }
      *(undefined4 *)(param_5 + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}

