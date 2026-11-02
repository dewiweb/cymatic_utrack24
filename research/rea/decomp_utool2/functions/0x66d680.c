// rea decompile_all
// name: FUN_0066d680
// address: 0x66d680
// body: available
// range: 0x66d680-0x66d759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066d680(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  FUN_0066e510();
  iVar4 = 0;
  piVar3 = param_1 + 0x12;
  do {
    if (*piVar3 != 0) {
      FUN_0066e2d0();
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 4);
  if (*(char *)((int)param_1 + 0xb1) == '\0') {
    iVar4 = 0;
    piVar3 = param_1 + 0x1a;
    do {
      if (piVar3[-4] != 0) {
        FUN_0066e170(0);
      }
      if (*piVar3 != 0) {
        FUN_0066e170(1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < 4);
  }
  piVar1 = (int *)param_1[6];
  *(undefined1 *)*piVar1 = 0xff;
  *piVar1 = *piVar1 + 1;
  piVar3 = piVar1 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    cVar2 = (*(code *)piVar1[3])(param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  piVar1 = (int *)param_1[6];
  *(undefined1 *)*piVar1 = 0xd9;
  *piVar1 = *piVar1 + 1;
  piVar3 = piVar1 + 1;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    cVar2 = (*(code *)piVar1[3])(param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}

