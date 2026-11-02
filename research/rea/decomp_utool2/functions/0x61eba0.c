// rea decompile_all
// name: FUN_0061eba0
// address: 0x61eba0
// body: available
// range: 0x61eba0-0x61ec98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0061eba0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 6);
  iVar4 = 0;
  local_10 = 0;
  EnterCriticalSection(lpCriticalSection);
  uVar3 = 0;
  if (0 < in_ECX[2]) {
    bVar7 = in_ECX[2] != 0;
    do {
      if (((bVar7) && (iVar6 = *(int *)(*in_ECX + uVar3 * 4), iVar6 != 0)) &&
         (*(char *)(iVar6 + 0xd) == '\0')) {
        if (*(char *)(iVar6 + 0xc) == '\0') {
          *(undefined1 *)(iVar6 + 0xd) = 1;
          LeaveCriticalSection(lpCriticalSection);
          goto joined_r0x0061ec58;
        }
        FUN_00410320(uVar3);
        *(undefined1 *)(iVar6 + 0xc) = 1;
        *(undefined4 *)(iVar6 + 8) = 0;
        if (*(char *)(iVar6 + 0xe) != '\0') {
          iVar2 = iVar4 + 1;
          iVar5 = iVar4;
          if (0 < iVar2) {
            if (iVar2 < 0) {
              iVar2 = iVar4 + 2;
            }
            FUN_00409cf0((iVar2 >> 1) + iVar4 + 9 & 0xfffffff8);
            iVar5 = local_10;
          }
          iVar4 = iVar5 + 1;
          *(int *)(iVar5 * 4) = iVar6;
          local_10 = iVar4;
        }
        uVar3 = uVar3 - 1;
      }
      uVar3 = uVar3 + 1;
      bVar7 = uVar3 < (uint)in_ECX[2];
    } while ((int)uVar3 < in_ECX[2]);
  }
  LeaveCriticalSection(lpCriticalSection);
  iVar6 = 0;
joined_r0x0061ec58:
  while (0 < iVar4) {
    puVar1 = *(undefined4 **)(iVar4 * 4 + -4);
    iVar4 = iVar4 + -1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  FID_conflict__free((void *)0x0);
  return iVar6;
}

