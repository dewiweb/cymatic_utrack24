// rea decompile_all
// name: thunk_FUN_006abba0
// address: 0x6df0a0
// body: available
// range: 0x6df0a0-0x6df0a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006abba0(void)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *extraout_ECX_03;
  int *in_ECX;
  byte bVar7;
  ushort uVar6;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  char cStack_6;
  char cStack_5;
  
  iVar9 = in_ECX[0x23];
  if ((iVar9 < in_ECX[6]) && (iVar9 < in_ECX[7])) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((char)in_ECX[0x26] == '\0') || (!bVar1)) {
    cStack_5 = '\0';
  }
  else {
    cStack_5 = '\x01';
  }
  if ((*(char *)((int)in_ECX + 0x99) == '\0') || (!bVar1)) {
    cStack_6 = '\0';
  }
  else {
    cStack_6 = '\x01';
  }
  iStack_20 = 2;
  iStack_1c = iVar9;
  do {
    if ((cStack_5 == '\0') || (*(char *)((int)in_ECX + 0x2f6) != '\0')) {
      bVar7 = 0;
    }
    else {
      bVar7 = 1;
    }
    uStack_28 = CONCAT31(uStack_28._1_3_,bVar7);
    if ((cStack_6 == '\0') || (*(char *)((int)in_ECX + 0x1f6) != '\0')) {
      uVar6 = (ushort)bVar7;
    }
    else {
      uVar6 = CONCAT11(1,bVar7);
    }
    bVar7 = (byte)(uVar6 >> 8);
    iStack_24 = CONCAT31(iStack_24._1_3_,bVar7);
    piVar3 = (int *)FUN_006e6400(auStack_74);
    iStack_18 = *piVar3;
    iStack_14 = piVar3[1];
    iStack_10 = piVar3[2];
    iStack_c = piVar3[3];
    if ((in_ECX[0x1e] == 0) || (*(int *)(in_ECX[0x1e] + 8) == 0)) {
LAB_006abde4:
      if ((char)(uVar6 >> 8) != '\0') {
LAB_006abde8:
        iStack_10 = in_ECX[6] - iVar9;
      }
    }
    else {
      if (in_ECX[0x1e] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX[0x1e] + 8);
      }
      iVar9 = iStack_1c;
      if ((((iStack_18 <= *(int *)(iVar5 + 0x10)) && (iStack_14 <= *(int *)(iVar5 + 0x14))) &&
          (*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x10) <= iStack_10 + iStack_18)) &&
         (*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x14) <= iStack_c + iStack_14))
      goto LAB_006abde4;
      if (cStack_5 == '\0') {
LAB_006abce1:
        uVar6 = (ushort)bVar7 << 8;
      }
      else {
        if ((char)uVar6 == '\0') {
          if (in_ECX[0x1e] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(in_ECX[0x1e] + 8);
          }
          if (-1 < *(int *)(iVar5 + 0x10)) {
            if (in_ECX[0x1e] == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(in_ECX[0x1e] + 8);
            }
            if (*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x10) <= iStack_10) goto LAB_006abce1;
          }
        }
        uVar6 = (ushort)CONCAT31((uint3)bVar7,1);
      }
      uStack_28 = CONCAT31(uStack_28._1_3_,(char)uVar6);
      if (cStack_6 == '\0') {
LAB_006abd2c:
        uVar6 = uVar6 & 0xff;
      }
      else {
        if ((char)(uVar6 >> 8) == '\0') {
          if (in_ECX[0x1e] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(in_ECX[0x1e] + 8);
          }
          if (-1 < *(int *)(iVar5 + 0x14)) {
            if (in_ECX[0x1e] == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(in_ECX[0x1e] + 8);
            }
            if (*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x14) <= iStack_c) goto LAB_006abd2c;
          }
        }
        uVar6 = CONCAT11(1,(char)uVar6);
        iStack_10 = in_ECX[6] - iStack_1c;
      }
      bVar7 = (byte)(uVar6 >> 8);
      iStack_24 = CONCAT31(iStack_24._1_3_,bVar7);
      if ((char)uVar6 != '\0') {
        iStack_c = in_ECX[7] - iStack_1c;
      }
      if (in_ECX[0x1e] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX[0x1e] + 8);
      }
      if (((iStack_18 <= *(int *)(iVar5 + 0x10)) && (iStack_14 <= *(int *)(iVar5 + 0x14))) &&
         ((*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x10) <= iStack_10 + iStack_18 &&
          (*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x14) <= iStack_c + iStack_14))))
      goto LAB_006abde4;
      if (cStack_5 == '\0') {
LAB_006abda5:
        uVar6 = (ushort)bVar7 << 8;
      }
      else {
        if ((char)uVar6 == '\0') {
          if (in_ECX[0x1e] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(in_ECX[0x1e] + 8);
          }
          if (*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x10) <= iStack_10) goto LAB_006abda5;
        }
        uVar6 = (ushort)CONCAT31((uint3)bVar7,1);
      }
      uStack_28 = CONCAT31(uStack_28._1_3_,(char)uVar6);
      if (cStack_6 != '\0') {
        if ((char)(uVar6 >> 8) == '\0') {
          if (in_ECX[0x1e] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(in_ECX[0x1e] + 8);
          }
          if (*(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0x14) <= iStack_c) goto LAB_006abdd7;
        }
        uVar6 = CONCAT11(1,(char)uVar6);
        iStack_24 = CONCAT31(iStack_24._1_3_,1);
        goto LAB_006abde8;
      }
