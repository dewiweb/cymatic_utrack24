// rea decompile_all
// name: FUN_00668e00
// address: 0x668e00
// body: available
// range: 0x668e00-0x668f92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00668e00(void)

{
  int iVar1;
  short *psVar2;
  uint in_EAX;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = (in_EAX >> 8) << 8;
  iVar1 = *(int *)(in_ECX + 0x188);
  if ((*(char *)(in_ECX + 200) == '\0') || (*(int *)(in_ECX + 0x8c) == 0)) {
    return (in_EAX >> 8) << 8;
  }
  if (*(int *)(iVar1 + 0x70) == 0) {
    uVar3 = (*(code *)**(undefined4 **)(in_ECX + 4))();
    *(undefined4 *)(iVar1 + 0x70) = uVar3;
  }
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x70) + 8);
    puVar6 = (undefined4 *)(*(int *)(in_ECX + 0xc4) + 0x4c);
    local_14 = 0;
    do {
      psVar2 = (short *)*puVar6;
      if (((((psVar2 == (short *)0x0) || (*psVar2 == 0)) || (psVar2[1] == 0)) ||
          ((psVar2[8] == 0 || (psVar2[0x10] == 0)))) ||
         ((psVar2[9] == 0 ||
          ((psVar2[2] == 0 || (piVar7 = (int *)(*(int *)(in_ECX + 0x8c) + local_14), *piVar7 < 0))))
         )) {
        return (uint)psVar2 & 0xffffff00;
      }
      piVar5[-1] = piVar7[1];
      local_c = local_c & 0xff;
      if (piVar7[1] != 0) {
        local_c = 1;
      }
      *piVar5 = piVar7[2];
      uVar4 = 1;
      if (piVar7[2] == 0) {
        uVar4 = local_c;
      }
      piVar5[1] = piVar7[3];
      if (piVar7[3] != 0) {
        uVar4 = 1;
      }
      piVar5[2] = piVar7[4];
      local_c = 1;
      if (piVar7[4] == 0) {
        local_c = uVar4;
      }
      piVar5[3] = piVar7[5];
      if (piVar7[5] != 0) {
        local_c = 1;
      }
      local_10 = local_10 + 1;
      piVar5 = piVar5 + 6;
      local_14 = local_14 + 0x100;
      puVar6 = puVar6 + 0x15;
    } while (local_10 < *(int *)(in_ECX + 0x24));
  }
  return local_c;
}

