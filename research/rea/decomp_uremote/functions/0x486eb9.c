// rea decompile_all
// name: FUN_00486eb9
// address: 0x486eb9
// body: available
// range: 0x486eb9-0x486f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486eb9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_ESI;
  int local_8;
  
  iVar1 = *(int *)(unaff_ESI + 0x184);
  iVar2 = *(int *)(unaff_ESI + 0x118);
  iVar3 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
  local_8 = 0;
  *(int *)(iVar1 + 0x38) = iVar3;
  *(int *)(iVar1 + 0x3c) = iVar3 + *(int *)(unaff_ESI + 0x24) * 4;
  if (0 < *(int *)(unaff_ESI + 0x24)) {
    piVar5 = (int *)(*(int *)(unaff_ESI + 0xc4) + 0xc);
    do {
      iVar4 = (piVar5[6] * *piVar5) / *(int *)(unaff_ESI + 0x118);
      iVar3 = (*(code *)**(undefined4 **)(unaff_ESI + 4))();
      piVar5 = piVar5 + 0x15;
      iVar3 = iVar3 + iVar4 * 4;
      iVar6 = local_8 * 4;
      *(int *)(iVar6 + *(int *)(iVar1 + 0x38)) = iVar3;
      local_8 = local_8 + 1;
      *(int *)(iVar6 + *(int *)(iVar1 + 0x3c)) = iVar3 + (iVar2 + 4) * iVar4 * 4;
    } while (local_8 < *(int *)(unaff_ESI + 0x24));
  }
  return;
}

