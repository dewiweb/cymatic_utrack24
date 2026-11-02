// rea decompile_all
// name: FUN_0061b8d0
// address: 0x61b8d0
// body: available
// range: 0x61b8d0-0x61bc8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061b8d0(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  byte *pbVar8;
  char *pcVar9;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ced8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 4);
  bVar2 = *(byte *)*piVar1;
  pbVar8 = (byte *)*piVar1 + 1;
  *piVar1 = (int)pbVar8;
  if ((char)bVar2 < '\0') {
    uVar4 = 0x40;
    if ((bVar2 & 0x40) != 0) {
      do {
        if (uVar4 < 9) break;
        pbVar8 = pbVar8 + 1;
        uVar4 = uVar4 >> 1;
        *piVar1 = (int)pbVar8;
      } while ((uVar4 & (int)(char)bVar2) != 0);
    }
  }
  local_18 = in_ECX;
  iVar5 = FUN_0045e210(*piVar1,&DAT_00c015b4,uVar3);
  if (iVar5 == 0) {
    FUN_0044ebd0(4);
  }
  else {
    iVar5 = FUN_0045e210(*piVar1,"quot;",uVar3);
    if (iVar5 == 0) {
      FUN_0044ebd0(5);
      local_14 = CONCAT22(local_14._2_2_,0x22);
      goto LAB_0061bc04;
    }
    iVar5 = FUN_0045e210(*piVar1,"apos;",uVar3);
    if (iVar5 == 0) {
      FUN_0044ebd0(5);
      local_14 = CONCAT22(local_14._2_2_,0x27);
      goto LAB_0061bc04;
    }
    iVar5 = FUN_0045e210(*piVar1,&DAT_00c015e0,uVar3);
    if (iVar5 == 0) {
      FUN_0044ebd0(3);
      local_14 = CONCAT22(local_14._2_2_,0x3c);
      goto LAB_0061bc04;
    }
    iVar5 = FUN_0045e210(*piVar1,&DAT_00c015dc,uVar3);
    if (iVar5 == 0) {
      FUN_0044ebd0(3);
      local_14 = CONCAT22(local_14._2_2_,0x3e);
      goto LAB_0061bc04;
    }
    iVar5 = FUN_00426f70();
    if (iVar5 == 0x23) {
      FUN_0044eb90();
      iVar5 = FUN_00426f70();
      if ((iVar5 == 0x78) || (iVar5 = FUN_00426f70(), iVar5 == 0x58)) {
        FUN_0044eb90();
        local_14 = *piVar1;
        iVar5 = 0;
        FUN_0044ebd0(0);
        iVar6 = FUN_00426f70();
        while (iVar6 != 0x3b) {
          local_14 = *piVar1;
          FUN_0044ebd0(0);
          iVar6 = FUN_00426f70();
          uVar3 = iVar6 - 0x30;
          if (9 < uVar3) {
            uVar3 = iVar6 - 0x61;
            if ((uVar3 < 6) || (uVar3 = iVar6 - 0x41, uVar3 < 6)) {
              uVar3 = uVar3 + 10;
              goto LAB_0061bb5a;
            }
LAB_0061bb8e:
            pcVar9 = "illegal escape sequence";
            goto LAB_0061bb97;
          }
LAB_0061bb5a:
          if (((int)uVar3 < 0) || (iVar5 = iVar5 + 1, 8 < iVar5)) goto LAB_0061bb8e;
          FUN_0044eb90();
          local_14 = *piVar1;
          FUN_0044ebd0(0);
          iVar6 = FUN_00426f70();
        }
LAB_0061bbb8:
        FUN_0044eb90();
        FUN_006216e0();
        ExceptionList = local_10;
        return;
      }
      uVar3 = FUN_0044ec60(0);
      if ((0x2f < uVar3) && (uVar3 = FUN_0044ec60(0), uVar3 < 0x3a)) {
        iVar5 = 0;
        iVar6 = FUN_0044ec60(0);
        while (iVar6 != 0x3b) {
          iVar5 = iVar5 + 1;
          if (0xc < iVar5) {
            pcVar9 = "illegal escape sequence";
LAB_0061bb97:
            FUN_0045c990(pcVar9);
            FUN_0061d1c0(&local_14,1);
            FUN_00637c10();
            break;
          }
          FUN_0044ec60(0);
          FUN_0044eb90();
          iVar6 = FUN_0044ec60(0);
        }
        goto LAB_0061bbb8;
      }
      FUN_0045c990("illegal escape sequence");
      FUN_0061d1c0(&local_14,1);
      FUN_00637c10();
    }
    else {
      iVar5 = *piVar1;
      iVar6 = FUN_0045c230(iVar5);
      if (-1 < iVar6) {
        FUN_0044ebd0(iVar6 + 1);
        FUN_0045cc40(iVar5);
        local_8 = 0;
        uVar7 = FUN_0061af10(local_1c,&local_14);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00636ec0(uVar7);
        FUN_00637c10();
        FUN_00637c10();
        ExceptionList = local_10;
        return;
      }
      *(undefined1 *)(local_18 + 8) = 1;
    }
  }
  local_14 = CONCAT22(local_14._2_2_,0x26);
LAB_0061bc04:
  FUN_00621830(&local_14);
  ExceptionList = local_10;
  return;
}

