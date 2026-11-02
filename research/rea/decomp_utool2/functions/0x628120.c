// rea decompile_all
// name: FUN_00628120
// address: 0x628120
// body: available
// range: 0x628120-0x62848b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00628120(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int in_ECX;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_28;
  int local_24;
  char *local_1c;
  uint local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071da19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
LAB_00628155:
  *(undefined1 *)(in_ECX + 0x25) = 1;
  if (*(int *)(in_ECX + 0x28) != 0) {
    cVar2 = FUN_00628120(param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      return 1;
    }
    iVar5 = *(int *)(in_ECX + 0x28);
    if (iVar5 != 0) {
      *(undefined4 *)(in_ECX + 0x28) = 0;
      FUN_006285d0();
      FUN_004bfe14(iVar5,0x30);
    }
  }
  local_1c = "";
  local_8 = 0;
  local_12 = '\0';
  do {
    do {
      if ((param_2 == (char *)0x0) && ((*(byte *)(in_ECX + 0x20) & 4) == 0)) {
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = &local_12;
      }
      cVar2 = FUN_004570a0(&local_1c,&local_11,pcVar4,param_3,param_4,param_5,param_6);
      pcVar4 = local_1c;
      if (cVar2 == '\0') {
        uVar11 = 0;
LAB_00628455:
        piVar6 = (int *)(pcVar4 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        ExceptionList = local_10;
        return uVar11;
      }
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
    } while (*local_1c == '\0');
    do {
      FUN_00443260();
      iVar5 = FUN_0045c230(&DAT_00c00d48);
      if (iVar5 < 0) {
        if (local_11 == '\0') {
          uVar9 = *(uint *)(in_ECX + 0x20) >> 1;
        }
        else {
          if ((*(char *)(in_ECX + 0x24) != '\0') &&
             (((*(byte *)(in_ECX + 0x20) & 4) == 0 || (local_12 == '\0')))) {
            operator_new(0x30);
            local_8 = CONCAT31(local_8._1_3_,1);
            iVar5 = in_ECX + 0x10;
            uVar13 = *(undefined4 *)(in_ECX + 0x20);
            iVar8 = *(int *)(in_ECX + 0x14);
            uVar12 = 1;
            piVar6 = (int *)(iVar8 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              *piVar6 = *piVar6 + 1;
              UNLOCK();
            }
            FUN_00637730(iVar8);
            local_18 = local_18 | 1;
            uVar7 = FUN_00629960(uVar12,iVar5,uVar13);
            local_8 = 3;
            local_18 = local_18 | 2;
            iVar8 = FUN_006286b0(uVar7,uVar12,iVar5,uVar13);
            iVar5 = *(int *)(in_ECX + 0x28);
            if ((iVar5 != iVar8) && (*(int *)(in_ECX + 0x28) = iVar8, iVar5 != 0)) {
              FUN_006285d0();
              FUN_004bfe14(iVar5,0x30);
            }
            uVar9 = local_18;
            piVar6 = (int *)(local_24 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            local_8 = 0;
            local_18 = uVar9 & 0xfffffffc;
            piVar6 = (int *)(local_28 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar6);
              }
            }
          }
          uVar9 = (uint)*(byte *)(in_ECX + 0x20);
        }
        cVar2 = local_11;
        bVar3 = (byte)uVar9 & 1;
        if (((uVar9 & 1) != 0) && ((*(char *)(in_ECX + 0x24) != '\0' || (1 < *(int *)(in_ECX + 8))))
           ) {
          bVar3 = FUN_006284b0();
        }
        cVar1 = local_12;
        if (bVar3 != 0) {
          if ((*(byte *)(in_ECX + 0x20) & 4) != 0) {
            bVar3 = local_12 == '\0';
          }
          if (bVar3 != 0) {
            iVar5 = *(int *)(in_ECX + 0x14);
            piVar6 = (int *)(iVar5 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              *piVar6 = *piVar6 + 1;
              UNLOCK();
            }
            FUN_00637730(iVar5);
            puVar10 = (undefined4 *)FUN_00629960();
            uVar13 = *(undefined4 *)(in_ECX + 0x2c);
            *(undefined4 *)(in_ECX + 0x2c) = *puVar10;
            *puVar10 = uVar13;
            piVar6 = (int *)(param_6 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            piVar6 = (int *)(param_5 + -8);
            if (piVar6 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar6;
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar6);
              }
            }
            if (param_2 != (char *)0x0) {
              *param_2 = cVar1;
            }
            if (param_1 != (char *)0x0) {
              *param_1 = cVar2;
            }
            uVar11 = 1;
            goto LAB_00628455;
          }
        }
        if (*(int *)(in_ECX + 0x28) != 0) {
          piVar6 = (int *)(pcVar4 + -8);
          local_8 = 0xffffffff;
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            iVar5 = *piVar6;
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (iVar5 == 0) {
              FID_conflict__free(piVar6);
            }
          }
          goto LAB_00628155;
        }
        break;
      }
    } while (*pcVar4 != '\0');
  } while( true );
}

