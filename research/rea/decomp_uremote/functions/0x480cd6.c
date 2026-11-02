// rea decompile_all
// name: FUN_00480cd6
// address: 0x480cd6
// body: available
// range: 0x480cd6-0x480ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480cd6(char param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  int *in_EDX;
  int *unaff_ESI;
  uint uVar4;
  int iVar5;
  int aiStack_520 [257];
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if ((in_ECX < 0) || (3 < in_ECX)) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x32;
    *(int *)(*unaff_ESI + 0x18) = in_ECX;
    (**(code **)*unaff_ESI)();
  }
  if (param_1 == '\0') {
    local_114 = unaff_ESI[in_ECX + 0x1a];
  }
  else {
    local_114 = unaff_ESI[in_ECX + 0x16];
  }
  if (local_114 == 0) {
    *(undefined4 *)(*unaff_ESI + 0x14) = 0x32;
    *(int *)(*unaff_ESI + 0x18) = in_ECX;
    (**(code **)*unaff_ESI)();
  }
  if (*in_EDX == 0) {
    iVar2 = (**(code **)unaff_ESI[1])();
    *in_EDX = iVar2;
  }
  local_118 = *in_EDX;
  iVar2 = 0;
  local_110 = 1;
  do {
    uVar4 = (uint)*(byte *)(local_110 + local_114);
    if (0x100 < (int)(uVar4 + iVar2)) {
      *(undefined4 *)(*unaff_ESI + 0x14) = 8;
      (**(code **)*unaff_ESI)();
    }
    if (uVar4 != 0) {
      _memset(local_10c + iVar2,local_110,uVar4);
      iVar2 = iVar2 + uVar4;
    }
    local_110 = local_110 + 1;
  } while (local_110 < 0x11);
  local_10c[iVar2] = '\0';
  iVar5 = (int)local_10c[0];
  local_11c = iVar2;
  iVar2 = 0;
  local_110 = 0;
  if (local_10c[0] != '\0') {
    pcVar3 = local_10c;
    do {
      cVar1 = *pcVar3;
      while (cVar1 == iVar5) {
        aiStack_520[iVar2] = local_110;
        cVar1 = local_10c[iVar2 + 1];
        iVar2 = iVar2 + 1;
        local_110 = local_110 + 1;
      }
      if (1 << ((byte)iVar5 & 0x1f) <= local_110) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 8;
        (**(code **)*unaff_ESI)();
      }
      local_110 = local_110 << 1;
      pcVar3 = local_10c + iVar2;
      iVar5 = iVar5 + 1;
    } while (*pcVar3 != '\0');
  }
  _memset((void *)(local_118 + 0x400),0,0x100);
  iVar2 = 0;
  local_110 = ((param_1 == '\0') - 1 & 0xffffff10) + 0xff;
  if (0 < local_11c) {
    do {
      uVar4 = (uint)*(byte *)(local_114 + 0x11 + iVar2);
      if ((local_110 < (int)uVar4) || (*(char *)(local_118 + 0x400 + uVar4) != '\0')) {
        *(undefined4 *)(*unaff_ESI + 0x14) = 8;
        (**(code **)*unaff_ESI)();
      }
      *(int *)(local_118 + uVar4 * 4) = aiStack_520[iVar2];
      pcVar3 = local_10c + iVar2;
      iVar2 = iVar2 + 1;
      *(char *)(local_118 + 0x400 + uVar4) = *pcVar3;
    } while (iVar2 < local_11c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

