// rea decompile_all
// name: FUN_00459360
// address: 0x459360
// body: available
// range: 0x459360-0x4593d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459360(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (unaff_EDI != 0) {
    uVar5 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0xc) | unaff_EDI;
    uVar4 = uVar5 | 4;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x38) != 0) {
      uVar4 = uVar5;
    }
    FUN_0044e870(uVar4,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 5;
  cVar3 = thunk_FUN_004c1d22();
  if (cVar3 == '\0') {
    FUN_0045bb80();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if ((piVar1 != (int *)0x0) && (pcVar2 = *(code **)(*piVar1 + 8), pcVar2 != guard_check_icall)) {
    (*pcVar2)();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

