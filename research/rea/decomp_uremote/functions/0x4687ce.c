// rea decompile_all
// name: FUN_004687ce
// address: 0x4687ce
// body: available
// range: 0x4687ce-0x468f2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004687ce(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *unaff_EDI;
  uint local_8;
  
  if (((unaff_EDI == (int *)0x0) ||
      (puVar2 = (undefined4 *)unaff_EDI[7], puVar2 == (undefined4 *)0x0)) || (4 < param_1)) {
    return 0xfffffffe;
  }
  if (((unaff_EDI[3] == 0) || ((*unaff_EDI == 0 && (unaff_EDI[1] != 0)))) ||
     ((puVar2[1] == 0x29a && (param_1 != 4)))) {
    unaff_EDI[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (unaff_EDI[4] == 0) goto LAB_00468824;
  iVar8 = puVar2[10];
  *puVar2 = unaff_EDI;
  puVar2[10] = param_1;
  if (puVar2[1] == 0x2a) {
    uVar5 = 2;
    if (puVar2[6] == 2) {
      iVar6 = FUN_00468297(0,0);
      unaff_EDI[0xc] = iVar6;
      *(undefined1 *)(puVar2[2] + puVar2[5]) = 0x1f;
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 0x8b;
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 8;
      puVar2[5] = puVar2[5] + 1;
      piVar3 = (int *)puVar2[7];
      if (piVar3 == (int *)0x0) {
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        if (puVar2[0x21] != 9) {
          if (((int)puVar2[0x22] < 2) && (1 < (int)puVar2[0x21])) {
            uVar5 = 0;
          }
          else {
            uVar5 = 4;
          }
        }
        *(undefined1 *)(puVar2[5] + puVar2[2]) = uVar5;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0xb;
        puVar2[5] = puVar2[5] + 1;
        puVar2[1] = 0x71;
      }
      else {
        *(byte *)(puVar2[5] + puVar2[2]) =
             ((piVar3[9] == 0) - 1U & 0x10) + ((piVar3[0xb] == 0) - 1U & 2) +
             ((piVar3[7] == 0) - 1U & 8) + ((piVar3[4] == 0) - 1U & 4) + (*piVar3 != 0);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 4);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 5);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 6);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 7);
        puVar2[5] = puVar2[5] + 1;
        if (puVar2[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)puVar2[0x22] < 2) && (1 < (int)puVar2[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(puVar2[5] + puVar2[2]) = uVar5;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0xc);
        puVar2[5] = puVar2[5] + 1;
        iVar6 = puVar2[5];
        if (*(int *)(puVar2[7] + 0x10) != 0) {
          *(undefined1 *)(iVar6 + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0x14);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0x15);
          puVar2[5] = puVar2[5] + 1;
          iVar6 = puVar2[5];
        }
        if (*(int *)(puVar2[7] + 0x2c) != 0) {
          iVar6 = FUN_00468297(unaff_EDI[0xc],iVar6);
          unaff_EDI[0xc] = iVar6;
        }
        puVar2[8] = 0;
        puVar2[1] = 0x45;
      }
    }
    else {
      puVar2[1] = 0x71;
      FUN_0046875f();
      if (puVar2[0x1b] != 0) {
        FUN_0046875f();
        FUN_0046875f();
      }
      iVar6 = FUN_0046807d(0);
      unaff_EDI[0xc] = iVar6;
    }
  }
  if (puVar2[1] == 0x45) {
    iVar6 = puVar2[7];
    if (*(int *)(iVar6 + 0x10) != 0) {
      local_8 = puVar2[5];
      while ((uint)puVar2[8] < (uint)*(ushort *)(iVar6 + 0x14)) {
        uVar7 = puVar2[5];
        if (uVar7 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < uVar7)) {
            iVar6 = FUN_00468297(unaff_EDI[0xc],uVar7 - local_8);
            unaff_EDI[0xc] = iVar6;
          }
          FUN_00468781();
          uVar7 = puVar2[5];
          local_8 = uVar7;
          if (uVar7 == puVar2[3]) break;
        }
        *(undefined1 *)(uVar7 + puVar2[2]) = *(undefined1 *)(*(int *)(puVar2[7] + 0x10) + puVar2[8])
        ;
        puVar2[5] = puVar2[5] + 1;
        puVar2[8] = puVar2[8] + 1;
        iVar6 = puVar2[7];
      }
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < (uint)puVar2[5])) {
        iVar6 = FUN_00468297(unaff_EDI[0xc],puVar2[5] - local_8);
        unaff_EDI[0xc] = iVar6;
      }
      if (puVar2[8] != *(int *)(puVar2[7] + 0x14)) goto LAB_00468b92;
      puVar2[8] = 0;
    }
    puVar2[1] = 0x49;
  }
