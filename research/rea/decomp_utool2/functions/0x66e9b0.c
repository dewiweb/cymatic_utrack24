// rea decompile_all
// name: FUN_0066e9b0
// address: 0x66e9b0
// body: available
// range: 0x66e9b0-0x66ebd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066e9b0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  undefined4 *in_EDX;
  int iVar7;
  int *piVar8;
  int local_834 [257];
  int local_430 [256];
  char acStack_2e [2];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_c = 0;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  _memset(local_430,0,0x404);
  *(undefined4 *)(param_1 + 0x400) = 1;
  piVar8 = local_834;
  for (iVar6 = 0x101; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = -1;
    piVar8 = piVar8 + 1;
  }
  while( true ) {
    iVar6 = -1;
    iVar7 = 1000000000;
    iVar4 = 0;
    do {
      iVar5 = *(int *)(param_1 + iVar4 * 4);
      if ((iVar5 != 0) && (iVar5 <= iVar7)) {
        iVar6 = iVar4;
        iVar7 = iVar5;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x101);
    iVar4 = -1;
    iVar7 = 1000000000;
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1 + iVar5 * 4);
      if (((iVar3 != 0) && (iVar3 <= iVar7)) && (iVar5 != iVar6)) {
        iVar7 = iVar3;
        iVar4 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x101);
    if (iVar4 < 0) break;
    piVar8 = (int *)(param_1 + iVar6 * 4);
    *piVar8 = *piVar8 + *(int *)(param_1 + iVar4 * 4);
    local_430[iVar6] = local_430[iVar6] + 1;
    piVar8 = local_834 + iVar6;
    iVar7 = *piVar8;
    *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    while (-1 < iVar7) {
      iVar6 = *piVar8;
      piVar8 = local_834 + iVar6;
      local_430[iVar6] = local_430[iVar6] + 1;
      iVar7 = *piVar8;
    }
    local_430[iVar4] = local_430[iVar4] + 1;
    piVar8 = local_834 + iVar4;
    local_834[iVar6] = iVar4;
    iVar6 = *piVar8;
    while (-1 < iVar6) {
      iVar6 = *piVar8;
      local_430[iVar6] = local_430[iVar6] + 1;
      piVar8 = local_834 + iVar6;
      iVar6 = *piVar8;
    }
  }
  iVar6 = 0;
  do {
    iVar7 = local_430[iVar6];
    if (iVar7 != 0) {
      if (0x20 < iVar7) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x27;
        (**(code **)*in_ECX)(in_ECX);
      }
      *(char *)((int)&local_2c + iVar7) = *(char *)((int)&local_2c + iVar7) + '\x01';
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x101);
  iVar6 = 0x20;
  do {
    iVar7 = iVar6;
    cVar2 = *(char *)((int)&local_2c + iVar7);
    while (cVar2 != '\0') {
      cVar2 = acStack_2e[iVar7];
      iVar6 = iVar7 + -2;
      while (cVar2 == '\0') {
        cVar2 = acStack_2e[iVar6 + 1];
        iVar6 = iVar6 + -1;
      }
      *(char *)((int)&local_2c + iVar7) = *(char *)((int)&local_2c + iVar7) + -2;
      acStack_2e[iVar7 + 1] = acStack_2e[iVar7 + 1] + '\x01';
      pcVar1 = (char *)((int)&local_2c + iVar6 + 1);
      *pcVar1 = *pcVar1 + '\x02';
      *(char *)((int)&local_2c + iVar6) = *(char *)((int)&local_2c + iVar6) + -1;
      cVar2 = *(char *)((int)&local_2c + iVar7);
    }
    iVar6 = iVar7 + -1;
  } while (0x10 < iVar6);
  cVar2 = acStack_2e[iVar7 + 1];
  while (cVar2 == '\0') {
    cVar2 = acStack_2e[iVar6 + 1];
    iVar6 = iVar6 + -1;
  }
  *(char *)((int)&local_2c + iVar6) = *(char *)((int)&local_2c + iVar6) + -1;
  iVar7 = 1;
  iVar6 = 0;
  *in_EDX = local_2c;
  in_EDX[1] = uStack_28;
  in_EDX[2] = uStack_24;
  in_EDX[3] = uStack_20;
  *(undefined1 *)(in_EDX + 4) = (undefined1)local_1c;
  do {
    iVar4 = 0;
    do {
      if (local_430[iVar4] == iVar7) {
        *(char *)((int)in_EDX + iVar6 + 0x11) = (char)iVar4;
        iVar6 = iVar6 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x21);
  *(undefined1 *)((int)in_EDX + 0x111) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

