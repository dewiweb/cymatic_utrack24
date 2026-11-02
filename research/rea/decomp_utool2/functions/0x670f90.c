// rea decompile_all
// name: FUN_00670f90
// address: 0x670f90
// body: available
// range: 0x670f90-0x6710ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670f90(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  char in_DL;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_10;
  int local_c;
  
  local_10 = (undefined4 *)(*(code *)**(undefined4 **)(in_ECX + 4))();
  *(undefined4 **)(in_ECX + 0x148) = local_10;
  *local_10 = FUN_00671730;
  if (in_DL == '\0') {
    iVar2 = (**(code **)(*(int *)(in_ECX + 4) + 4))(in_ECX,1,0x500);
    local_10[6] = iVar2;
    local_10[0xb] = iVar2 + 0x280;
    local_10[7] = iVar2 + 0x80;
    local_10[0xc] = iVar2 + 0x300;
    local_10[8] = iVar2 + 0x100;
    local_10[0xd] = iVar2 + 0x380;
    local_10[9] = iVar2 + 0x180;
    local_10[0xe] = iVar2 + 0x400;
    local_10[10] = iVar2 + 0x200;
    local_10[0xf] = iVar2 + 0x480;
    local_10[0x10] = 0;
  }
  else {
    local_c = 0;
    if (0 < *(int *)(in_ECX + 0x3c)) {
      piVar3 = (int *)(*(int *)(in_ECX + 0x44) + 8);
      local_10 = local_10 + 0x10;
      do {
        iVar2 = piVar3[1];
        iVar5 = piVar3[6] + -1 + iVar2;
        iVar4 = piVar3[5] + -1 + *piVar3;
        uVar1 = (**(code **)(*(int *)(in_ECX + 4) + 0x14))
                          (in_ECX,1,0,iVar4 - iVar4 % *piVar3,iVar5 - iVar5 % iVar2,iVar2);
        piVar3 = piVar3 + 0x15;
        *local_10 = uVar1;
        local_10 = local_10 + 1;
        local_c = local_c + 1;
      } while (local_c < *(int *)(in_ECX + 0x3c));
      return;
    }
  }
  return;
}

