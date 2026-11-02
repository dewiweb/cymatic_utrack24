// rea decompile_all
// name: FUN_00405f0c
// address: 0x405f0c
// body: available
// range: 0x405f0c-0x4061aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00405f0c(void *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  local_8 = 0;
  uVar5 = *(undefined4 *)(in_EAX + 0x44088);
  iVar4 = FUN_00405519(param_1);
  if (iVar4 != 0) {
    iVar8 = *(int *)(iVar4 + 4) * 0x10 + *(int *)(in_EAX + 0x50);
    iVar4 = *(int *)(iVar8 + 4);
    if (iVar4 == 1) {
      FUN_00411a5c(*(undefined4 *)(iVar8 + 0xc));
      *(undefined4 *)(iVar8 + 0xc) = 0;
      if (param_2 == (char *)0x0) {
        return local_8;
      }
      if (*param_2 == '\0') {
        return local_8;
      }
      uVar5 = FUN_00411aaa(uVar5,param_2,&local_8);
    }
    else if (iVar4 == 2) {
      uVar5 = FUN_00405a76();
    }
    else {
      if (iVar4 != 3) {
        return local_8;
      }
      uVar5 = FUN_004059ff();
    }
    *(undefined4 *)(iVar8 + 0xc) = uVar5;
    return local_8;
  }
  iVar4 = FUN_00405519(param_1);
  if (iVar4 == 0) {
    local_8 = FUN_00405beb(param_1);
    if (local_8 != 0) {
      return local_8;
    }
    iVar4 = FUN_00405519(param_1);
  }
  if (*(int *)(in_EAX + 0x4c) == *(int *)(in_EAX + 0x48)) {
    if (*(int *)(in_EAX + 0x48) == 0) {
      uVar6 = FUN_00411976(0x10,0,&local_8);
    }
    else {
      uVar6 = FUN_00411976(0x10,*(undefined4 *)(in_EAX + 0x50),&local_8);
    }
    *(undefined4 *)(in_EAX + 0x50) = uVar6;
    if (local_8 != 0) {
      return local_8;
    }
    _memset((void *)(*(int *)(in_EAX + 0x48) * 0x10 + *(int *)(in_EAX + 0x50)),0,0x10);
    *(int *)(in_EAX + 0x48) = *(int *)(in_EAX + 0x48) + 1;
  }
  uVar2 = *(uint *)(iVar4 + 4);
  if (uVar2 < 0x53) {
    ppuVar7 = &PTR_s_ADD_STYLE_NAME_008f9e00 + uVar2 * 4;
  }
  else {
    ppuVar7 = (undefined **)((uVar2 - 0x53) * 0x10 + *(int *)(in_EAX + 0x4408c));
  }
  puVar9 = (undefined4 *)(*(int *)(in_EAX + 0x4c) * 0x10 + *(int *)(in_EAX + 0x50));
  *puVar9 = *ppuVar7;
  puVar9[1] = ppuVar7[1];
  puVar9[2] = ppuVar7[2];
  puVar3 = ppuVar7[1];
  if (puVar3 == (undefined *)0x1) {
    puVar9[3] = 0;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      uVar6 = FUN_00411aaa(uVar5,param_2,&local_8);
      puVar9[3] = uVar6;
      if (local_8 != 0) {
        return local_8;
      }
    }
  }
  else {
    if (puVar3 == (undefined *)0x2) {
      uVar6 = FUN_00405a76();
    }
    else {
      if (puVar3 != (undefined *)0x3) goto LAB_004060b3;
      uVar6 = FUN_004059ff();
    }
    puVar9[3] = uVar6;
  }
LAB_004060b3:
  iVar4 = _memcmp(param_1,"COMMENT",7);
  if ((iVar4 != 0) && (local_8 = FUN_004054b3(*(undefined4 *)(in_EAX + 0x4c),uVar5), local_8 != 0))
  {
    return local_8;
  }
  *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x4c) + 1;
  iVar4 = _memcmp(param_1,"DEFAULT_CHAR",0xc);
  if (iVar4 == 0) {
    *(undefined4 *)(in_EAX + 0x24) = puVar9[3];
  }
  else {
    iVar4 = _memcmp(param_1,"FONT_ASCENT",0xb);
    if (iVar4 == 0) {
      *(undefined4 *)(in_EAX + 0x28) = puVar9[3];
    }
    else {
      iVar4 = _memcmp(param_1,"FONT_DESCENT",0xc);
      if (iVar4 == 0) {
        *(undefined4 *)(in_EAX + 0x2c) = puVar9[3];
      }
      else {
        iVar4 = _memcmp(param_1,"SPACING",7);
        if (iVar4 == 0) {
          if ((char *)puVar9[3] == (char *)0x0) {
            local_8 = 3;
          }
          else {
            cVar1 = *(char *)puVar9[3];
            if ((cVar1 == 'p') || (cVar1 == 'P')) {
              *(undefined4 *)(in_EAX + 0x1c) = 8;
            }
            else if ((cVar1 == 'm') || (cVar1 == 'M')) {
              *(undefined4 *)(in_EAX + 0x1c) = 0x10;
            }
            else if ((cVar1 == 'c') || (cVar1 == 'C')) {
              *(undefined4 *)(in_EAX + 0x1c) = 0x20;
            }
          }
        }
      }
    }
  }
  return local_8;
}

