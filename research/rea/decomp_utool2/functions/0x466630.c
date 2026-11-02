// rea decompile_all
// name: FUN_00466630
// address: 0x466630
// body: available
// range: 0x466630-0x466738 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00466630(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int in_ECX;
  
  if ((DAT_00c8a644 == 0) &&
     ((DVar4 = timeGetTime(), DAT_00c8a644 <= DVar4 || (DVar4 < DAT_00c8a644 - 1000)))) {
    DAT_00c8a644 = DVar4;
  }
  uVar3 = DAT_00c8a644;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x28));
  iVar1 = *(int *)(in_ECX + 0x24);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x1c) + iVar1 * 4);
    if (((int *)*piVar2 == (int *)0x0) ||
       (iVar5 = (**(code **)(*(int *)*piVar2 + 0x14))(), iVar5 < 2)) {
      iVar5 = piVar2[4];
      if (((uint)(*(int *)(in_ECX + 0x18) + iVar5) < uVar3) || (uVar3 < iVar5 - 1000U)) {
        FUN_0046cd10(iVar1,iVar5);
      }
    }
    else {
      piVar2[4] = uVar3;
    }
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (0 < *(int *)(in_ECX + 8)) {
      if (DAT_00c8a668 != 0) {
        if (*(int *)(in_ECX + 0xc) == 0) {
          *(undefined4 *)(DAT_00c8a668 + 0x4c) = *(undefined4 *)(in_ECX + 0x10);
        }
        else {
          *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x10) = *(undefined4 *)(in_ECX + 0x10);
        }
        if (*(int *)(in_ECX + 0x10) != 0) {
          *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc) = *(undefined4 *)(in_ECX + 0xc);
        }
        *(undefined4 *)(in_ECX + 0x10) = 0;
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
      *(undefined4 *)(in_ECX + 8) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x28));
  return;
}

