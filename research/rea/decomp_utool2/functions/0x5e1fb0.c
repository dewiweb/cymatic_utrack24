// rea decompile_all
// name: FUN_005e1fb0
// address: 0x5e1fb0
// body: available
// range: 0x5e1fb0-0x5e21d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e1fb0(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int *piVar4;
  int local_8;
  
  iVar1 = *(int *)(in_EDX + 0x1c);
  if (iVar1 == 0) {
    return 0xffffff7f;
  }
  FUN_005eae90();
  FUN_005e3110(6);
  FUN_005eae90();
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x18)) {
    do {
      iVar2 = FUN_005e7a20();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x18));
  }
  FUN_005eae90();
  FUN_005eae90();
  FUN_005eae90();
  local_8 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    piVar4 = (int *)(iVar1 + 800);
    do {
      FUN_005eae90();
      if (*(code **)(&PTR_DAT_00b9c314)[*piVar4] == (code *)0x0) {
        return 0xffffffff;
      }
      (**(code **)(&PTR_DAT_00b9c314)[*piVar4])(piVar4[0x40]);
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(int *)(iVar1 + 0x10));
  }
  FUN_005eae90();
  local_8 = 0;
  if (0 < *(int *)(iVar1 + 0x14)) {
    piVar4 = (int *)(iVar1 + 0x520);
    do {
      FUN_005eae90();
      (**(code **)(&PTR_DAT_00b16a2c)[*piVar4])(piVar4[0x40]);
      piVar4 = piVar4 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar1 + 0x14));
  }
  FUN_005eae90();
  local_8 = 0;
  if (0 < *(int *)(iVar1 + 0xc)) {
    piVar4 = (int *)(iVar1 + 0x120);
    do {
      FUN_005eae90();
      (**(code **)(&PTR_PTR_00b75304)[*piVar4])(in_EDX,piVar4[0x40]);
      piVar4 = piVar4 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar1 + 0xc));
  }
  FUN_005eae90();
  local_8 = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    do {
      FUN_005eae90();
      FUN_005eae90();
      FUN_005eae90();
      FUN_005eae90();
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar1 + 8));
  }
  FUN_005eae90();
  return 0;
}

