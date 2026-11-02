// rea decompile_all
// name: FUN_004f70a7
// address: 0x4f70a7
// body: available
// range: 0x4f70a7-0x4f741e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004f70a7(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int *in_EAX;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_10;
  uint local_8;
  
  FUN_004d076d();
  local_8 = CONCAT31(local_8._1_3_,(char)local_10) & 0xffffff01;
  if (((local_10 >> 1 & 1) != 0) || (cVar4 = '\0', (local_10 >> 2 & 1) != 0)) {
    cVar4 = '\x01';
  }
  bVar6 = (local_10 >> 1 & 1) != 0;
  uVar5 = local_10 >> 2;
  if ((uVar5 & 1) != 0) {
    bVar6 = bVar6 + 1;
  }
  uVar7 = 0;
  FUN_004c751a(uVar5,0);
  FUN_004c71a0(uVar5,uVar7);
  cVar2 = FUN_004c721b();
  uVar7 = extraout_ECX;
  if ((cVar2 == '\0') || (cVar2 = FUN_004eb304(), uVar7 = extraout_ECX_00, cVar2 == '\0')) {
    uVar8 = 0;
    FUN_004c751a(uVar7,0);
    FUN_004c71a0(uVar7,uVar8);
    cVar2 = FUN_004c721b();
    if ((cVar2 == '\0') || (cVar2 = FUN_004eb2fa(), cVar2 == '\0')) {
      if (bVar6 < 2) {
        iVar1 = *in_EAX;
        if (iVar1 == 0x10025) {
          uVar3 = FUN_004eb09f(param_1,cVar4,local_8);
          return uVar3;
        }
        if (iVar1 == 0x10027) {
          uVar3 = FUN_004eb0cb(param_1,cVar4,local_8);
          return uVar3;
        }
        if (iVar1 == 0x10024) {
          if (cVar4 != '\0') {
            uVar3 = FUN_004eb30e(param_1,local_8);
            return uVar3;
          }
          uVar3 = FUN_004eb320(local_8);
          return uVar3;
        }
        if (iVar1 == 0x10023) {
          if (cVar4 != '\0') {
            uVar3 = FUN_004eb366(local_8);
            return uVar3;
          }
          uVar3 = FUN_004eb37d(local_8);
          return uVar3;
        }
      }
      if (bVar6 == 0) {
        iVar1 = *in_EAX;
        if (iVar1 == 0x10026) {
          uVar3 = FUN_004eb0fb(local_8);
          return uVar3;
        }
        if (iVar1 == 0x10028) {
          uVar3 = FUN_004eb169(local_8);
          return uVar3;
        }
        if (iVar1 == 0x10021) {
          uVar3 = FUN_004eb1e3(local_8);
          return uVar3;
        }
        if (iVar1 == 0x10022) {
          uVar3 = FUN_004eb25c(local_8);
          return uVar3;
        }
      }
      uVar8 = 0;
      uVar7 = 2;
      FUN_004c751a(2,0);
      FUN_004c71a0(uVar7,uVar8);
      cVar2 = FUN_004c721b();
      if (cVar2 == '\0') {
        uVar8 = 0;
        uVar7 = extraout_ECX_01;
        FUN_004c751a(extraout_ECX_01,0);
        FUN_004c71a0(uVar7,uVar8);
        cVar2 = FUN_004c721b();
        if (cVar2 == '\0') {
          uVar8 = 0;
          uVar7 = extraout_ECX_02;
          FUN_004c751a(extraout_ECX_02,0);
          FUN_004c71a0(uVar7,uVar8);
          cVar2 = FUN_004c721b();
          if (cVar2 == '\0') {
            uVar8 = 0;
            uVar7 = extraout_ECX_03;
            FUN_004c751a(extraout_ECX_03,0);
            FUN_004c71a0(uVar7,uVar8);
            cVar2 = FUN_004c721b();
            if (cVar2 == '\0') {
              uVar8 = 0;
              uVar7 = extraout_ECX_04;
              FUN_004c751a(extraout_ECX_04,0);
              FUN_004c71a0(uVar7,uVar8);
              cVar2 = FUN_004c721b();
              if (cVar2 == '\0') {
                uVar8 = 0;
                uVar7 = extraout_ECX_05;
                FUN_004c751a(extraout_ECX_05,0);
                FUN_004c71a0(uVar7,uVar8);
                cVar2 = FUN_004c721b();
                if (cVar2 == '\0') {
                  if (bVar6 < 2) {
                    if (*in_EAX == 8) {
                      uVar3 = FUN_004eb3d3(cVar4);
                      return uVar3;
                    }
                    if (*in_EAX == 0x1002e) {
                      uVar3 = FUN_004eb438();
                      return uVar3;
                    }
                  }
                  uVar8 = 0;
                  uVar7 = extraout_ECX_06;
                  FUN_004c751a(extraout_ECX_06,0);
                  FUN_004c71a0(uVar7,uVar8);
                  cVar4 = FUN_004c721b();
                  if (cVar4 != '\0') {
                    uVar3 = FUN_004eb4c6();
                    return uVar3;
                  }
                  uVar8 = 0;
                  uVar7 = extraout_ECX_07;
                  FUN_004c751a(extraout_ECX_07,0);
                  FUN_004c71a0(uVar7,uVar8);
                  cVar4 = FUN_004c721b();
                  if (cVar4 != '\0') {
                    uVar3 = FUN_004e97d8();
                    return uVar3;
                  }
                  uVar8 = 0;
                  uVar7 = extraout_ECX_08;
                  FUN_004c751a(extraout_ECX_08,0);
                  FUN_004c71a0(uVar7,uVar8);
                  cVar4 = FUN_004c721b();
                  if (cVar4 == '\0') {
                    uVar8 = 0;
                    uVar7 = extraout_ECX_09;
                    FUN_004c751a(extraout_ECX_09,0);
                    FUN_004c71a0(uVar7,uVar8);
                    cVar4 = FUN_004c721b();
                    if (cVar4 == '\0') {
                      return 0;
                    }
                  }
                  uVar3 = FUN_004e97e0();
                  return uVar3;
                }
              }
              uVar3 = FUN_004eb4b5();
              return uVar3;
            }
          }
          uVar3 = FUN_004eb49d();
          return uVar3;
        }
      }
      uVar3 = FUN_004eb486(param_1);
      return uVar3;
    }
  }
  return 1;
}

