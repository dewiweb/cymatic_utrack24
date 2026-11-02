// rea decompile_all
// name: FUN_00432982
// address: 0x432982
// body: available
// range: 0x432982-0x4329fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00432982(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  param_1 = 0;
  param_2 = (**(code **)(param_2 + 0x24))(param_2);
  if (*(int *)(iVar1 + 0x130) == 0) {
    uVar2 = FUN_00411976(0xfc,0,&param_1);
    *(undefined4 *)(iVar1 + 0x130) = uVar2;
    iVar3 = 0;
    if ((param_1 == 0) && (*(int *)(iVar1 + 300) = param_2, 0 < param_2)) {
      iVar4 = 0;
      do {
        *(undefined4 *)(*(int *)(iVar1 + 0x130) + 4 + iVar4) = 4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xfc;
      } while (iVar3 < *(int *)(iVar1 + 300));
    }
  }
  return param_1;
}

