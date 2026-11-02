// rea decompile_all
// name: FUN_004b4cc0
// address: 0x4b4cc0
// body: available
// range: 0x4b4cc0-0x4b4e20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4cc0(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int *in_ECX;
  int *piVar8;
  undefined4 *puVar9;
  int local_28;
  int local_24 [2];
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703228;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  if (in_ECX[2] < 1) {
    return;
  }
  local_18 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  do {
    puVar9 = (undefined4 *)(*local_1c + local_18);
    while (iVar5 = FUN_0045c230(*puVar9,uVar4), -1 < iVar5) {
      puVar6 = (undefined4 *)FUN_00635430(&DAT_00c15444);
      local_8 = 0;
      puVar6 = (undefined4 *)FUN_00631550(local_24,iVar5,1,*puVar6);
      uVar3 = *puVar9;
      *puVar9 = *puVar6;
      *puVar6 = uVar3;
      piVar8 = (int *)(local_24[0] + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      local_8 = 0xffffffff;
      piVar8 = (int *)(local_28 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      pbVar7 = (byte *)*puVar9;
      iVar5 = 0;
      while( true ) {
        while( true ) {
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          if (-1 < (char)bVar2) break;
          if ((*pbVar7 & 0xc0) != 0x80) goto LAB_004b4de3;
          do {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
          } while ((*pbVar1 & 0xc0) == 0x80);
          iVar5 = iVar5 + 1;
        }
        if (bVar2 == 0) break;
LAB_004b4de3:
        iVar5 = iVar5 + 1;
      }
      puVar9[1] = iVar5;
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + 0xc;
    if (local_1c[2] <= local_14) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

