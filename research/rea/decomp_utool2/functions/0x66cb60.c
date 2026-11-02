// rea decompile_all
// name: FUN_0066cb60
// address: 0x66cb60
// body: available
// range: 0x66cb60-0x66cd0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066cb60(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x4f];
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    FUN_0066cee0();
    FUN_0066cd10();
    if ((char)param_1[0x2c] == '\0') {
      (**(code **)param_1[0x54])(param_1);
      (**(code **)param_1[0x55])(param_1);
      (**(code **)param_1[0x51])(param_1,0);
    }
    (**(code **)param_1[0x56])(param_1);
    (**(code **)param_1[0x57])(param_1,*(undefined1 *)((int)param_1 + 0xb2));
    uVar3 = 0;
    if (1 < *(int *)(iVar1 + 0x18)) {
      uVar3 = 3;
    }
    (**(code **)param_1[0x52])(param_1,uVar3);
    (**(code **)param_1[0x50])(param_1,0);
    *(bool *)(iVar1 + 0xc) = *(char *)((int)param_1 + 0xb2) == '\0';
  }
  else {
    if (iVar2 == 1) {
      FUN_0066cee0();
      FUN_0066cd10();
      if (((param_1[0x4b] != 0) || (param_1[0x4d] == 0)) || (*(char *)((int)param_1 + 0xb1) != '\0')
         ) {
        (**(code **)param_1[0x57])(param_1,1);
        (**(code **)param_1[0x52])(param_1,2);
        *(undefined1 *)(iVar1 + 0xc) = 0;
        goto LAB_0066cce8;
      }
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(undefined4 *)(iVar1 + 0x10) = 2;
    }
    else if (iVar2 != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x30;
      (**(code **)*param_1)(param_1);
      goto LAB_0066cce8;
    }
    if (*(char *)((int)param_1 + 0xb2) == '\0') {
      FUN_0066cee0();
      FUN_0066cd10();
    }
    (**(code **)param_1[0x57])(param_1,0);
    (**(code **)param_1[0x52])(param_1,2);
    if (*(int *)(iVar1 + 0x1c) == 0) {
      (**(code **)(param_1[0x53] + 4))(param_1);
    }
    (**(code **)(param_1[0x53] + 8))(param_1);
    *(undefined1 *)(iVar1 + 0xc) = 0;
  }
LAB_0066cce8:
  *(bool *)(iVar1 + 0xd) = *(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 0x18) + -1;
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 0xc) = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(iVar1 + 0x18);
  }
  return;
}

