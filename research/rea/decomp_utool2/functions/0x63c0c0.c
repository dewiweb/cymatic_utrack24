// rea decompile_all
// name: FUN_0063c0c0
// address: 0x63c0c0
// body: available
// range: 0x63c0c0-0x63c25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c0c0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 local_3c;
  int local_38;
  byte *local_34;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  ULONG_PTR local_24 [2];
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071f5ba;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar6 = (byte *)*in_ECX;
  pbVar4 = pbVar6 + -8;
  if (pbVar4 != (byte *)&DAT_00bfe124) {
    LOCK();
    *(int *)pbVar4 = *(int *)pbVar4 + 1;
    UNLOCK();
  }
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 1;
  local_18 = pbVar6;
  EnumWindows(FUN_0063c4f0,(LPARAM)&local_30);
  iVar2 = local_28;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      FID_conflict__free(local_30);
      pbVar6 = pbVar6 + -8;
      if (pbVar6 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar2 = *(int *)pbVar6;
        *(int *)pbVar6 = *(int *)pbVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(pbVar6);
        }
      }
      ExceptionList = local_10;
      return;
    }
    local_3c = 0xc403;
    iVar5 = 0;
    pbVar4 = pbVar6;
    while( true ) {
      while( true ) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        if (-1 < (char)bVar1) break;
        if ((*pbVar4 & 0xc0) != 0x80) goto LAB_0063c161;
        do {
          pbVar7 = pbVar4 + 1;
          pbVar4 = pbVar4 + 1;
        } while ((*pbVar7 & 0xc0) == 0x80);
        iVar5 = iVar5 + 1;
      }
      if (bVar1 == 0) break;
LAB_0063c161:
      iVar5 = iVar5 + 1;
    }
    local_38 = iVar5 * 4 + 4;
    pbVar4 = pbVar6;
    if (*pbVar6 == 0) {
      pbVar4 = &DAT_00bfe234;
    }
    else {
      do {
        while( true ) {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          if (-1 < (char)bVar1) break;
          bVar1 = *pbVar4;
          while ((bVar1 & 0xc0) == 0x80) {
            pbVar7 = pbVar4 + 1;
            pbVar4 = pbVar4 + 1;
            bVar1 = *pbVar7;
          }
        }
      } while (bVar1 != 0);
      pbVar4 = pbVar6 + 1;
      pbVar7 = pbVar6;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      FUN_00455850(pbVar6,uVar3);
      pbVar6 = local_14;
      local_18 = local_14;
      pbVar4 = local_14 + ((uint)(pbVar7 + (4 - (int)pbVar4)) & 0xfffffffc);
      local_1c = pbVar4;
      FUN_0045e390(local_14);
    }
    local_34 = pbVar4;
    SendMessageTimeoutW(*(HWND *)((int)local_30 + iVar2 * 4),0x4a,DAT_00c8a650,(LPARAM)&local_3c,3,
                        8000,local_24);
  } while( true );
}