LAB_00468b92:
  if (puVar2[1] == 0x49) {
    if (*(int *)(puVar2[7] + 0x1c) != 0) {
      local_8 = puVar2[5];
      do {
        uVar7 = puVar2[5];
        if (uVar7 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < uVar7)) {
            iVar6 = FUN_00468297(unaff_EDI[0xc],uVar7 - local_8);
            unaff_EDI[0xc] = iVar6;
          }
          FUN_00468781();
          uVar7 = puVar2[5];
          local_8 = uVar7;
          if (uVar7 == puVar2[3]) {
            bVar4 = true;
            goto LAB_00468c11;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar2[7] + 0x1c) + puVar2[8]);
        puVar2[8] = puVar2[8] + 1;
        *(char *)(uVar7 + puVar2[2]) = cVar1;
        puVar2[5] = puVar2[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
LAB_00468c11:
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < (uint)puVar2[5])) {
        iVar6 = FUN_00468297(unaff_EDI[0xc],puVar2[5] - local_8);
        unaff_EDI[0xc] = iVar6;
      }
      if (bVar4) goto LAB_00468c47;
      puVar2[8] = 0;
    }
    puVar2[1] = 0x5b;
  }
LAB_00468c47:
  if (puVar2[1] == 0x5b) {
    if (*(int *)(puVar2[7] + 0x24) != 0) {
      local_8 = puVar2[5];
      do {
        uVar7 = puVar2[5];
        if (uVar7 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < uVar7)) {
            iVar6 = FUN_00468297(unaff_EDI[0xc],uVar7 - local_8);
            unaff_EDI[0xc] = iVar6;
          }
          FUN_00468781();
          uVar7 = puVar2[5];
          local_8 = uVar7;
          if (uVar7 == puVar2[3]) {
            bVar4 = true;
            goto LAB_00468cc6;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar2[7] + 0x24) + puVar2[8]);
        puVar2[8] = puVar2[8] + 1;
        *(char *)(uVar7 + puVar2[2]) = cVar1;
        puVar2[5] = puVar2[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
LAB_00468cc6:
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (local_8 < (uint)puVar2[5])) {
        iVar6 = FUN_00468297(unaff_EDI[0xc],puVar2[5] - local_8);
        unaff_EDI[0xc] = iVar6;
      }
      if (bVar4) goto LAB_00468cf9;
    }
    puVar2[1] = 0x67;
  }
LAB_00468cf9:
  if (puVar2[1] == 0x67) {
    if (*(int *)(puVar2[7] + 0x2c) != 0) {
      if ((uint)puVar2[3] < puVar2[5] + 2) {
        FUN_00468781();
      }
      if ((uint)puVar2[3] < puVar2[5] + 2) goto LAB_00468d56;
      *(char *)(puVar2[5] + puVar2[2]) = (char)unaff_EDI[0xc];
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x31);
      puVar2[5] = puVar2[5] + 1;
      iVar6 = FUN_00468297(0,0);
      unaff_EDI[0xc] = iVar6;
    }
    puVar2[1] = 0x71;
  }
LAB_00468d56:
  if (puVar2[5] == 0) {
    if (((unaff_EDI[1] == 0) && ((int)param_1 <= iVar8)) && (param_1 != 4)) goto LAB_00468824;
LAB_00468d8a:
    if ((puVar2[1] == 0x29a) && (unaff_EDI[1] != 0)) {
LAB_00468824:
      unaff_EDI[6] = (int)"buffer error";
      return 0xfffffffb;
    }
    if (((unaff_EDI[1] != 0) || (puVar2[0x1d] != 0)) || ((param_1 != 0 && (puVar2[1] != 0x29a)))) {
      iVar8 = (**(code **)(&DAT_00601c70 + puVar2[0x21] * 0xc))(puVar2,param_1);
      if ((iVar8 == 2) || (iVar8 == 3)) {
        puVar2[1] = 0x29a;
      }
      if ((iVar8 == 0) || (iVar8 == 2)) {
        if (unaff_EDI[4] != 0) {
          return 0;
        }
        goto LAB_00468d69;
      }
      if (iVar8 == 1) {
        if (param_1 == 1) {
          FUN_0046c5de();
        }
        else {
          FUN_0046c560(0,0);
          if (param_1 == 3) {
            *(undefined2 *)(puVar2[0x11] + -2 + puVar2[0x13] * 2) = 0;
            _memset((void *)puVar2[0x11],0,puVar2[0x13] * 2 - 2);
          }
        }
        FUN_00468781();
        if (unaff_EDI[4] == 0) goto LAB_00468d69;
      }
    }
    if (param_1 == 4) {
      if (0 < (int)puVar2[6]) {
        if (puVar2[6] == 2) {
          *(char *)(puVar2[2] + puVar2[5]) = (char)unaff_EDI[0xc];
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x31);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x32);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x33);
          puVar2[5] = puVar2[5] + 1;
          *(char *)(puVar2[5] + puVar2[2]) = (char)unaff_EDI[2];
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 9);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 10);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0xb);
          puVar2[5] = puVar2[5] + 1;
        }
        else {
          FUN_0046875f();
          FUN_0046875f();
        }
        FUN_00468781();
        if (0 < (int)puVar2[6]) {
          puVar2[6] = -puVar2[6];
        }
        return (uint)(puVar2[5] == 0);
      }
      return 1;
    }
  }
  else {
    FUN_00468781();
    if (unaff_EDI[4] != 0) goto LAB_00468d8a;
LAB_00468d69:
    puVar2[10] = 0xffffffff;
  }
  return 0;
}

