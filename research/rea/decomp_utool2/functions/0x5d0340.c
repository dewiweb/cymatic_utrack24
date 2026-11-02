// rea decompile_all
// name: FUN_005d0340
// address: 0x5d0340
// body: available
// range: 0x5d0340-0x5d0563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005d0387) */
/* WARNING: Removing unreachable block (ram,0x005d054a) */

void FUN_005d0340(uint param_1,int param_2)

{
  code *pcVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_EDX;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  void *local_3c;
  undefined4 local_38;
  int local_34;
  undefined *local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b5b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = in_EDX;
  lVar10 = (**(code **)(*in_EDX + 0x54))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  do {
    if (CONCAT44(param_2,param_1) <= lVar10) {
      ExceptionList = local_10;
      return;
    }
    pcVar1 = *(code **)(*in_EDX + 0x20);
    if (pcVar1 == FUN_00629920) {
      iVar3 = (**(code **)(*in_EDX + 0xc))(&local_24,4);
      local_14 = 0;
      if (iVar3 == 4) {
        local_14 = local_24;
      }
    }
    else {
      local_14 = (*pcVar1)();
    }
    uVar11 = (**(code **)(*in_EDX + 0x54))();
    iVar9 = (int)((ulonglong)uVar11 >> 0x20);
    uVar7 = param_1 - (uint)uVar11;
    uVar4 = (uint)(param_1 < (uint)uVar11);
    iVar3 = param_2 - iVar9;
    iVar8 = iVar3 - uVar4;
    local_18 = uVar7;
    if ((-1 < iVar8) &&
       ((iVar8 != 0 && SBORROW4(param_2,iVar9) == SBORROW4(iVar3,uVar4) || (uVar7 != 0)))) {
      pcVar1 = *(code **)(*in_EDX + 0x20);
      if (pcVar1 == FUN_00629920) {
        iVar3 = (**(code **)(*in_EDX + 0xc))(&local_28,4);
        uVar4 = 0;
        if (iVar3 == 4) {
          uVar4 = local_28;
        }
      }
      else {
        uVar4 = (*pcVar1)();
      }
      iVar3 = (int)uVar4 >> 0x1f;
      if ((iVar3 <= iVar8) && ((iVar3 < iVar8 || (uVar4 < uVar7)))) {
        uVar7 = uVar4;
        iVar8 = iVar3;
        local_18 = uVar4;
      }
      if (iVar8 < 0) {
        ExceptionList = local_10;
        return;
      }
      if ((iVar8 < 1) && (uVar7 == 0)) {
        ExceptionList = local_10;
        return;
      }
      iVar3 = 0;
      do {
        local_2c = (&PTR_DAT_00c7ebf0)[iVar3];
        iVar9 = 0;
        iVar8 = 0;
        while (wVar2 = _towupper((ushort)(local_14 >> ((byte)iVar8 & 0x1f)) & 0xff),
              in_EDX = local_20, (int)(char)local_2c[iVar9] == (uint)wVar2) {
          iVar8 = iVar8 + 8;
          iVar9 = iVar9 + 1;
          if (0x1f < iVar8) {
            local_3c = (void *)0x0;
            local_38 = 0;
            local_8 = 0;
            (**(code **)(*local_20 + 0x50))(&local_3c,local_18);
            FUN_0045c990((&PTR_DAT_00c7ebf0)[iVar3]);
            local_8 = CONCAT31(local_8._1_3_,1);
            uVar5 = FUN_0062b1b0(local_38);
            FUN_00631980(&local_1c,uVar5);
            piVar6 = (int *)(local_34 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            piVar6 = (int *)(local_1c + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            local_8 = 0xffffffff;
            FID_conflict__free(local_3c);
            goto LAB_005d0533;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x4e);
    }
LAB_005d0533:
    lVar10 = (**(code **)(*in_EDX + 0x54))();
  } while( true );
}

