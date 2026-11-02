// rea decompile_all
// name: FUN_0048149c
// address: 0x48149c
// body: available
// range: 0x48149c-0x481673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048149c(int *param_1,void *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int local_840 [257];
  int local_43c [257];
  int *local_38;
  void *local_34;
  undefined4 local_30;
  char local_2c [16];
  char local_1c;
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_34 = param_2;
  _memset(local_2c,0,0x21);
  _memset(local_43c,0,0x404);
  piVar6 = local_840;
  for (iVar7 = 0x101; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar6 = -1;
    piVar6 = piVar6 + 1;
  }
  *(undefined4 *)(in_ECX + 0x400) = 1;
  while( true ) {
    iVar7 = -1;
    iVar8 = 1000000000;
    iVar5 = 0;
    do {
      iVar3 = *(int *)(in_ECX + iVar5 * 4);
      if ((iVar3 != 0) && (iVar3 <= iVar8)) {
        iVar7 = iVar5;
        iVar8 = iVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x101);
    iVar8 = -1;
    local_30 = 1000000000;
    iVar5 = 0;
    do {
      iVar3 = *(int *)(in_ECX + iVar5 * 4);
      if (((iVar3 != 0) && (iVar3 <= local_30)) && (iVar5 != iVar7)) {
        local_30 = iVar3;
        iVar8 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x101);
    if (iVar8 < 0) break;
    piVar6 = (int *)(in_ECX + iVar7 * 4);
    *piVar6 = *piVar6 + *(int *)(iVar8 * 4 + in_ECX);
    *(undefined4 *)(iVar8 * 4 + in_ECX) = 0;
    while( true ) {
      local_43c[iVar7] = local_43c[iVar7] + 1;
      if (local_840[iVar7] < 0) break;
      iVar7 = local_840[iVar7];
    }
    local_43c[iVar8] = local_43c[iVar8] + 1;
    local_840[iVar7] = iVar8;
    piVar6 = local_840 + iVar8;
    while (-1 < *piVar6) {
      iVar7 = *piVar6;
      local_43c[iVar7] = local_43c[iVar7] + 1;
      piVar6 = local_840 + iVar7;
    }
  }
  iVar7 = 0;
  do {
    iVar8 = local_43c[iVar7];
    if (iVar8 != 0) {
      if (0x20 < iVar8) {
        *(undefined4 *)(*local_38 + 0x14) = 0x27;
        (**(code **)*local_38)(local_38);
      }
      local_2c[local_43c[iVar7]] = local_2c[local_43c[iVar7]] + '\x01';
    }
    pvVar4 = local_34;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x101);
  iVar7 = 0x1e;
  iVar8 = 0x10;
  iVar5 = iVar8;
  do {
    pcVar1 = local_2c + iVar7 + 2;
    while (*pcVar1 != '\0') {
      cVar2 = local_2c[iVar7];
      iVar3 = iVar7;
      while (cVar2 == '\0') {
        cVar2 = local_2c[iVar3 + -1];
        iVar3 = iVar3 + -1;
      }
      *pcVar1 = *pcVar1 + -2;
      local_2c[iVar7 + 1] = local_2c[iVar7 + 1] + '\x01';
      local_2c[iVar3 + 1] = local_2c[iVar3 + 1] + '\x02';
      local_2c[iVar3] = local_2c[iVar3] + -1;
    }
    iVar7 = iVar7 + -1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  while (local_1c == '\0') {
    local_1c = local_2c[iVar8 + -1];
    iVar8 = iVar8 + -1;
  }
  local_2c[iVar8] = local_2c[iVar8] + -1;
  _memcpy(local_34,local_2c,0x11);
  iVar7 = 0;
  iVar8 = 1;
  do {
    iVar5 = 0;
    do {
      if (local_43c[iVar5] == iVar8) {
        *(char *)((int)pvVar4 + iVar7 + 0x11) = (char)iVar5;
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x100);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x21);
  *(undefined1 *)((int)pvVar4 + 0x111) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

