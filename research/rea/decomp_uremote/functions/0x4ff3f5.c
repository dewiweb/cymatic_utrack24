// rea decompile_all
// name: FUN_004ff3f5
// address: 0x4ff3f5
// body: available
// range: 0x4ff3f5-0x4ff452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff3f5(int *param_1,int param_2,int param_3)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int local_c;
  int iVar4;
  
  FUN_004a6644(unaff_EBX * in_EAX);
  if (0 < in_EAX) {
    iVar2 = (in_EAX * 4 + -4) * unaff_EBX;
    local_c = in_EAX;
    do {
      puVar1 = (undefined4 *)(*param_1 + iVar2);
      if (0 < unaff_EBX) {
        iVar3 = param_2 - (int)puVar1;
        iVar4 = unaff_EBX;
        do {
          *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
          puVar1 = puVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_2 = param_2 + param_3;
      iVar2 = iVar2 + unaff_EBX * -4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

