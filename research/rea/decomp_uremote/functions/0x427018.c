// rea decompile_all
// name: FUN_00427018
// address: 0x427018
// body: available
// range: 0x427018-0x427259 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00427018(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_ECX;
  char *pcVar9;
  char *pcVar10;
  uint local_24;
  int local_14;
  ushort local_10;
  uint local_c;
  char *local_8;
  
  pcVar2 = *(char **)(param_1 + 0xcc);
  pcVar10 = *(char **)(param_1 + 200);
  iVar6 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  local_8 = pcVar10 + 4;
  local_14 = 0;
  do {
    iVar3 = iVar3 + 1;
    iVar4 = FUN_0040d839(iVar3);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (pcVar2 < local_8) {
      return 0x15;
    }
    puVar5 = (uint *)(*(int *)(iVar6 + 0x58) + local_14);
    puVar5[3] = 0;
    puVar5[2] = 0;
    *(ushort *)(puVar5 + 1) = CONCAT11(*pcVar10,pcVar10[1]);
    pcVar9 = pcVar10 + 4;
    *puVar5 = (uint)CONCAT11(pcVar10[2],pcVar10[3]);
    uVar1 = (ushort)puVar5[1];
    local_c._0_2_ = uVar1 & 1;
    iVar4 = 2;
    if ((uVar1 & 1) != 0) {
      iVar4 = 4;
    }
    local_10 = uVar1 & 8;
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((char)uVar1 < '\0') {
          iVar4 = iVar4 + 8;
        }
      }
      else {
        iVar4 = iVar4 + 4;
      }
    }
    else {
      iVar4 = iVar4 + 2;
    }
    if (pcVar2 < pcVar9 + iVar4) {
      return 0x15;
    }
    if ((ushort)local_c == 0) {
      puVar5[2] = (int)*pcVar9;
      uVar7 = (uint)pcVar10[5];
      pcVar10 = pcVar10 + 6;
      local_8 = local_8 + 6;
    }
    else {
      local_8 = local_8 + 8;
      puVar5[2] = (int)(short)((short)*pcVar9 << 8) | (uint)(byte)pcVar10[5];
      uVar7 = (int)(short)((short)pcVar10[6] << 8) | (uint)(byte)pcVar10[7];
      pcVar10 = pcVar10 + 8;
    }
    local_24 = 0;
    local_c = 0;
    puVar5[3] = uVar7;
    uVar8 = 0x10000;
    uVar7 = 0x10000;
    if (local_10 == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 0x80) == 0) goto LAB_00427202;
        local_8 = local_8 + 4;
        uVar8 = (int)(short)((short)*pcVar10 << 8) | (uint)(byte)pcVar10[1];
        pcVar9 = pcVar10 + 4;
        local_24 = ((int)(short)((short)pcVar10[2] << 8) | (uint)(byte)pcVar10[3]) << 2;
        local_c = ((int)(short)((short)*pcVar9 << 8) | (uint)(byte)pcVar10[5]) << 2;
      }
      else {
        uVar8 = (int)(short)((short)*pcVar10 << 8) | (uint)(byte)pcVar10[1];
        pcVar9 = pcVar10;
      }
      local_8 = local_8 + 4;
      pcVar10 = pcVar9 + 4;
      uVar8 = uVar8 << 2;
      uVar7 = ((int)(short)((short)pcVar9[2] << 8) | (uint)(byte)pcVar9[3]) << 2;
    }
    else {
      local_8 = local_8 + 2;
      uVar8 = ((int)(short)((short)*pcVar10 << 8) | (uint)(byte)pcVar10[1]) << 2;
      uVar7 = uVar8;
      pcVar10 = pcVar10 + 2;
    }
LAB_00427202:
    local_14 = local_14 + 0x20;
    puVar5[4] = uVar8;
    puVar5[5] = local_c;
    puVar5[6] = local_24;
    puVar5[7] = uVar7;
    if ((uVar1 & 0x20) == 0) {
      *(int *)(iVar6 + 0x54) = iVar3;
      iVar6 = FUN_004d021d();
      *(char **)(extraout_ECX + 200) = pcVar10;
      *(char **)(extraout_ECX + 0xa8) = pcVar10 + (iVar6 - (int)pcVar2);
      return 0;
    }
  } while( true );
}

