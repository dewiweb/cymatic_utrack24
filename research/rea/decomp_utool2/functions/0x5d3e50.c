// rea decompile_all
// name: FUN_005d3e50
// address: 0x5d3e50
// body: available
// range: 0x5d3e50-0x5d4095 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_005d3e50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  longlong lVar6;
  int local_2c;
  uint local_1c;
  int iStack_18;
  uint local_8;
  
  iVar5 = -1;
  iVar1 = *(int *)(in_ECX + 0x1c8);
  FUN_005d4950(0xffffffff,0xffffffff);
  if (-1 < extraout_EDX) {
    local_1c = 0;
    iStack_18 = 0;
    local_8 = 0;
    do {
      lVar6 = CONCAT44(iStack_18,local_1c);
      if ((*(byte *)(local_2c + 5) & 2) != 0) break;
      if (*(int *)(local_2c + 0xe) == iVar1) {
        FUN_005e9f20();
        iVar2 = FUN_005e9d40(1);
        local_1c = local_8;
        while (local_8 = local_1c, iVar2 != 0) {
          iVar3 = iVar5;
          if (0 < iVar2) {
            iVar2 = *(int *)(in_EDX + 0x1c);
            iVar3 = FUN_005eabc0();
            if (iVar3 == 0) {
              for (iVar3 = *(int *)(iVar2 + 8); 1 < iVar3; iVar3 = iVar3 >> 1) {
              }
              iVar3 = FUN_005eabc0();
              if (iVar3 == -1) {
                iVar3 = -0x88;
              }
              else {
                iVar3 = *(int *)(iVar2 + **(int **)(iVar2 + 0x20 + iVar3 * 4) * 4);
              }
            }
            else {
              iVar3 = -0x87;
            }
            if (iVar5 != -1) {
              uVar4 = iVar3 + iVar5 >> 2;
              local_8 = local_1c + uVar4;
              iStack_18 = iStack_18 + (iVar3 + iVar5 >> 0x1f) + (uint)CARRY4(local_1c,uVar4);
            }
          }
          iVar2 = FUN_005e9d40(1);
          iVar5 = iVar3;
          local_1c = local_8;
        }
        uVar4 = *(uint *)(local_2c + 10);
        if ((*(uint *)(local_2c + 6) &
            ((((uint)*(byte *)(local_2c + 0xd) << 8 | (uVar4 & 0xffffff) >> 0x10) << 8 |
             (uVar4 & 0xffff) >> 8) << 8 | (uint)*(byte *)(local_2c + 10))) != 0xffffffff) {
          lVar6 = FUN_005eaad0();
          lVar6 = lVar6 - CONCAT44(iStack_18,local_1c);
          break;
        }
      }
      lVar6 = CONCAT44(iStack_18,local_1c);
      FUN_005d4950(0xffffffff,0xffffffff);
    } while (-1 < extraout_EDX_00);
    if (0 < (int)((ulonglong)lVar6 >> 0x20)) {
      return lVar6;
    }
    if (-1 < lVar6) {
      return lVar6;
    }
  }
  return 0;
}

