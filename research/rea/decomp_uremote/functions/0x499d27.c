// rea decompile_all
// name: FUN_00499d27
// address: 0x499d27
// body: available
// range: 0x499d27-0x499daa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499d27(byte param_1)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  
  if (*(int *)(unaff_EBX + 0xf0) != 0) {
    uVar3 = *(uint *)(unaff_EBX + 0xec);
    uVar1 = *(int *)(unaff_EBX + 0xf0) * 0x14 + uVar3;
    for (; uVar3 < uVar1; uVar3 = uVar3 + 0x14) {
      if ((((*(byte *)(uVar3 + 0x10) & param_1) != 0) && (iVar2 = FUN_0048f4c3(uVar3), iVar2 != 1))
         && ((((*(byte *)(uVar3 + 3) & 0x20) != 0 || (iVar2 == 3)) ||
             ((iVar2 == 0 && (*(int *)(in_EAX + 0x208) == 3)))))) {
        if (*(int *)(uVar3 + 0xc) == 0) {
          FUN_00491216();
        }
        FUN_0049ae2e();
      }
      uVar1 = *(int *)(unaff_EBX + 0xf0) * 0x14 + *(int *)(unaff_EBX + 0xec);
    }
  }
  return;
}

