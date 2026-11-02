// rea decompile_all
// name: FUN_0047f33b
// address: 0x47f33b
// body: available
// range: 0x47f33b-0x47f541 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f33b(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  bool bVar6;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (*(char *)(in_ECX + 0x50d) == '\0') {
    uVar1 = in_ECX + 0x853c;
    if (uVar1 < *(uint *)(in_ECX + 0x1053c)) {
      *(uint *)(in_ECX + 0x1053c) = *(uint *)(in_ECX + 0x1053c) - 4;
    }
    else {
      do {
        iVar3 = FUN_0047f542(*(undefined4 *)(in_ECX + 0x51c),0);
        if (iVar3 < 0) goto LAB_0047f4d3;
        if (iVar3 == *(int *)(in_ECX + 0x534)) {
          FUN_0047f28d();
          iVar3 = *(int *)(in_ECX + 0x520) + 1;
          *(int *)(in_ECX + 0x524) = *(int *)(in_ECX + 0x534) + 2;
          *(int *)(in_ECX + 0x51c) = iVar3;
          *(int *)(in_ECX + 0x528) = *(int *)(in_ECX + 0x534) * 2;
          *(uint *)(in_ECX + 0x1053c) = uVar1;
          uVar5 = FUN_0047f542(iVar3,0);
          *(undefined4 *)(in_ECX + 0x530) = uVar5;
          *(undefined4 *)(in_ECX + 0x52c) = uVar5;
          goto LAB_0047f4d3;
        }
        if (iVar3 == *(int *)(in_ECX + 0x538)) {
          if (*(char *)(in_ECX + 0x50c) != '\0') goto LAB_0047f4d3;
          do {
            iVar4 = FUN_0047f1bb(local_10c);
          } while (0 < iVar4);
          if (iVar4 != 0) goto LAB_0047f4d3;
        }
        iVar4 = iVar3;
        if (*(int *)(in_ECX + 0x524) <= iVar3) {
          **(undefined4 **)(in_ECX + 0x1053c) = *(undefined4 *)(in_ECX + 0x52c);
          *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + 4;
          iVar4 = *(int *)(in_ECX + 0x530);
        }
        while (*(int *)(in_ECX + 0x534) <= iVar4) {
          **(undefined4 **)(in_ECX + 0x1053c) = *(undefined4 *)(in_ECX + 0x453c + iVar4 * 4);
          *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + 4;
          iVar2 = *(int *)(in_ECX + 0x53c + iVar4 * 4);
          bVar6 = iVar4 == iVar2;
          iVar4 = iVar2;
          if (bVar6) goto LAB_0047f4d3;
        }
        uVar5 = *(undefined4 *)(in_ECX + 0x453c + iVar4 * 4);
        *(undefined4 *)(in_ECX + 0x52c) = uVar5;
        **(undefined4 **)(in_ECX + 0x1053c) = uVar5;
        iVar4 = *(int *)(in_ECX + 0x524);
        *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + 4;
        if (iVar4 < 0x1000) {
          *(undefined4 *)(in_ECX + 0x53c + iVar4 * 4) = *(undefined4 *)(in_ECX + 0x530);
          *(undefined4 *)(in_ECX + 0x453c + iVar4 * 4) = *(undefined4 *)(in_ECX + 0x52c);
          *(int *)(in_ECX + 0x524) = *(int *)(in_ECX + 0x524) + 1;
          iVar4 = *(int *)(in_ECX + 0x528);
          if ((iVar4 <= *(int *)(in_ECX + 0x524)) && (iVar4 < 0x1000)) {
            *(int *)(in_ECX + 0x51c) = *(int *)(in_ECX + 0x51c) + 1;
            *(int *)(in_ECX + 0x528) = iVar4 * 2;
          }
        }
        *(int *)(in_ECX + 0x530) = iVar3;
      } while (*(uint *)(in_ECX + 0x1053c) <= uVar1);
      *(int *)(in_ECX + 0x1053c) = *(int *)(in_ECX + 0x1053c) + -4;
    }
  }
  else {
    *(char *)(in_ECX + 0x50d) = '\0';
    do {
      iVar3 = FUN_0047f542(*(undefined4 *)(in_ECX + 0x51c),0);
      *(int *)(in_ECX + 0x530) = iVar3;
      *(int *)(in_ECX + 0x52c) = iVar3;
    } while (iVar3 == *(int *)(in_ECX + 0x534));
  }
LAB_0047f4d3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

