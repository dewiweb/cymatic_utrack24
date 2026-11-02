// rea decompile_all
// name: FUN_00632ad0
// address: 0x632ad0
// body: available
// range: 0x632ad0-0x632c00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00632ad0(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 *in_ECX;
  byte **ppbVar8;
  byte *pbVar9;
  byte *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071e7d0;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (byte *)*in_ECX;
  do {
    do {
      do {
        pbVar9 = local_14;
        FUN_00426f70(uVar4);
        iVar5 = FUN_0045c230(param_2);
        if (iVar5 < 0) {
          pbVar7 = (byte *)*in_ECX;
          if (pbVar9 == pbVar7) {
            local_18 = pbVar7;
            pbVar7 = pbVar7 + -8;
            if (pbVar7 != (byte *)&DAT_00bfe124) {
              LOCK();
              *(int *)pbVar7 = *(int *)pbVar7 + 1;
              UNLOCK();
            }
            ppbVar8 = &local_18;
            bVar3 = true;
            bVar2 = false;
          }
          else {
            FUN_0045cb50(pbVar9);
            ppbVar8 = &local_14;
            bVar3 = false;
            bVar2 = true;
          }
          pbVar9 = *ppbVar8;
          *ppbVar8 = &DAT_00bfe12c;
          *param_1 = pbVar9;
          if ((bVar2) && (pbVar9 = local_14 + -8, pbVar9 != (byte *)&DAT_00bfe124)) {
            LOCK();
            iVar5 = *(int *)pbVar9;
            *(int *)pbVar9 = *(int *)pbVar9 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(pbVar9);
            }
          }
          if ((bVar3) && (pbVar9 = local_18 + -8, pbVar9 != (byte *)&DAT_00bfe124)) {
            LOCK();
            iVar5 = *(int *)pbVar9;
            *(int *)pbVar9 = *(int *)pbVar9 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(pbVar9);
            }
          }
          ExceptionList = local_10;
          return param_1;
        }
        bVar1 = *pbVar9;
        local_14 = pbVar9 + 1;
      } while (-1 < (char)bVar1);
      uVar6 = 0x40;
    } while ((bVar1 & 0x40) == 0);
    do {
      if (uVar6 < 9) break;
      local_14 = local_14 + 1;
      uVar6 = uVar6 >> 1;
    } while ((uVar6 & (int)(char)bVar1) != 0);
  } while( true );
}

