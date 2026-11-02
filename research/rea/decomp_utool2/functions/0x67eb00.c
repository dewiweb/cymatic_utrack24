// rea decompile_all
// name: FUN_0067eb00
// address: 0x67eb00
// body: available
// range: 0x67eb00-0x67ec5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067eb00(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  uint *puVar6;
  double dVar7;
  double dVar8;
  int local_2c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  FUN_0067f7a0(&local_10);
  local_8 = 0;
  local_14 = 1;
  iVar3 = 0;
  if (1 < *(int *)(in_ECX + 0x1c)) {
    dVar8 = 6755399441055744.0;
    local_18 = 0x10;
    dVar7 = (double)(param_2 + -1);
    do {
      uVar1 = local_10;
      local_2c = SUB84(*(double *)(*(int *)(in_ECX + 0x14) + local_18) * dVar7 + dVar8,0);
      local_2c = local_2c - local_8;
      FUN_0067f7a0(&local_10);
      local_c = 0;
      if (0 < local_2c) {
        uVar2 = local_10 >> 8 & 0xff00ff;
        do {
          iVar3 = (local_c << 8) / local_2c;
          uVar5 = uVar1 & 0xff00ff;
          uVar4 = uVar1 >> 8 & 0xff00ff;
          *(uint *)(param_1 + local_8 * 4) =
               (((uVar2 - uVar4) * iVar3 & 0xffffff00) + uVar4 * 0x100 ^
               (((local_10 & 0xff00ff) - uVar5) * iVar3 >> 8) + uVar5) & 0xff00ff ^
               ((uVar2 - uVar4) * iVar3 & 0xffffff00) + uVar4 * 0x100;
          local_8 = local_8 + 1;
          local_c = local_c + 1;
        } while (local_c < local_2c);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x10;
      iVar3 = local_8;
    } while (local_14 < *(int *)(in_ECX + 0x1c));
  }
  if (iVar3 < param_2) {
    puVar6 = (uint *)(param_1 + iVar3 * 4);
    for (param_2 = param_2 - iVar3; param_2 != 0; param_2 = param_2 + -1) {
      *puVar6 = local_10;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

