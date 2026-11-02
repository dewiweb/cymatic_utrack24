// rea decompile_all
// name: FUN_005d1cf0
// address: 0x5d1cf0
// body: available
// range: 0x5d1cf0-0x5d1e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d1cf0(int param_1,double param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  double local_10;
  
  local_10 = 0.0;
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    if (0.0 <= param_2) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x34) < 1) {
LAB_005d1db3:
        iVar1 = *(int *)(param_1 + 0x34);
      }
      else {
        do {
          dVar4 = local_10;
          FUN_005d2e80();
          local_10 = dVar4 + local_10;
          if (param_2 < local_10) goto LAB_005d1db3;
          iVar3 = iVar3 + 1;
          iVar1 = *(int *)(param_1 + 0x34);
        } while (iVar3 < iVar1);
      }
      if (iVar3 != iVar1) {
        FUN_006f5730();
        uVar5 = FUN_006f55df();
        uVar2 = FUN_005d1e10(param_1,uVar5);
        return uVar2;
      }
    }
  }
  return 0xffffff7d;
}