LAB_006abdd7:
      uVar6 = uVar6 & 0xff;
      iStack_24 = (uint)iStack_24._1_3_ << 8;
    }
    if ((char)uVar6 != '\0') {
      iStack_c = in_ECX[7] - iVar9;
    }
    if ((in_ECX[0x1e] == 0) || (*(int *)(in_ECX[0x1e] + 8) == 0)) {
      FUN_006e9790(iStack_18,iStack_14,iStack_10,iStack_c);
LAB_006abe8c:
      uStack_38 = 0;
      uStack_34 = 0;
      iStack_30 = 0;
      iStack_2c = 0;
      if ((in_ECX[0x1e] == 0) || (*(int *)(in_ECX[0x1e] + 8) == 0)) {
        iStack_20 = 0;
        iVar9 = 0;
      }
      else {
        if (in_ECX[0x1e] == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(in_ECX[0x1e] + 8);
        }
        uVar4 = FUN_006e6400(auStack_84);
        piVar3 = (int *)FUN_006d37f0(auStack_94,uVar8,uVar4);
        iStack_30 = piVar3[2];
        iStack_20 = *piVar3;
        iVar9 = piVar3[1];
        iStack_2c = piVar3[3];
      }
      iStack_20 = -iStack_20;
      iVar9 = -iVar9;
      FUN_006e9790(0,iStack_c,iStack_10,iStack_1c);
      uStack_5c = 0;
      FUN_006d2880(extraout_ECX);
      FUN_006b0380(extraout_ECX_00);
      *(double *)(in_ECX + 0xb0) = (double)in_ECX[0x24];
      LOCK();
      *(undefined4 *)(in_ECX[0xa1] + 0xc) = 0;
      UNLOCK();
      if ((cStack_5 != '\0') && ((char)uVar6 == '\0')) {
        iStack_20 = 0;
      }
      FUN_006e9790(iStack_10,0,iStack_1c,iStack_c);
      FUN_006d2880(extraout_ECX_01);
      FUN_006b0380(extraout_ECX_02);
      *(double *)(in_ECX + 0x70) = (double)in_ECX[0x25];
      LOCK();
      *(undefined4 *)(in_ECX[0x61] + 0xc) = 0;
      UNLOCK();
      if ((cStack_6 != '\0') && ((char)(uVar6 >> 8) == '\0')) {
        iVar9 = 0;
      }
      (**(code **)(in_ECX[0x84] + 0x28))(uStack_28);
      (**(code **)(in_ECX[0x44] + 0x28))(iStack_24);
      if ((in_ECX[0x1e] != 0) && (*(int *)(in_ECX[0x1e] + 8) != 0)) {
        FUN_006ac430(&iStack_40,iStack_20,iVar9);
        if (in_ECX[0x1e] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(in_ECX[0x1e] + 8);
        }
        if ((*(int *)(iVar5 + 0x10) != iStack_40) || (*(int *)(iVar5 + 0x14) != iStack_3c)) {
          if (in_ECX[0x1e] != 0) {
            iVar9 = *(int *)(in_ECX[0x1e] + 8);
            FUN_006e9790(iStack_40,iStack_3c,*(undefined4 *)(iVar9 + 0x18),
                         *(undefined4 *)(iVar9 + 0x1c));
            return;
          }
          FUN_006e9790(iStack_40,iStack_3c,uRam00000018,uRam0000001c);
          return;
        }
      }
      iStack_50 = iStack_20;
      iStack_48 = iStack_30 - iStack_20;
      if (iStack_10 < iStack_30 - iStack_20) {
        iStack_48 = iStack_10;
      }
      iStack_44 = iStack_2c - iVar9;
      if (iStack_c < iStack_2c - iVar9) {
        iStack_44 = iStack_c;
      }
      iStack_4c = iVar9;
      cVar2 = FUN_004af950(&iStack_50);
      if (cVar2 != '\0') {
        *extraout_ECX_03 = iStack_50;
        extraout_ECX_03[1] = iStack_4c;
        extraout_ECX_03[2] = iStack_48;
        extraout_ECX_03[3] = iStack_44;
        (**(code **)(*in_ECX + 0xb0))(&iStack_50);
      }
      LOCK();
      iVar9 = *(int *)(in_ECX[0xa1] + 0xc);
      *(int *)(in_ECX[0xa1] + 0xc) = 0;
      UNLOCK();
      if (iVar9 != 0) {
        (**(code **)(in_ECX[0xa0] + 4))();
      }
      LOCK();
      iVar9 = *(int *)(in_ECX[0x61] + 0xc);
      *(int *)(in_ECX[0x61] + 0xc) = 0;
      UNLOCK();
      if (iVar9 != 0) {
        (**(code **)(in_ECX[0x60] + 4))();
      }
      return;
    }
    if (in_ECX[0x1e] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX[0x1e] + 8);
    }
    uStack_64 = *(undefined4 *)(iVar5 + 0x10);
    uStack_60 = *(undefined4 *)(iVar5 + 0x14);
    uStack_5c = *(undefined8 *)(iVar5 + 0x18);
    FUN_006e9790(iStack_18,iStack_14,iStack_10,iStack_c);
    if (in_ECX[0x1e] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(in_ECX[0x1e] + 8);
    }
    cVar2 = FUN_004af990(iVar5 + 0x10);
    if ((cVar2 != '\0') || (iStack_20 = iStack_20 + -1, iStack_20 < 0)) goto LAB_006abe8c;
  } while( true );
}

