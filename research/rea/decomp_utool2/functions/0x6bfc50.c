// rea decompile_all
// name: FUN_006bfc50
// address: 0x6bfc50
// body: available
// range: 0x6bfc50-0x6bfdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bfc50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int in_ECX;
  int iVar6;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x74);
  uVar2 = *(undefined4 *)(in_ECX + 0x70);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 8))(uVar2,uVar1);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x44))(in_ECX + 0xd0);
  cVar4 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar4 == '\0') && (cVar4 = FUN_00682580(), cVar4 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))(in_ECX + 0x90,&stack0xffffffd4);
  }
  if ((0.0 < *(float *)(in_ECX + 0x78)) && (*(char *)(in_ECX + 0x10f) != '\0')) {
    iVar3 = *(int *)(in_ECX + 0x110);
    if (iVar3 != 0) {
      iVar6 = 0;
      if (*(int *)(iVar3 + 0x1c) < 1) {
        return;
      }
      pcVar5 = (char *)(*(int *)(iVar3 + 0x14) + 0xb);
      while (*pcVar5 == '\0') {
        iVar6 = iVar6 + 1;
        pcVar5 = pcVar5 + 0x10;
        if (*(int *)(iVar3 + 0x1c) <= iVar6) {
          return;
        }
      }
    }
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 0x44))(in_ECX + 0x10c);
    cVar4 = (**(code **)(*(int *)*param_1 + 0x30))();
    if ((cVar4 == '\0') && (cVar4 = FUN_00682580(), cVar4 == '\0')) {
      (**(code **)(*(int *)*param_1 + 0x5c))(in_ECX + 0xb0,&stack0xffffffd0);
    }
  }
  return;
}

