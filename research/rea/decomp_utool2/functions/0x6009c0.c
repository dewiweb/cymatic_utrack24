// rea decompile_all
// name: FUN_006009c0
// address: 0x6009c0
// body: available
// range: 0x6009c0-0x600c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006009c0(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  bool bVar11;
  int local_34;
  char *local_30;
  byte *local_2c;
  int *local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  byte *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ba38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = in_ECX;
  FUN_0045c990(&DAT_00a91a7c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0045c990("CueNote");
  local_8._0_1_ = 1;
  FUN_0045c990("Identifier");
  local_8._0_1_ = 2;
  local_24 = 0;
  pbVar9 = local_18;
  if (0 < in_ECX[2]) {
    bVar11 = in_ECX[2] != 0;
    do {
      if (bVar11) {
        ppuVar10 = (undefined **)(*in_ECX + local_24 * 4);
      }
      else {
        ppuVar10 = &PTR_DAT_00c7ed68;
      }
      puVar4 = *ppuVar10;
      local_20 = (int *)(puVar4 + -8);
      if (local_20 != &DAT_00bfe124) {
        LOCK();
        *local_20 = *local_20 + 1;
        UNLOCK();
      }
      local_8._0_1_ = 3;
      pbVar7 = pbVar9;
      do {
        while( true ) {
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          if (-1 < (char)bVar3) break;
          bVar3 = *pbVar7;
          while ((bVar3 & 0xc0) == 0x80) {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            bVar3 = *pbVar1;
          }
        }
      } while (bVar3 != 0);
      iVar5 = FUN_0045e0d0(puVar4,pbVar9);
      pbVar7 = local_2c;
      if (iVar5 != 0) {
        do {
          while( true ) {
            bVar3 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            if (-1 < (char)bVar3) break;
            bVar3 = *pbVar7;
            while ((bVar3 & 0xc0) == 0x80) {
              pbVar9 = pbVar7 + 1;
              pbVar7 = pbVar7 + 1;
              bVar3 = *pbVar9;
            }
          }
        } while (bVar3 != 0);
        iVar5 = FUN_0045e0d0(puVar4,local_2c);
        pbVar9 = local_18;
        if (iVar5 == 0) {
          if (*local_30 == '\0') {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_0045e080(puVar4,local_30);
          }
          if (-1 < iVar5) {
            FUN_0045c990(&DAT_00a91a9c);
            puVar6 = (undefined4 *)FUN_0062a9c0(&local_34,puVar4,&local_1c);
            iVar5 = FID_conflict__atoi((char *)*puVar6);
            piVar8 = (int *)(local_34 + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar8);
              }
            }
            piVar8 = (int *)(local_1c + -8);
            if (piVar8 != &DAT_00bfe124) {
              LOCK();
              iVar2 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar2 == 0) {
                FID_conflict__free(piVar8);
              }
            }
            if (iVar5 == 0) {
              piVar8 = (int *)(puVar4 + -8);
              if (piVar8 != &DAT_00bfe124) {
                LOCK();
                iVar5 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar5 == 0) {
                  FID_conflict__free(piVar8);
                }
              }
              local_11 = 1;
              goto LAB_00600bf3;
            }
          }
        }
      }
      local_8._0_1_ = 2;
      if (local_20 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *local_20;
        *local_20 = *local_20 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(local_20);
        }
      }
      local_24 = local_24 + 1;
      bVar11 = local_24 < (uint)local_28[2];
      in_ECX = local_28;
    } while ((int)local_24 < local_28[2]);
  }
  local_11 = 0;
LAB_00600bf3:
  piVar8 = (int *)(local_30 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  pbVar9 = pbVar9 + -8;
  if (pbVar9 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar5 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(pbVar9);
    }
  }
  local_2c = local_2c + -8;
  if (local_2c != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar5 = *(int *)local_2c;
    *(int *)local_2c = *(int *)local_2c + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(local_2c);
    }
  }
  ExceptionList = local_10;
  return local_11;
}

