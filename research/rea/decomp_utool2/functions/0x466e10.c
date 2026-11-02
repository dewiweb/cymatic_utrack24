// rea decompile_all
// name: FUN_00466e10
// address: 0x466e10
// body: available
// range: 0x466e10-0x4670d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00466e10(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  byte local_10d;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 0x50d) != '\0') {
    *(undefined1 *)(in_ECX + 0x50d) = 0;
    do {
      iVar1 = FUN_004670e0(*(undefined4 *)(in_ECX + 0x51c),0);
      *(int *)(in_ECX + 0x530) = iVar1;
      *(int *)(in_ECX + 0x52c) = iVar1;
    } while (iVar1 == *(int *)(in_ECX + 0x534));
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (in_ECX + 0x853cU < *(uint *)(in_ECX + 0x1053c)) {
    *(uint *)(in_ECX + 0x1053c) = *(uint *)(in_ECX + 0x1053c) - 4;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = FUN_004670e0(*(undefined4 *)(in_ECX + 0x51c),0);
  do {
    if (iVar1 < 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar1 == *(int *)(in_ECX + 0x534)) {
      FUN_00466d30();
      iVar1 = *(int *)(in_ECX + 0x520) + 1;
      *(int *)(in_ECX + 0x1053c) = in_ECX + 0x853c;
      *(int *)(in_ECX + 0x51c) = iVar1;
      *(int *)(in_ECX + 0x528) = *(int *)(in_ECX + 0x534) * 2;
      *(int *)(in_ECX + 0x524) = *(int *)(in_ECX + 0x534) + 2;
      uVar4 = FUN_004670e0(iVar1,0);
      *(undefined4 *)(in_ECX + 0x530) = uVar4;
      *(undefined4 *)(in_ECX + 0x52c) = uVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar1 == *(int *)(in_ECX + 0x538)) {
      if (*(char *)(in_ECX + 0x50c) != '\0') {
LAB_00467046:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      do {
        iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&local_10d,1);
        if ((iVar2 != 1) ||
           ((*(bool *)(in_ECX + 0x50c) = local_10d == 0, local_10d != 0 &&
            (uVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(local_10c,local_10d),
            uVar3 != local_10d)))) goto LAB_00467046;
      } while (local_10d != 0);
    }
    iVar2 = iVar1;
    if (*(int *)(in_ECX + 0x524) <= iVar1) {
      **(undefined4 **)(in_ECX + 0x1053c) = *(undefined4 *)(in_ECX + 0x52c);
      *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + 4;
      iVar2 = *(int *)(in_ECX + 0x530);
    }
    iVar5 = iVar2;
    if (*(int *)(in_ECX + 0x534) <= iVar2) {
      do {
        **(undefined4 **)(in_ECX + 0x1053c) = *(undefined4 *)(in_ECX + 0x453c + iVar5 * 4);
        *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + 4;
        iVar2 = *(int *)(in_ECX + 0x53c + iVar5 * 4);
        if (iVar5 == iVar2) goto LAB_00467046;
        iVar5 = iVar2;
      } while (*(int *)(in_ECX + 0x534) <= iVar2);
    }
    uVar4 = *(undefined4 *)(in_ECX + 0x453c + iVar2 * 4);
    *(undefined4 *)(in_ECX + 0x52c) = uVar4;
    **(undefined4 **)(in_ECX + 0x1053c) = uVar4;
    *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + 4;
    iVar2 = *(int *)(in_ECX + 0x524);
    if (iVar2 < 0x1000) {
      *(undefined4 *)(in_ECX + 0x53c + iVar2 * 4) = *(undefined4 *)(in_ECX + 0x530);
      *(undefined4 *)(in_ECX + 0x453c + iVar2 * 4) = *(undefined4 *)(in_ECX + 0x52c);
      *(int *)(in_ECX + 0x524) = *(int *)(in_ECX + 0x524) + 1;
      iVar2 = *(int *)(in_ECX + 0x528);
      if ((iVar2 <= *(int *)(in_ECX + 0x524)) && (iVar2 < 0x1000)) {
        *(int *)(in_ECX + 0x51c) = *(int *)(in_ECX + 0x51c) + 1;
        *(int *)(in_ECX + 0x528) = iVar2 * 2;
      }
    }
    *(int *)(in_ECX + 0x530) = iVar1;
    if (in_ECX + 0x853cU < *(uint *)(in_ECX + 0x1053c)) {
      *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + -4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar1 = FUN_004670e0(*(undefined4 *)(in_ECX + 0x51c),0);
  } while( true );
}

