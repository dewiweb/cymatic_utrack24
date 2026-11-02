// rea decompile_all
// name: FUN_00406b98
// address: 0x406b98
// body: available
// range: 0x406b98-0x407117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406b98(void *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 uint *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  size_t _Size;
  undefined4 *local_98;
  int local_94;
  void *local_90;
  uint local_8c;
  char local_88 [32];
  undefined1 local_68 [96];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_68;
  local_98 = param_4;
  local_90 = param_1;
  local_8c = 0;
  local_94 = 0;
  if (param_5[8] != 0) {
    local_8c = *(uint *)(param_5[8] + 0x44088);
  }
  iVar3 = _memcmp(param_1,"COMMENT",7);
  if (iVar3 == 0) {
    if ((*(int *)(param_5[9] + 8) != 0) && (param_5[8] != 0)) {
      pcVar4 = (char *)((int)param_1 + 7);
      if (*pcVar4 != '\0') {
        pcVar4 = (char *)((int)param_1 + 8);
      }
      FUN_00405d14(pcVar4);
    }
    goto LAB_00407104;
  }
  if ((*param_5 & 1) == 0) {
    local_8c = param_5[0x880e];
    iVar3 = _memcmp(param_1,"STARTFONT",9);
    if (iVar3 == 0) {
      *param_5 = 1;
      param_5[8] = 0;
      uVar5 = FUN_00411912(0x440a4,&local_94);
      if (local_94 == 0) {
        param_5[8] = uVar5;
        *(uint *)(uVar5 + 0x44088) = param_5[0x880e];
        local_98 = (undefined4 *)(uVar5 + 0x44094);
        param_5[0x880e] = 0;
        iVar3 = FUN_00405440(local_8c);
        if (iVar3 == 0) {
          local_90 = (void *)0x0;
          iVar3 = local_94;
          do {
            local_94 = iVar3;
            local_94 = FUN_004054b3(local_90,local_8c);
            if (local_94 != 0) goto LAB_00407104;
            local_90 = (void *)((int)local_90 + 1);
            iVar3 = 0;
          } while (local_90 < (void *)0x53);
          uVar6 = FUN_00411912(0x10,&local_94);
          *(undefined4 *)(param_5[8] + 0x80) = uVar6;
          if ((local_94 == 0) && (iVar3 = FUN_00405440(local_8c), iVar3 == 0)) {
            *(undefined4 *)(param_5[8] + 0x1c) = *(undefined4 *)(param_5[9] + 0xc);
            *(undefined4 *)(param_5[8] + 0x24) = 0xffffffff;
          }
        }
      }
    }
    goto LAB_00407104;
  }
  iVar3 = _memcmp(param_1,"STARTPROPERTIES",0xf);
  if (iVar3 == 0) {
    if (((*param_5 & 8) != 0) && (local_94 = FUN_00405639(param_1,param_2), local_94 == 0)) {
      uVar6 = FUN_004059ff();
      *(undefined4 *)(param_5[8] + 0x48) = uVar6;
      param_5[1] = *(uint *)(param_5[8] + 0x48);
      uVar6 = FUN_00411976(0x10,0,&local_94);
      *(undefined4 *)(param_5[8] + 0x50) = uVar6;
      if (local_94 == 0) {
        *param_5 = *param_5 | 0x10;
        *local_98 = &LAB_004069cf;
      }
    }
    goto LAB_00407104;
  }
  iVar3 = _memcmp(param_1,"FONTBOUNDINGBOX",0xf);
  if (iVar3 == 0) {
    if (((*param_5 & 4) != 0) && (iVar3 = FUN_00405639(local_90,param_2), iVar3 == 0)) {
      uVar2 = FUN_00405b17();
      *(undefined2 *)(param_5[8] + 4) = uVar2;
      uVar2 = FUN_00405b17();
      *(undefined2 *)(param_5[8] + 6) = uVar2;
      uVar2 = FUN_00405b17();
      *(undefined2 *)(param_5[8] + 8) = uVar2;
      uVar2 = FUN_00405b17();
      *(undefined2 *)(param_5[8] + 10) = uVar2;
      uVar5 = param_5[8];
      *(short *)(uVar5 + 0xc) = *(short *)(uVar5 + 10) + *(short *)(uVar5 + 6);
      *(short *)(param_5[8] + 0xe) = -*(short *)(param_5[8] + 10);
      *param_5 = *param_5 | 8;
    }
    goto LAB_00407104;
  }
  iVar3 = _memcmp(param_1,&DAT_0090eb34,4);
  if (iVar3 == 0) {
    local_94 = FUN_00405639(param_1,param_2);
    if (local_94 == 0) {
      FUN_004055b2();
      local_90 = (void *)FUN_004055de(&local_98);
      if (local_90 != (void *)0x0) {
        FUN_00411a5c(*(undefined4 *)param_5[8]);
        *(undefined4 *)param_5[8] = 0;
        _Size = (int)local_98 + 1;
        uVar6 = FUN_00411976(1,0,&local_94);
        *(undefined4 *)param_5[8] = uVar6;
        if (local_94 == 0) {
          _memcpy(*(void **)param_5[8],local_90,_Size);
          iVar3 = FUN_00405d68(param_5[9]);
          if (iVar3 == 0) {
            *param_5 = *param_5 | 2;
          }
        }
      }
    }
    goto LAB_00407104;
  }
  iVar3 = _memcmp(param_1,&DAT_0090ecfc,4);
  if (iVar3 != 0) {
    iVar3 = _memcmp(param_1,"CHARS",5);
    if ((iVar3 == 0) && ((*param_5 & 8) != 0)) {
      *(int *)(param_5[8] + 0x28) = (int)*(short *)(param_5[8] + 0xc);
      _sprintf(local_88,"%hd",(int)*(short *)(param_5[8] + 0xc));
      iVar3 = FUN_00405f0c("FONT_ASCENT",local_88);
      if (iVar3 == 0) {
        *(int *)(param_5[8] + 0x2c) = (int)*(short *)(param_5[8] + 0xe);
        _sprintf(local_88,"%hd",(int)*(short *)(param_5[8] + 0xe));
        iVar3 = FUN_00405f0c("FONT_DESCENT",local_88);
        if (iVar3 == 0) {
          *(undefined2 *)(param_5[8] + 0x44084) = 1;
          *local_98 = FUN_004061ab;
        }
      }
    }
    goto LAB_00407104;
  }
  if (((*param_5 & 2) == 0) || (iVar3 = FUN_00405639(local_90,param_2), iVar3 != 0))
  goto LAB_00407104;
  uVar6 = FUN_004059ff();
  *(undefined4 *)(param_5[8] + 0x10) = uVar6;
  uVar6 = FUN_004059ff();
  *(undefined4 *)(param_5[8] + 0x14) = uVar6;
  uVar6 = FUN_004059ff();
  *(undefined4 *)(param_5[8] + 0x18) = uVar6;
  if (param_5[0x880c] == 5) {
    uVar2 = FUN_00405b17();
    *(undefined2 *)(param_5[8] + 0x44086) = uVar2;
    uVar5 = param_5[8];
    uVar1 = *(ushort *)(uVar5 + 0x44086);
    uVar9 = 0;
    local_90 = (void *)0x0;
    uVar7 = uVar1;
    if (uVar1 == 0) {
LAB_00407029:
      local_8c = 1 << ((byte)uVar9 & 0x1f) & 0xffff;
    }
    else {
      do {
        if ((uVar7 & 1) != 0) {
          uVar9 = (uint)local_90 & 0xffff;
        }
        uVar7 = uVar7 >> 1;
        local_90 = (void *)((int)local_90 + 1);
      } while (uVar7 != 0);
      if ((ushort)uVar9 < 4) goto LAB_00407029;
      local_8c = 8;
    }
    uVar7 = (ushort)local_8c;
    if ((uVar7 < uVar1) || (uVar1 != uVar7)) {
      sVar8 = uVar7 * 2;
      goto LAB_00407045;
    }
  }
  else {
    uVar5 = param_5[8];
    sVar8 = 1;
LAB_00407045:
    *(short *)(uVar5 + 0x44086) = sVar8;
  }
  *param_5 = *param_5 | 4;
LAB_00407104:
  __security_check_cookie(local_8 ^ (uint)local_68);
  return;
}

