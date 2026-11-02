// rea decompile_all
// name: FUN_00668530
// address: 0x668530
// body: available
// range: 0x668530-0x66869e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00668530(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  char in_DL;
  int iVar5;
  int iVar6;
  undefined4 *local_c;
  int local_8;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(in_ECX + 4))();
  *(undefined4 **)(in_ECX + 0x188) = puVar1;
  *puVar1 = FUN_00669610;
  puVar1[2] = FUN_006695c0;
  puVar1[0x1c] = 0;
  if (in_DL == '\0') {
    iVar4 = (**(code **)(*(int *)(in_ECX + 4) + 4))();
    puVar1[8] = iVar4;
    puVar1[0xd] = iVar4 + 0x280;
    puVar1[9] = iVar4 + 0x80;
    puVar1[0xe] = iVar4 + 0x300;
    puVar1[10] = iVar4 + 0x100;
    puVar1[0xf] = iVar4 + 0x380;
    puVar1[0xb] = iVar4 + 0x180;
    puVar1[0x10] = iVar4 + 0x400;
    puVar1[0xc] = iVar4 + 0x200;
    puVar1[0x11] = iVar4 + 0x480;
    puVar1[1] = &LAB_00669360;
    puVar1[3] = FUN_00669370;
    puVar1[4] = 0;
    return;
  }
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar2 = (int *)(*(int *)(in_ECX + 0xc4) + 0xc);
    local_c = puVar1 + 0x12;
    do {
      iVar4 = *piVar2;
      iVar5 = iVar4;
      if (*(char *)(in_ECX + 200) != '\0') {
        iVar5 = iVar4 * 3;
      }
      iVar4 = iVar4 + piVar2[5] + -1;
      iVar6 = piVar2[4] + -1 + piVar2[-1];
      uVar3 = (**(code **)(*(int *)(in_ECX + 4) + 0x14))
                        (in_ECX,1,1,iVar6 - iVar6 % piVar2[-1],iVar4 - iVar4 % *piVar2,iVar5);
      piVar2 = piVar2 + 0x15;
      local_8 = local_8 + 1;
      *local_c = uVar3;
      local_c = local_c + 1;
    } while (local_8 < *(int *)(in_ECX + 0x24));
  }
  puVar1[1] = FUN_00669120;
  puVar1[3] = FUN_00668fa0;
  puVar1[4] = puVar1 + 0x12;
  return;
}

