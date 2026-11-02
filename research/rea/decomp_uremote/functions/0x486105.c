// rea decompile_all
// name: FUN_00486105
// address: 0x486105
// body: available
// range: 0x486105-0x4863c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486105(char param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int *in_EDX;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int aiStack_534 [233];
  undefined1 local_190 [96];
  byte *local_130;
  int *local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  uint local_118;
  int local_114;
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_190;
  local_12c = in_EDX;
  if ((in_ECX < 0) || (3 < in_ECX)) {
    *(undefined4 *)(*in_EDX + 0x14) = 0x32;
    *(int *)(*in_EDX + 0x18) = in_ECX;
    (**(code **)*in_EDX)();
  }
  if (param_1 == '\0') {
    local_114 = in_EDX[in_ECX + 0x2c];
  }
  else {
    local_114 = in_EDX[in_ECX + 0x28];
  }
  if (local_114 == 0) {
    *(undefined4 *)(*in_EDX + 0x14) = 0x32;
    *(int *)(*in_EDX + 0x18) = in_ECX;
    (**(code **)*in_EDX)();
  }
  if (*param_2 == 0) {
    iVar2 = (**(code **)in_EDX[1])();
    *param_2 = iVar2;
  }
  iVar2 = *param_2;
  *(int *)(iVar2 + 0x8c) = local_114;
  iVar8 = 0;
  local_110 = 1;
  do {
    local_118 = (uint)*(byte *)(local_110 + local_114);
    if (0x100 < (int)((uint)*(byte *)(local_110 + local_114) + iVar8)) {
      *(undefined4 *)(*in_EDX + 0x14) = 8;
      (**(code **)*in_EDX)();
    }
    if (local_118 != 0) {
      _memset(local_10c + iVar8,local_110,local_118);
      iVar8 = iVar8 + local_118;
    }
    local_110 = local_110 + 1;
  } while (local_110 < 0x11);
  local_110 = 0;
  local_10c[iVar8] = '\0';
  iVar7 = (int)local_10c[0];
  local_128 = iVar8;
  iVar8 = 0;
  if (local_10c[0] != '\0') {
    pcVar3 = local_10c;
    do {
      cVar1 = *pcVar3;
      while (cVar1 == iVar7) {
        aiStack_534[iVar8] = local_110;
        cVar1 = local_10c[iVar8 + 1];
        iVar8 = iVar8 + 1;
        local_110 = local_110 + 1;
      }
      if (1 << ((byte)iVar7 & 0x1f) <= local_110) {
        *(undefined4 *)(*local_12c + 0x14) = 8;
        (**(code **)*local_12c)(local_12c);
      }
      local_110 = local_110 << 1;
      pcVar3 = local_10c + iVar8;
      iVar7 = iVar7 + 1;
    } while (*pcVar3 != '\0');
  }
  iVar8 = local_114;
  iVar5 = 0;
  iVar7 = 1;
  do {
    if (*(char *)(iVar7 + local_114) == '\0') {
      *(undefined4 *)(iVar2 + iVar7 * 4) = 0xffffffff;
    }
    else {
      *(int *)(iVar2 + 0x48 + iVar7 * 4) = iVar5 - aiStack_534[iVar5];
      iVar5 = iVar5 + (uint)*(byte *)(iVar7 + local_114);
      *(int *)(iVar2 + iVar7 * 4) = aiStack_534[iVar5 + -1];
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x11);
  *(undefined4 *)(iVar2 + 0x44) = 0xfffff;
  _memset((void *)(iVar2 + 0x90),0,0x400);
  iVar7 = 0;
  local_110 = 1;
  local_11c = 7;
  do {
    local_130 = (byte *)(local_110 + iVar8);
    local_118 = 1;
    if (*local_130 != 0) {
      local_124 = 1 << ((byte)local_11c & 0x1f);
      puVar9 = (undefined1 *)(iVar7 + 0x11 + iVar8);
      do {
        iVar8 = aiStack_534[iVar7] << ((byte)local_11c & 0x1f);
        local_120 = local_124;
        if (0 < local_124) {
          puVar6 = (undefined1 *)(iVar8 + 0x490 + iVar2);
          piVar4 = (int *)(iVar2 + 0x90 + iVar8 * 4);
          do {
            *piVar4 = local_110;
            piVar4 = piVar4 + 1;
            *puVar6 = *puVar9;
            puVar6 = puVar6 + 1;
            local_120 = local_120 + -1;
          } while (0 < local_120);
        }
        local_118 = local_118 + 1;
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
        iVar8 = local_114;
      } while ((int)local_118 <= (int)(uint)*local_130);
    }
    local_110 = local_110 + 1;
    local_11c = local_11c + -1;
  } while (-1 < local_11c);
  if ((param_1 != '\0') && (iVar2 = 0, 0 < local_128)) {
    do {
      if (0xf < *(byte *)(iVar8 + 0x11 + iVar2)) {
        *(undefined4 *)(*local_12c + 0x14) = 8;
        (**(code **)*local_12c)(local_12c);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_128);
  }
  __security_check_cookie(local_8 ^ (uint)local_190);
  return;
}

