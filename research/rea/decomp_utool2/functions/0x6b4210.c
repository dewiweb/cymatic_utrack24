// rea decompile_all
// name: FUN_006b4210
// address: 0x6b4210
// body: available
// range: 0x6b4210-0x6b431d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b4210(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar6;
  
  DVar4 = timeGetTime();
  if ((DAT_00c8a644 <= DVar4) || (DVar4 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar4;
  }
  if ((*(DWORD *)(in_ECX + 0x20) == 0) || (*(DWORD *)(in_ECX + 0x20) == DVar4)) {
    *(DWORD *)(in_ECX + 0x20) = DVar4;
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x20);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    cVar3 = FUN_00494f00(DVar4 - iVar2);
    if ((cVar3 == '\0') && (FUN_004af280(iVar1,extraout_ECX), 0 < *(int *)(in_ECX + -4))) {
      piVar6 = (int *)(*(int *)(in_ECX + -0x14) + 0xc);
      LOCK();
      iVar5 = *piVar6;
      if (iVar5 == 0) {
        *piVar6 = 1;
        iVar5 = 0;
      }
      UNLOCK();
      if ((iVar5 == 0) && (cVar3 = FUN_0063e270(), cVar3 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + -0x14) + 0xc) = 0;
        UNLOCK();
      }
    }
  }
  *(DWORD *)(in_ECX + 0x20) = DVar4;
  if (*(int *)(in_ECX + 0x1c) == 0) {
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
  return;
}

