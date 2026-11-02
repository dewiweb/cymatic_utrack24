// rea decompile_all
// name: FUN_006bb380
// address: 0x6bb380
// body: available
// range: 0x6bb380-0x6bb4de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006bb380(void)

{
  undefined4 *lParam;
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  BOOL BVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  char local_d [9];
  
  if ((DAT_00c8a644 == 0) &&
     ((DVar3 = timeGetTime(), DAT_00c8a644 <= DVar3 || (DVar3 < DAT_00c8a644 - 1000)))) {
    DAT_00c8a644 = DVar3;
  }
  uVar1 = DAT_00c8a644;
  local_d[0] = '\0';
  iVar6 = 99;
  while( true ) {
    cVar2 = FUN_006bb260(local_d);
    if (cVar2 == '\0') {
      if ((local_d[0] != '\0') && (0 < *(int *)(in_ECX + -8))) {
        piVar5 = (int *)(*(int *)(in_ECX + -0x18) + 0xc);
        LOCK();
        iVar6 = *piVar5;
        if (iVar6 == 0) {
          *piVar5 = 1;
          iVar6 = 0;
        }
        UNLOCK();
        if ((iVar6 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
          LOCK();
          *(undefined4 *)(*(int *)(in_ECX + -0x18) + 0xc) = 0;
          UNLOCK();
        }
      }
      return 500;
    }
    if (*(char *)(in_ECX + 0x48) != '\0') break;
    if ((DAT_00c8a644 == 0) &&
       ((DVar3 = timeGetTime(), DAT_00c8a644 <= DVar3 || (DVar3 < DAT_00c8a644 - 1000)))) {
      DAT_00c8a644 = DVar3;
    }
    if ((uVar1 + 0x96 < DAT_00c8a644) || (iVar6 = iVar6 + -1, iVar6 < 0)) break;
  }
  if ((local_d[0] != '\0') && (0 < *(int *)(in_ECX + -8))) {
    piVar5 = (int *)(*(int *)(in_ECX + -0x18) + 0xc);
    LOCK();
    iVar6 = *piVar5;
    if (iVar6 == 0) {
      *piVar5 = 1;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 == 0) {
      lParam = *(undefined4 **)(in_ECX + -0x18);
      if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
        LOCK();
        lParam[1] = lParam[1] + 1;
        UNLOCK();
        BVar4 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
        if (BVar4 != 0) {
          return 0;
        }
      }
      if (lParam != (undefined4 *)0x0) {
        piVar5 = lParam + 1;
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*lParam)(1);
        }
      }
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + -0x18) + 0xc) = 0;
      UNLOCK();
    }
  }
  return 0;
}

