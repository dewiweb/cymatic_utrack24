// rea decompile_all
// name: FUN_0065af50
// address: 0x65af50
// body: available
// range: 0x65af50-0x65b10d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065af50(int param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_208 [128];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  piVar5 = local_208;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0x7fffffff;
    piVar5 = piVar5 + 1;
  }
  local_224 = 0;
  if (0 < param_3) {
    do {
      piVar5 = *(int **)(in_ECX + 0x74);
      local_220 = 3;
      bVar1 = *(byte *)(local_224 + param_4);
      uVar8 = (uint)bVar1;
      iVar4 = (in_EDX - (uint)*(byte *)(uVar8 + *piVar5)) * 2;
      iVar2 = (param_1 - (uint)*(byte *)(piVar5[1] + uVar8)) * 3;
      iVar6 = param_2 - (uint)*(byte *)(piVar5[2] + uVar8);
      iVar10 = iVar6 * iVar6 + iVar2 * iVar2 + iVar4 * iVar4;
      piVar5 = local_208;
      local_21c = (iVar4 + 8) * 0x20;
      pbVar11 = param_5;
      do {
        local_218 = 7;
        iVar4 = iVar10;
        local_214 = (iVar2 + 6) * 0x18;
        do {
          iVar9 = 3;
          iVar3 = iVar4;
          iVar7 = (iVar6 + 4) * 0x10;
          do {
            if (iVar3 < *piVar5) {
              *piVar5 = iVar3;
              *pbVar11 = bVar1;
            }
            iVar3 = iVar3 + iVar7;
            piVar5 = piVar5 + 1;
            iVar7 = iVar7 + 0x80;
            pbVar11 = pbVar11 + 1;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
          iVar4 = iVar4 + local_214;
          local_214 = local_214 + 0x120;
          local_218 = local_218 + -1;
        } while (-1 < local_218);
        iVar10 = iVar10 + local_21c;
        local_21c = local_21c + 0x200;
        local_220 = local_220 + -1;
      } while (-1 < local_220);
      local_224 = local_224 + 1;
    } while (local_224 < param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

