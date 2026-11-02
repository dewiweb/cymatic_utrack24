// rea decompile_all
// name: FUN_004a84b0
// address: 0x4a84b0
// body: available
// range: 0x4a84b0-0x4a85ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a84b0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 extraout_ECX;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_10;
  
  _memset(&local_40,0,0x30);
  local_40 = 0x30;
  if (DAT_00c8a698 != (code *)0x0) {
    iVar1 = (*DAT_00c8a698)(param_1,&local_40);
    if (iVar1 != 0) {
      FUN_004a63b0();
      local_10 = 0.0;
      iVar1 = FUN_004a82b0(&local_10);
      if ((iVar1 != 0) && (local_38 == 3)) {
        if ((local_3c != 1) && ((*(int *)(in_ECX + 0x54) != 0 || (*(int *)(in_ECX + 0x50) != 0)))) {
          dVar2 = (double)(ulonglong)local_10._4_4_;
          FUN_006f56f0((undefined4)local_10,local_10._4_4_);
          uVar4 = (undefined4)local_10;
          uVar5 = local_10._4_4_;
          local_10 = dVar2;
          FUN_006f56f0();
          local_10 = local_10 / dVar2;
          uVar3 = FUN_00687700();
          FUN_0068d770(extraout_ECX,uVar3,uVar4,uVar5);
        }
        *(undefined4 *)(in_ECX + 0x50) = local_20;
        *(undefined4 *)(in_ECX + 0x54) = local_1c;
        return 1;
      }
    }
  }
  return 0;
}

