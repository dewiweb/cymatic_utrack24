// rea decompile_all
// name: FUN_004ff4de
// address: 0x4ff4de
// body: available
// range: 0x4ff4de-0x4ff54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff4de(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  FUN_004a6644(param_4 * in_EAX);
  if (0 < in_EAX) {
    iVar3 = (in_EAX * 4 + -4) * param_4;
    local_8 = in_EAX;
    do {
      iVar2 = *param_1;
      iVar4 = 0;
      if (0 < param_4) {
        do {
          uVar1 = *(undefined1 *)(iVar4 + param_2);
          *(uint *)(iVar2 + iVar3 + iVar4 * 4) =
               CONCAT31(CONCAT21(CONCAT11(uVar1,uVar1),uVar1),uVar1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_4);
      }
      param_2 = param_2 + param_3;
      iVar3 = iVar3 + param_4 * -4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

